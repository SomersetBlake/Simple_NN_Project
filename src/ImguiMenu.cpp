#include "../include/ImguiMenu.h"


ImguiMenu::ImguiMenu(){
        std::cout<<"ImguiWindow CREATED"<<std::endl;
    menuFlags = ImGuiWindowFlags_NoMove |
            ImGuiWindowFlags_NoResize |
            ImGuiWindowFlags_NoCollapse |
            ImGuiWindowFlags_NoSavedSettings |
            ImGuiWindowFlags_AlwaysAutoResize |
            ImGuiWindowFlags_NoTitleBar;
}

ImguiMenu::~ImguiMenu(){};

void ImguiMenu::render(){
        createWindow();
        ImGui::Render();
        ImGui_ImplSDLRenderer2_RenderDrawData(ImGui::GetDrawData());
}

void ImguiMenu::createWindow(){
        ImGui_ImplSDLRenderer2_NewFrame();
        ImGui_ImplSDL2_NewFrame();
        ImGui::NewFrame();
        ImGui::SetNextWindowPos(menuPos);
        ImGui::SetNextWindowSize(menuSize);
        ImGui::Begin("Top TEXT",NULL,menuFlags);
        setItems();
        ImGui::End();
}

void ImguiMenu::setAlign(float x1, float y1, float width, float height){
        menuPos = {x1,y1};
        menuSize = {width,height};
}


void ImguiMenu::setItems(){
    if(ImGui::Button("Click Me", ImVec2(ImGui::GetWindowSize().x * 0.9,20)))
        std::cout<<"I was clicked"<<std::endl;
    
    ImGui::Spacing();
    ImGui::Spacing();
    ImGui::Text("Average Cost:");
    ImGui::Text("%f",GLOBAL::AverageCost);
    ImGui::Text("%d / %d",GLOBAL::NeuralData,GLOBAL::ExpectedData);

    double v_min = -25;
    double v_max = 25;
    double b_min = -25;
    double b_max = 25;
    std::string weightLabel = "Weight ";
    for(int i=0; i<GLOBAL::weights.size();i++){
        weightLabel += i;
        ImGui::PushItemWidth(menuSize.x *0.9);
        ImGui::Text("Weight %d: ",i);
        ImGui::SliderScalar(weightLabel.c_str(), ImGuiDataType_Double, &GLOBAL::weights[i], &v_min, &v_max);
        weightLabel = "Weight ";
        ImGui::Spacing();
    }       
        weightLabel = "Bias ";
    for(int i=0; i<GLOBAL::biases.size();i++){
        weightLabel += i;
        ImGui::PushItemWidth(menuSize.x *0.9);
        ImGui::Text("Bias %d: ",i);
        ImGui::SliderScalar(weightLabel.c_str(), ImGuiDataType_Double, &GLOBAL::biases[i], &b_min, &b_max);
        weightLabel = "Bias ";
        ImGui::Spacing();
    }          
    
    ImGui::Spacing();
    ImGui::Spacing();
    ImGui::Text("FRAMERATE");
    ImGui::Text("%f",ImGui::GetIO().Framerate);
}