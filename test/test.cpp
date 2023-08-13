#include "do.hpp"
#include <catch2/catch_test_macros.hpp>

TEST_CASE( "Expect 0", "[sometest]" ) {
    REQUIRE( DoSomething() == 0 );
}