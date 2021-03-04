add_library(Fnx)

target_sources(Fnx
  PRIVATE
    Fnx.cpp
  )

target_include_directories(Fnx
  PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}
  )

add_executable(oh_boys oh_boys.cpp)

target_link_libraries(oh_boys
  PRIVATE
    Fnx
  )
