# set minimum cmake version
cmake_minimum_required(VERSION 3.5 FATAL_ERROR)

# project name and language
project(recipe-03 LANGUAGES CXX)

# generate a library from sources
add_library(message-objs
        SHARED
            Message.cpp
            Message.h
        )

# this is only needed for older compilers
# but doesn't hurt either to have it
set_target_properties(message-objs
        PROPERTIES
            OUTPUT_NAME "message"
        )

add_library(message-static
        STATIC
            $<TARGET_OBJECTS:message-objs>
        )

set_target_properties(message-objs
        PROPERTIES
        OUTPUT_NAME "message"
        )

add_executable(hello-world hello-world.cpp)

target_link_libraries(hello-world message-static)