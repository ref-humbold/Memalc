cmake_minimum_required(VERSION 3.5)
project(Memalc VERSION 0.2.190628)

# COMPILER
set(CMAKE_C_STANDARD 99)
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -Wextra -Wno-unknown-pragmas")
set(CMAKE_POSITION_INDEPENDENT_CODE true)

# PACKAGES
set(CMAKE_THREAD_PREFER_PTHREAD true)
set(THREADS_PREFER_PTHREAD_FLAG true)
find_package(Threads REQUIRED)

# SOURCES
include_directories(include)

set(MEMALC_SOURCES src/memalc.c)
set(PTHREADSEM_SOURCES src/pthreadsem.c)

# OUTPUT
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY dist)
add_library(memalc SHARED ${MEMALC_SOURCES})
target_link_libraries(memalc Threads::Threads)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY dist)
add_library(pthreadsem STATIC ${PTHREADSEM_SOURCES})
target_link_libraries(pthreadsem Threads::Threads)
