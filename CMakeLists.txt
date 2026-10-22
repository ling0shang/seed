cmake_minimum_required(VERSION 3.20)
project(seed VERSION 0.1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_library(seed
    src/version.cpp
)

target_include_directories(seed PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
)

target_compile_features(seed PUBLIC cxx_std_17)

if(MSVC)
    target_compile_options(seed PRIVATE /W4 /WX)
else()
    target_compile_options(seed PRIVATE -Wall -Wextra -Wpedantic -Werror)
endif()