message(STATUS "TicTacToeGame Project by Sammi")

cmake_minimum_required(VERSION 2.0)

set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

include_directories(inc) #To include header files

project(tic-tac-toe)

add_executable (
	tic-tac-toe	#Name of the executable
 	src/main.cpp	#Name of the source file
	src/TicTacToeGame.cpp
)
