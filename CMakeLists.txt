cmake_minimum_required(VERSION 2.8.3)
project(cmake_practice2)
find_package(catkin REQUIRED COMPONENTS
 roscpp
)

catkin_package(
 CATKIN_DEPENDS
  roscpp
)

include_directories(
 include
 ${catkin_INCLUDE_DIRS}
)

add_library(TestLib src/TestLib.cpp)

add_executable(main src/main.cpp)
target_link_libraries(main
 ${catkin_LIBRARIES}
 TestLib
)
