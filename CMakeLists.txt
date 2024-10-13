cmake_minimum_required(VERSION 3.10)

project(Donut)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(SOURCES
    src/engine.cpp
    main/main.cpp
    src/utils.cpp
    src/game.cpp
)

add_executable(main ${SOURCES})

if(CMAKE_BUILD_TYPE STREQUAL "Debug")
    target_compile_definitions(main PRIVATE NV_DEBUG)
elseif(CMAKE_BUILD_TYPE STREQUAL "Release")
    target_compile_definitions(main PRIVATE NV_RELEASE)
endif()

# Find SDL2
find_package(SDL2 REQUIRED)
include_directories(${SDL2_INCLUDE_DIRS})

# Set paths manually for SDL2_gfx
set(SDL2_GFX_INCLUDE_DIR "/usr/include/SDL2")
set(SDL2_GFX_LIBRARIES "/usr/lib/x86_64-linux-gnu/libSDL2_gfx.so")  # Adjust if necessary

# Include SDL_gfx
include_directories(${SDL2_GFX_INCLUDE_DIR})

# Link SDL2 and SDL_gfx to the executable
target_link_libraries(main ${SDL2_LIBRARIES} ${SDL2_GFX_LIBRARIES})
