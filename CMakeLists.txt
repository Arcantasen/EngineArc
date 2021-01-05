cmake_minimum_required(VERSION 3.0.0)
project(Hazel VERSION 0.1.0)

include(CTest)
enable_testing()

set(SOURCE_DIR Hazel/src/Hazel/)

add_library(Hazel SHARED ${SOURCE_DIR}Application.cpp)

add_executable(Sandbox Sandbox/SandboxApp.cpp)

add_dependencies(Sandbox Hazel)

target_link_libraries(Sandbox Hazel)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
