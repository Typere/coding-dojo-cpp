/** The right place for the interface **/

#include <set>
class Board {
    std::set<std::pair<int, int>> board;
public:
    void setAlive(int, int);
    bool isAlive(int,int);
};
