cmake_minimum_required(VERSION 3.13)

project(Fnx LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

include(GNUInstallDirs)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/${CMAKE_INSTALL_LIBDIR})
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/${CMAKE_INSTALL_BINDIR})

option(Fnx_USE_HIP "Compile HIP GPU version" OFF)

set(Fnx_HAS_HIP OFF)
if(Fnx_USE_HIP)
  find_package(hip REQUIRED)

  if(hip_FOUND)
    message(STATUS "Found HIP: " ${hip_VERSION})
    set(Fnx_HAS_HIP ON)
  endif()

  set(CMAKE_CXX_FLAGS "-fgpu-rdc ${CMAKE_CXX_FLAGS}")
  set(CMAKE_CXX_FLAGS_DEBUG "-ggdb ${CMAKE_CXX_FLAGS_DEBUG}")
endif()

add_subdirectory(src)

enable_testing()

add_subdirectory(tests)
