#define CATCH_CONFIG_MAIN
#include <catch.hpp>

#include "library.hpp"

/** The right place for tests **/
TEST_CASE("Add one living cell to board") {
  Board b;
  REQUIRE(b.isAlive(0, 0) == false);
  b.setAlive(0, 0);
  REQUIRE(b.isAlive(0, 0) == true);
}

TEST_CASE("Count neighbours of cell") {
  Board b;
  b.setAlive(-1, -1);
  b.setAlive(-1, 0);
  b.setAlive(-1, 1);
  b.setAlive(0, -1);
  b.setAlive(0, +1);
  b.setAlive(1, -1);
  b.setAlive(1, 0);
  b.setAlive(1, 1);
  REQUIRE(b.countNeighboursAlive(0, 0) == 8);
}

TEST_CASE("Test survivor rule") {
  Board b;
  REQUIRE(b.evaluate(2) == true);
}
