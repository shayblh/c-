cmake_minimum_required(VERSION 3.23)
project(cartesian_vector)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(cartesian_vector
        config.h
        main.cc
        main_new.cc
        vector.hh)
