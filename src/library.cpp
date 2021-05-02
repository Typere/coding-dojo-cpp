#include "library.hpp"
/** The right place for the implementation **/

void Board::setAlive(int x, int y) { board.insert(std::make_pair(x, y)); }

bool Board::isAlive(int x, int y) const { return board.count(std::make_pair(x, y)); }

int Board::countNeighboursAlive(int x, int y) const {
  return board.count(std::make_pair(x - 1, y - 1))   //
         + board.count(std::make_pair(x - 1, y))     //
         + board.count(std::make_pair(x - 1, y + 1)) //
         + board.count(std::make_pair(x, y - 1))     //
         + board.count(std::make_pair(x, y + 1))     //
         + board.count(std::make_pair(x + 1, y - 1)) //
         + board.count(std::make_pair(x + 1, y))     //
         + board.count(std::make_pair(x + 1, y + 1));

}

bool Board::evaluate(int numAlive) {
    return true;
}
