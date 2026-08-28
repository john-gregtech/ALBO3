cmake_minimum_required(VERSION 3.23)
project(MessangerClient)

add_executable(CLIENT)

target_sources(
    CLIENT
    PRIVATE 
        main.cpp
        src/c++/client.cpp

    PUBLIC
        FILE_SET local_headers
        BASE_DIRS
            src/c++/include
        FILES
            src/c++/include/client.hpp
    )