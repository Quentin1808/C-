cmake_minimun_required( VERSION 3.0)
project( TP1 )
set( CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14 -Wall -Wextra" )
set( CMAKE_BUILD_TYPE Debug)

add_executable( execTP1 src/main.cpp src/fibonacci.cpp  )
