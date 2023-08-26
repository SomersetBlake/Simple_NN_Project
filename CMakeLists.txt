cmake_minimum_required(VERSION 3.22.1)
project(TEST)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/out/")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/./")
set(IMGUI_SOURCES
	imgui/imgui.cpp
	imgui/imgui_demo.cpp
	imgui/imgui_tables.cpp
	imgui/imgui_draw.cpp
	imgui/imgui_widgets.cpp
	imgui/imgui_impl_sdl2.cpp
	imgui/imgui_impl_sdlrenderer2.cpp
	)
find_package(SDL2 REQUIRED)
find_package(SDL2_image REQUIRED)
include_directories(${PROJECT_NAME} PUBLIC ${SDL2_INCLUDE_DIRS})
include_directories(${PROJECT_NAME} PUBLIC ${SDL2_IMAGE_INCLUDE_DIRS})
include_directories(${PROJECT_NAME} PUBLIC imgui)
include_directories(include)
file(GLOB SOURCES "src/*.cpp" "src/NeuralNetwork/*.cpp")

add_executable(${PROJECT_NAME} main.cpp ${SOURCES} ${IMGUI_SOURCES})
target_link_libraries(${PROJECT_NAME} ${SDL2_LIBRARIES} ${SDL2_IMAGE_LIBRARIES})

