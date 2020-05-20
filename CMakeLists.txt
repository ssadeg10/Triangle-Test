cmake_minimum_required(VERSION 3.16)
set(CMAKE_CXX_STANDARD 14)
#project() insert project name (no "")
add_executable(${PROJECT_NAME} src/main.cpp)

find_package(GLUT REQUIRED)
target_include_directories(${PROJECT_NAME} PUBLIC ${GLUT_INCLUDE_DIRS})
target_link_libraries(${PROJECT_NAME} ${GLUT_LIBRARIES})

find_package(OpenGL REQUIRED)
target_include_directories(${PROJECT_NAME} PUBLIC ${OPENGL_INCLUDE_DIR})
target_link_libraries(${PROJECT_NAME} ${OPENGL_LIBRARIES})

#find_package(GLEW 2.0 REQUIRED)
#target_include_directories(${PROJECT_NAME} PUBLIC ${GLEW_INCLUDE_DIR})
#target_link_libraries(${PROJECT_NAME} GLEW::GLEW)
#
#find_package(SDL2 REQUIRED)
#target_include_directories(${PROJECT_NAME} PUBLIC ${SDL2_INCLUDE_DIR})
#target_link_libraries(${PROJECT_NAME} ${SDL2_LIBRARIES})
#
#find_package(Freetype REQUIRED)
#target_include_directories(${PROJECT_NAME} PUBLIC ${FREETYPE_INCLUDE_DIRS})
#target_link_libraries(${PROJECT_NAME} ${FREETYPE_LIBRARIES})
