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
