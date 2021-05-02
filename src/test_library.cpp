#define CATCH_CONFIG_MAIN
#include <catch.hpp>

#include "library.hpp"

/** The right place for tests **/
TEST_CASE("Add one living cell to board") {
  Board b;
  b.setAlive(0, 0);
  REQUIRE(b.isAlive(0, 0) == true);
}
