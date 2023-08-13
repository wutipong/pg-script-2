find_package(Catch2 3 REQUIRED)

include_directories("${PROJECT_SOURCE_DIR}/include")

# These tests can use the Catch2-provided main
add_executable(tests test.cpp)
add_dependencies(tests pg-script-2)
target_link_libraries(tests PRIVATE Catch2::Catch2WithMain pg-script-2)

include(CTest)
include(Catch)
catch_discover_tests(tests)