cmake_minimum_required(VERSION 3.10)


project(mi-proyecto-algebra LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(linalg
        src/matrix/matrix.c
        src/main.cpp
        src/main.cpp
        src/main.cpp
        include/linalg/matrix.h
        # src/matrix/operations.c
        # src/vector/operations.c
)


target_include_directories(linalg PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)



add_executable(algebra_tool src/main.cpp
        src/main.cpp
        include/linalg/main.h
        src/main.cpp
        src/main.cpp
        src/main.cpp
        src/main.cpp
        src/matrix/matrix.c
        include/linalg/matrix.h)


target_link_libraries(algebra_tool PRIVATE linalg)