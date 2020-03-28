//
//  Arena.h
//  Vampires
//
//  Created by Andrew K. Sloan on 1/12/20.
//  Copyright © 2020 Andrew K. Sloan. All rights reserved.
//

#ifndef Arena_h
#define Arena_h

#include "globals.h"
#include <iostream>
#include "History.h"

class Player;
class Vampire;

using namespace std;

class Arena
{
  public:
    // Constructor/destructor
    Arena(int nRows, int nCols);
    ~Arena();

    // Accessors
    int     rows() const;
    int     cols() const;
    Player* player() const;
    int     vampireCount() const;
    int     getCellStatus(int r, int c) const;
    int     numberOfVampiresAt(int r, int c) const;
    void    display(string msg) const;
    History& history();

      // Mutators
    void setCellStatus(int r, int c, int status);
    bool addVampire(int r, int c);
    bool addPlayer(int r, int c);
    void moveVampires();

  private:
    int      m_grid[MAXROWS][MAXCOLS];
    int      m_rows;
    int      m_cols;
    Player*  m_player;
    Vampire* m_vampires[MAXVAMPIRES];
    History m_history;

    int      m_nVampires;
    int      m_turns;
    
    

      // Helper functions
    void checkPos(int r, int c, string functionName) const;
    bool isPosInBounds(int r, int c) const;
};





#endif /* Arena_h */
