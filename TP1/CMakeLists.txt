cmake_minimun_required( VERSION 3.0)
project( TP1 )
set( CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14 -Wall -Wextra" )
set( CMAKE_BUILD_TYPE Debug)

add_executable( execTP1 src/main.cpp src/fibonacci.cpp  )

# tests unitaires
find_package(PkgConfig REQUIRED)
pkg_check_modules(PKG REQUIRED cpputest)
include_directories(${PKG_INCLUDE_DIRS})
add_executable( mainTest src/main_test.cpp src/fibonacci.cpp src/fibonacci_test.cpp)
target_link_libraries(main_test.out ${PKG_LIBRARIES})
