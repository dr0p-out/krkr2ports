add_library(tjs2 INTERFACE)
target_compile_definitions(tjs2 INTERFACE
  -DTJS_JP_LOCALIZED)
if(WIN32)
target_compile_definitions(tjs2 INTERFACE
  -DTJS_TEXT_OUT_CRLF)
endif()
target_include_directories(tjs2 INTERFACE
  tjs2)

add_library(base INTERFACE)
target_include_directories(base INTERFACE
  base
  base/win32)

add_library(utils INTERFACE)
target_include_directories(utils INTERFACE
  utils)

add_library(msg INTERFACE)
target_include_directories(msg INTERFACE
  msg
  msg/win32)
