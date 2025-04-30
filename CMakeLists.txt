cmake_minimum_required(VERSION 3.5...4.0)
project(tvp2win32)

add_subdirectory(core)

add_executable(krkr
  core/environ/win32/tvpwin32.cpp)
target_link_libraries(krkr PRIVATE
  tjs2
  base
  utils
  msg)
if(WIN32)
set_target_properties(krkr PROPERTIES
  WIN32_EXECUTABLE TRUE)
endif()
set_target_properties(krkr PROPERTIES
  SUFFIX ".eXe")
