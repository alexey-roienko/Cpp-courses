# Minimal cmake version required
cmake_minimum_required(VERSION 3.1)

# Project title
project(task2_2)

# Language version required: C++ 14
set(CMAKE_CXX_STANDARD 14)

# Source files
set(SRCS	
	ScdrDevice.h ScdrDevice.cpp
	Diode.h Diode.cpp
	Transistor.h Transistor.cpp
	BJTransistor.h BJTransistor.cpp
	FETransistor.h FETransistor.cpp
    task2_2.cpp
)

#  Executable created from ${SRCS}
add_executable(${PROJECT_NAME} ${SRCS})