cmake_minimum_required(VERSION 3.16)
project(MyCloverApp)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

include(FetchContent)

FetchContent_Declare(
    clover
    GIT_REPOSITORY https://github.com/jhayonline/clover.git
    GIT_TAG master
)

FetchContent_MakeAvailable(clover)

add_executable(clover_app src/main.cpp)

target_include_directories(myapp PRIVATE ${clover_SOURCE_DIR}/include)

target_link_libraries(myapp PRIVATE clover)

file(COPY config.yaml DESTINATION ${CMAKE_BINARY_DIR})
