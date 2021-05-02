#include "library.hpp"
/** The right place for the implementation **/

void Board::setAlive(int x, int y)
{
    board.insert(std::make_pair(x, y));

}

bool Board::isAlive(int x, int y)
{
    return board.count(std::make_pair(x, y));
}
