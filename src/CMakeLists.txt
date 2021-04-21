add_library(Fnx)

target_sources(Fnx
  PRIVATE
    Fnx.cpp
  )

target_include_directories(Fnx
  PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}
  )

if(Fnx_HAS_HIP)
  target_link_libraries(Fnx
    PUBLIC
      hip::device
    )
endif()

include(FetchContent)
FetchContent_Declare(Lyra
  QUIET
  URL https://github.com/bfgroup/Lyra/archive/1.5.1.tar.gz
)
FetchContent_MakeAvailable(Lyra)

add_executable(oh_boys oh_boys.cpp)

target_link_libraries(oh_boys
  PRIVATE
    Fnx
    bfg::Lyra
  )
