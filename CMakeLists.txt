cmake_minimum_required(VERSION 3.21)
project("main")

add_executable(main hello.cpp stat.cpp main.cpp)
target_compile_features(main PRIVATE cxx_std_20)
target_compile_options(main PRIVATE -fmodules-ts)
