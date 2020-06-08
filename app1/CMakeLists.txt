cmake_minimum_required(VERSION 3.0)

project(cmake_qt_example)

set(SRCS
    src/main.cpp
    )
    
add_executable(main ${SRCS})

target_link_libraries(main hello)

