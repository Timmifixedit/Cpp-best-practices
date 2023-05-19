cmake_minimum_required(VERSION 3.10)
project(backwards_test)
include(FetchContent)

# Also requires one of: libbfd (gnu binutils), libdwarf, libdw (elfutils)
FetchContent_Declare(backward
        GIT_REPOSITORY https://github.com/bombela/backward-cpp
        GIT_TAG v1.6)
FetchContent_MakeAvailable(backward)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_FLAGS "-g")

set(EXEC_NAME test)
add_executable(${EXEC_NAME} test.cpp ${BACKWARD_ENABLE})
add_backward(${EXEC_NAME})
