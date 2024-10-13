cmake_minimum_required(VERSION 3.10)

project(Donut)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(SOURCES
    src/engine.cpp
    main/main.cpp
)

add_executable(main ${SOURCES})

if(CMAKE_BUILD_TYPE STREQUAL "Debug")
    target_compile_definitions(main PRIVATE NV_DEBUG)
elseif(CMAKE_BUILD_TYPE STREQUAL "Release")
    target_compile_definitions(main PRIVATE NV_RELEASE)
endif()