include(FetchContent)
FetchContent_Declare(Catch2
  QUIET
  URL https://github.com/catchorg/Catch2/archive/v2.13.4.tar.gz
)
FetchContent_MakeAvailable(Catch2)

add_executable(unit_tests
    main.cpp
    testing_utils.cpp
    bf.cpp
    )

target_link_libraries(unit_tests
  PRIVATE
    Catch2::Catch2
    Fnx
  )

# automatic discovery of unit tests
list(APPEND CMAKE_MODULE_PATH ${Catch2_SOURCE_DIR}/contrib)
include(Catch)
catch_discover_tests(unit_tests
  PROPERTIES
    LABELS "unit"
    EXTRA_ARGS "--success"
  )
