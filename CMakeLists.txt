cmake_minimum_required(VERSION 3.20)

project(PrivateNetwork LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(private_network
    main.cc
    Components/server.cc
)

target_include_directories(private_network PRIVATE
    Components
)