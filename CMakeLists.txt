cmake_minimum_required (VERSION 3.15)

set (PROY mangacli)
project (${PROY} C CXX)

# Source files folder
set (SRC_DIR src)

# Header files folder
set (INCL_DIR include)

# Compiler flags
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -Wall -Werror")

include_directories (${PROJECT_SOURCE_DIR}/${INCL_DIR})

set (SOURCE
${SRC_DIR}/main.cpp
${SRC_DIR}/manga.cpp
        src/shelf.cpp

)

# Output folder
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${PROJECT_SOURCE_DIR}/bin")

add_executable (${PROY} ${SOURCE})
