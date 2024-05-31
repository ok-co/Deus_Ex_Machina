cmake_minimum_required(VERSION 3.27.7)

project(deusexmachina)

add_executable(deusexmachina src/main.cpp
        src/Space.cpp
        src/Space.h
        src/Cell.cpp
        src/Cell.h
        src/Atom.cpp
        src/Atom.h)

find_package(glfw3 CONFIG REQUIRED)
target_link_libraries(deusexmachina PRIVATE glfw)

find_package(glad CONFIG REQUIRED)
target_link_libraries(deusexmachina PRIVATE glad::glad)

find_package(imgui CONFIG REQUIRED)
target_link_libraries(deusexmachina PRIVATE imgui::imgui)

find_package(OpenGL REQUIRED)
target_link_libraries(deusexmachina PRIVATE OpenGL::GL)

set(CMAKE_CXX_STANDARD 23)
