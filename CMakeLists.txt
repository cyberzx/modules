cmake_minimum_required(VERSION 3.21)
project("modules")

add_library(std_imports string.hu)
target_compile_features(std_imports PRIVATE cxx_std_20)

add_library(math math.cpp)
target_compile_features(math PRIVATE cxx_std_20)
target_link_libraries(math std_imports)

add_executable(a.out main.cpp)
target_link_libraries(a.out math)
target_compile_features(a.out PRIVATE cxx_std_20)

if (${CMAKE_C_COMPILER_ID} MATCHES GNU)
  set_source_files_properties(string.hu PROPERTIES LANGUAGE CXX)
  set_source_files_properties(string.hu PROPERTIES COMPILE_FLAGS
    -fmodule-header -x c++-header)
  target_compile_options(a.out PRIVATE -fmodules-ts)
  target_compile_options(math PRIVATE -fmodules-ts)
else()
  message(FATAL_ERROR "Unsupported compiler ${CMAKE_C_COMPILER_ID}")
endif()
