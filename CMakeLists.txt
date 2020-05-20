cmake_minimum_required(VERSION 3.16)
set(CMAKE_CXX_STANDARD 14)
project(TextEditor)
add_executable(TextEditor src/main.cpp)

find_package(GLUT REQUIRED)
target_include_directories(TextEditor PUBLIC ${GLUT_INCLUDE_DIRS})
target_link_libraries(TextEditor ${GLUT_LIBRARIES})

find_package(OpenGL REQUIRED)
target_include_directories(TextEditor PUBLIC ${OPENGL_INCLUDE_DIR})
target_link_libraries(TextEditor ${OPENGL_LIBRARIES})

#find_package(GLEW 2.0 REQUIRED)
#target_include_directories(TextEditor PUBLIC ${GLEW_INCLUDE_DIR})
#target_link_libraries(TextEditor GLEW::GLEW)
#
#find_package(SDL2 REQUIRED)
#target_include_directories(TextEditor PUBLIC ${SDL2_INCLUDE_DIR})
#target_link_libraries(TextEditor ${SDL2_LIBRARIES})
#
#find_package(Freetype REQUIRED)
#target_include_directories(TextEditor PUBLIC ${FREETYPE_INCLUDE_DIRS})
#target_link_libraries(TextEditor ${FREETYPE_LIBRARIES})
