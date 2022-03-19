cmake_minimum_required(VERSION 3.5)
project (WDHL)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(HEADERS
    WDHL/EventLoop.h
    WMHL/MouseHook.h
    WKHL/KeyboardHook.h
    )

set(SOURCES
    WDHL/EventLoop.cpp
    WMHL/MouseHook.cpp
    WKHL/KeyboardHook.cpp
    )

source_group("Source Files" FILES ${SOURCES})
source_group("Header Files" FILES ${HEADERS})

set(PROJECT_CONTENT ${SOURCES} ${HEADERS})

add_library(${PROJECT_NAME} ${PROJECT_CONTENT})
add_library(WDHL::WDHL ALIAS ${PROJECT_NAME})

target_include_directories( ${PROJECT_NAME}
    PUBLIC
    ${PROJECT_SOURCE_DIR})
