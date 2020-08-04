cmake_minimum_required(VERSION 3.10)

set(PROJECT_NAME RulerMusic)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

project(${PROJECT_NAME} LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

find_package(Qt5 COMPONENTS Core Gui Widgets REQUIRED)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${PROJECT_SOURCE_DIR}/build/bin")
set(CMAKE_CXX_FLAGS "-Wall -Wextra -O2 --pedantic-errors -DGCC=gcc-9")

include_directories("${RulerMusic_SOURCE_DIR}/include")
file(GLOB RulerMusic_SOURCES "${RulerMusic_SOURCE_DIR}/src/*.cpp")
file(GLOB RulerMusic_HEADERS "${RulerMusic_SOURCE_DIR}/include/*.hpp")

add_executable(RulerMusic ${RulerMusic_SOURCES} ${RulerMusic_HEADERS})
target_link_libraries(${PROJECT_NAME} Qt5::Core Qt5::Widgets)