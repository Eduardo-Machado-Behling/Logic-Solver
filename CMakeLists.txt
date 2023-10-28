cmake_minimum_required(VERSION 3.0.0)
project(lsolver VERSION 0.1.0 LANGUAGES C)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})

set(SOURCE_FILES
    src/main.c
    src/stack.c
)

add_executable(lsolver ${SOURCE_FILES})
