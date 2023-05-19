cmake_minimum_required(VERSION 3.10)
project(backwards_test)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_FLAGS "-g")

set(EXEC_NAME test)
add_executable(${EXEC_NAME} test.cpp ${BACKWARD_ENABLE})
