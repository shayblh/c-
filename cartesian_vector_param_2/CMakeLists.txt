cmake_minimum_required(VERSION 3.23)
project(cartesian_vector_param_2)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(main
        config.h
        main_new.cc
        vector.cpp
        vector.hh)
