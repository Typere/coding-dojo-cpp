#define CATCH_CONFIG_MAIN
#include <catch.hpp>

#include "library.hpp"

/** The right place for tests **/
TEST_CASE("Square of 2 is 4") { REQUIRE(square(2) == 4); }
