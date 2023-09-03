#include "../include/mediaController.h"
#include <cstdint>
#include <time.h>
#include <cstdlib>

MediaController::MediaController(){
    app = new Media();
    app->init("Graph", 1440, 720);
    setGraphSize(Media::SCREEN_WIDTH*0.1, Media::SCREEN_HEIGHT*0.1, Media::SCREEN_WIDTH*0.9, Media::SCREEN_HEIGHT*0.9);
    
    testNetwork = NeuralNetwork(3,2,3,2);
}

MediaController::~MediaController(){
    delete app;
    for(int i=0;i<objects.size(); i++)
        delete objects[i];
}

void MediaController::run(){
    int frameRate = 1000/60;
    uint32_t startFrame;
    uint32_t delta;


    addObjects();
    drawCircles();

    //main loop
    while(app->isRunning()){
        startFrame = SDL_GetTicks();

        while(SDL_PollEvent(&event)){
            app->handleEvents(event);
        }//while
        renderObjects();
        
        delta = SDL_GetTicks() - startFrame;
        if(delta<frameRate){
            SDL_Delay(frameRate - delta);
        }//if
    }//while
}

void MediaController::renderObjects(){
    SDL_RenderClear(Media::ren);
    for(int i = 0; i<objects.size(); i++){
        objects[i]->render();
    }
    rightMenu.render();
    testNetwork.updateWeights();
    graphTest();
    SDL_RenderPresent(Media::ren);
}

void MediaController::addObjects(){
    rightMenu.setAlign(graphRect.x_right,0,
    Media::SCREEN_WIDTH-graphRect.x_right, Media::SCREEN_HEIGHT
    );
    ScreenObject* background = new ScreenTexture("resources/background.png");
    objects.push_back(background);

    SDL_Rect linePos = {0,0,0,0};
    SDL_Colour colour = {255,255,255};
    ScreenObject* line = new ScreenGeometry(ScreenGeometry::geometryType::LINE,linePos, colour);
    objects.push_back(line);
}

void MediaController::drawCircles(){
    //Generating Points
    Point* points[GLOBAL::x_max][GLOBAL::y_max];
    for(int i=0;i<GLOBAL::x_max*GLOBAL::y_max;i++){
        points[i%GLOBAL::x_max][i/GLOBAL::x_max] = new Point(i%GLOBAL::x_max,i/GLOBAL::x_max);
    }
    int expectedPoints = 0;

    //Circle data
    ScreenGeometry* circles[GLOBAL::x_max * GLOBAL::y_max] ;
    SDL_Color colour = {255,255,255,255};
    int xPos = 0;
    int yPos = 0;
    int x_offset = graphRect.width / GLOBAL::x_max;
    int y_offset = graphRect.height / GLOBAL::y_max;
    int circleSize = x_offset/8;
    int xStart = graphRect.x_left + circleSize;
    int yStart = graphRect.y_left + circleSize;
    int currentX;
    int currentY;

    for(int i=0; i<GLOBAL::x_max * GLOBAL::y_max; i++){
        currentX =   i%GLOBAL::x_max;
        currentY = i/GLOBAL::x_max;
        xPos = x_offset * (currentX);
        yPos = y_offset * (currentY);

        points[currentX][currentY]->setCoords(currentX, currentY);
        dataPoints.push_back(*(points[currentX][currentY]));
        if(points[currentX][currentY]->isDangerous()){
            colour = {255,0,0,255};
            expectedPoints++;
        }else {
            colour = {255,255,255,255};
        }
        SDL_Rect circlePos = {xStart + xPos - circleSize * 4,yStart + yPos - circleSize * 4,circleSize,circleSize};
        circles[i] = new ScreenGeometry(ScreenGeometry::geometryType::FILL_CIRCLE,circlePos,colour);
        objects.push_back(circles[i]);
            }//for
    
    GLOBAL::ExpectedData = expectedPoints;
}

int MediaController::getGraph_leftCorner(){ return graphRect.x_left;}
int MediaController::getGraph_rightCorner(){ return graphRect.y_left;}
int MediaController::getGraph_bottomRCorner(){ return graphRect.x_right;}
int MediaController::getGraph_bottomLCorner(){ return graphRect.y_right;}
int MediaController::getGraph_width(){ return graphRect.width;}
int MediaController::getGraph_height(){ return graphRect.height;}
void MediaController::setGraphSize(int x1, int y1, int x2, int y2){
    graphRect.x_left = x1;
    graphRect.y_left = y1;
    graphRect.x_right = x2;
    graphRect.y_right = y2;
    graphRect.width = graphRect.x_right - graphRect.x_left;
    graphRect.height = graphRect.y_right - graphRect.y_left;
}

int MediaController::classifyColor(int x, int y){
    std::vector<double> coords = {(double)x,(double)y};
    int output = testNetwork.classifyOutput(coords);
    return output;
}

void MediaController::graphTest(){
    int xCount = GLOBAL::x_max ;
    int yCount = GLOBAL::y_max ;
    int rectXSize = graphRect.width/xCount;
    int rectYSize = graphRect.height/yCount;
    int startX = graphRect.x_left - rectXSize;
    int startY = graphRect.y_left - rectYSize;
    SDL_Rect tempRect = {0,0,rectXSize,rectYSize};
    int redPoints = 0;

    SDL_SetRenderDrawBlendMode(Media::ren, SDL_BLENDMODE_BLEND);
    for(int i=0; i<xCount ; i++){
        for(int k=0; k<yCount; k++){
            if(classifyColor(i, k)){
                SDL_SetRenderDrawColor(Media::ren, 255, 0, 0, 50);
                redPoints++;
            }
            else{
                SDL_SetRenderDrawColor(Media::ren, 255, 255, 255, 50);
            }
            tempRect.x = i * rectXSize + startX;
            tempRect.y = k * rectYSize + startY;
            SDL_RenderFillRect(Media::ren, &tempRect);
        }
    }
    GLOBAL::NeuralData = redPoints;
    GLOBAL::AverageCost = testNetwork.networkCost(dataPoints);
    testNetwork.learnNetwork(dataPoints, 0.05);
}


void MediaController::graphCost(){
    
}