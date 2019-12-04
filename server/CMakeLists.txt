cmake_minimum_required(VERSION 3.14)
project(ServerKeylogger)

set(CMAKE_CXX_STANDARD 17)
link_libraries(ws2_32)
add_executable(ServerKeylogger main.cpp includes/EasyHeader.cpp includes/nsock.cpp includes/Events.cpp includes/EasyMultServer.cpp)