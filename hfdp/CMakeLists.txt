cmake_minimum_required(VERSION 3.20)
project(hfdp)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_CXX_FLAGS_RELEASE "-g -NODEBUG -O2")
# add_definitions(-DBOOST_BIND_GLOBAL_PLACEHOLDERS)

# header files
include_directories(${CMAKE_SOURCE_DIR}/source/01_strategy/inc)

# link files
# link_directories(/usr/local/lib)

add_subdirectory(source/01_strategy)
