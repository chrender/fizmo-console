
cmake_minimum_required(VERSION 3.10)

include(ExternalProject)
include(FindPkgConfig)

project(fizmo-console
  LANGUAGES C
  HOMEPAGE_URL https://fizmo.spellbreaker.org
  DESCRIPTION "fizmo console frontend"
  VERSION 0.9.0)

option(ENABLE_TRACING "Enable tracing" OFF)
if (ENABLE_TRACING)
  add_definitions(-DENABLE_TRACING)
endif()

option(ENABLE_READCHAR_VIA_TERMIOS "Enable readchar via termios" ON)
if (ENABLE_READCHAR_VIA_TERMIOS)
  add_definitions(-DENABLE_READCHAR_VIA_TERMIOS)
endif()

find_package(PkgConfig REQUIRED)
pkg_check_modules(LIBFIZMO REQUIRED libfizmo>=0.9.0)

include_directories(${LIBFIZMO_INCLUDE_DIRS})

link_directories(${LIBFIZMO_LIBDIR})

set (MyCSources
  src/fizmo-console/fizmo-console.c)

add_executable(fizmo-console ${MyCSources})

target_link_libraries(${PROJECT_NAME} ${LIBFIZMO_LIBRARIES})


# TODO: install target, including manpage.

