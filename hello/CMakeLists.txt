cmake_minimum_required(VERSION 3.0)

project(libhello)

set (SRCS src/hello.cpp)
set (HEADERS include/hello.h)

add_library(hello STATIC ${SRCS} ${HEADERS})

target_include_directories(hello PUBLIC include/)

install(TARGETS hello DESTINATION lib)
install(FILES include/hello.h DESTINATION include)
