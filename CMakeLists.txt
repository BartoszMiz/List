cmake_minimum_required(VERSION 3.10)

project(My_List)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS ON)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Werror")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pedantic")

set(LIBRARY_OUTPUT_PATH Build/)
set(BINARY_OUTPUT_PATH Build/)
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)

include(External_GTest.cmake)

# SRC
include_directories(Include)
include_directories(Source)
include_directories(Test)

add_executable(my_list "main.cpp" "Source/List.cpp")
set(TEST_BINARY_FILES $<TARGET_OBJECTS:source_objects_lib>
                      ${TEST_FILES}
                      ${MAIN_TEST})

add_executable(my_list_UT "test.cpp" "Source/List.cpp")
target_link_libraries(my_list_UT 	${GTEST_MAIN_LIBRARY}
                                                ${GTEST_LIBRARY}
                                                ${GMOCK_MAIN_LIBRARY}
                                                ${GMOCK_LIBRARY})