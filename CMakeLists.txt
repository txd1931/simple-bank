cmake_minimum_required(VERSION 3.10)

project(SandBox VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Bank main.cpp Bank.cpp)