cmake_minimum_required(VERSION 2.4)

project(test_env)

include_directories(${PROJECT_SOURCE_DIR}/libs)
if (WIN32)
  add_executable(app src/main.c src/functions_win.h src/functions_win.c)
endif (WIN32)

if (UNIX)
  add_executable(app src/main.c src/functions_unix.h src/functions_unix.c)
endif (UNIX)