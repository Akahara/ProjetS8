cmake_minimum_required(VERSION 3.24)
project(Projet_S8)

set(CMAKE_CXX_STANDARD 23)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/output)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/output)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/output)

add_subdirectory(Solver/vendor/OpenXLSX)

add_executable(Projet_S8 Solver/src/main.cpp)
target_link_libraries(Projet_S8 OpenXLSX::OpenXLSX)
