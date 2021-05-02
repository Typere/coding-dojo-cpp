/** The right place for the interface **/

#include <set>
class Board {
  std::set<std::pair<int, int>> board;

public:
  void setAlive(int x, int y);
  bool isAlive(int x, int y) const;
  int countNeighboursAlive(int x, int y) const;
  static bool evaluate(int numAlive);
};
