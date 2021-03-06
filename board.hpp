//  board.hpp
//  Oni
//  Copyright © 2016 Georg Wolffgang. All rights reserved.

#ifndef board_hpp
#define board_hpp

#include <iostream>
#include <string.h>
using namespace std;

class oni_board {
private:
    char board [5][5];
public:
    oni_board();
    
    inline char get_Field(int x, int y) { return board[x][y]; }
    inline char get_Field(int field[2]) { return board[field[0]][field[1]]; }
    
    inline void set_Field(int x, int y, const char new_char) { board[4-y][x] = new_char; }
    inline void set_Field(int field[2], const char new_char) { board[4-field[1]][field[0]] = new_char; }
    
    friend ostream& operator<<(ostream& output, const oni_board& board) ;

};

#endif /* board_hpp */
