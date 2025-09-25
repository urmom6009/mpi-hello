cmake_minimum_required(VERSION 3.20)
project(mpi_hello LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(MPI REQUIRED)

add_executable(hello_mpi src/hello_mpi.cpp)
target_link_libraries(hello_mpi PRIVATE MPI::MPI_CXX)

target_include_directories(hello_mpi PRIVATE include)


