cmake_minimum_required(VERSION 3.10)
project(Memalc VERSION 0.2.190628)

# PROPERTIES
set(MEMALC_LIB_NAME memalc)
set(PTHREADSEM_LIB_NAME pthreadsem)

set(INCLUDE_DIR "${PROJECT_SOURCE_DIR}/include")
set(SRC_DIR "${PROJECT_SOURCE_DIR}/src")
set(TEST_DIR "${PROJECT_SOURCE_DIR}/test")
set(EXE_OUTPUT_DIR "${PROJECT_SOURCE_DIR}/bin")
set(LIB_OUTPUT_DIR "${PROJECT_SOURCE_DIR}/dist")
set(DOCS_OUTPUT_DIR "${PROJECT_SOURCE_DIR}/docs")

# COMPILER
set(CMAKE_C_STANDARD 99)
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -Wextra -Wno-unknown-pragmas -O2")
set(CMAKE_POSITION_INDEPENDENT_CODE true)

# PACKAGES
set(CMAKE_THREAD_PREFER_PTHREAD true)
set(THREADS_PREFER_PTHREAD_FLAG true)
find_package(Threads REQUIRED)

# SOURCES
include_directories(${INCLUDE_DIR})

# OUTPUT
add_subdirectory(${SRC_DIR})
