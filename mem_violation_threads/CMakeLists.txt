cmake_minimum_required(VERSION 3.0)	

project(mem_violation_threads)	
set(CMAKE_CXX_STANDARD 14)	

add_executable(mem_violation_threads main.cpp)

find_package(Threads REQUIRED)
target_link_libraries(mem_violation_threads Threads::Threads)