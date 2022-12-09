cmake_minimum_required(VERSION 3.0.0)

add_executable(25_1_operation main.cpp ${MY_INCLUDE_DIR}/operation.h operation.cpp  ${MY_INCLUDE_DIR}/point.h point.cpp )

target_include_directories(25_1_operation PUBLIC ${MY_INCLUDE_DIR})