cmake_minimum_required(VERSION 3.20)
project(hfdp)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_CXX_FLAGS_RELEASE "-g -NODEBUG -O2")
# add_definitions(-DBOOST_BIND_GLOBAL_PLACEHOLDERS)

# header files
include_directories(${CMAKE_SOURCE_DIR}/include)
include_directories(${CMAKE_SOURCE_DIR}/source/01_strategy/inc)
include_directories(${CMAKE_SOURCE_DIR}/source/02_observer/inc)
include_directories(${CMAKE_SOURCE_DIR}/source/03_decorator/inc)
include_directories(${CMAKE_SOURCE_DIR}/source/04_factory/inc)
include_directories(${CMAKE_SOURCE_DIR}/source/05_singleton/inc)

# link files
# link_directories(/usr/local/lib)

add_subdirectory(source/01_strategy)
add_subdirectory(source/02_observer)
add_subdirectory(source/03_decorator)
add_subdirectory(source/04_factory)
add_subdirectory(source/05_singleton)
