//
//  Game.hpp
//  Vampires
//
//  Created by Andrew K. Sloan on 1/12/20.
//  Copyright © 2020 Andrew K. Sloan. All rights reserved.
//

#ifndef Game_h
#define Game_h

#include <iostream>

class Arena;

using namespace std;

class Game
{
  public:
      // Constructor/destructor
    Game(int rows, int cols, int nVampires);
    ~Game();

      // Mutators
    void play();
    

  private:
    Arena* m_arena;
    

      // Helper functions
    string takePlayerTurn();
};

bool recommendMove(const Arena& a, int r, int c, int& bestDir);
int computeDanger(const Arena& a, int r, int c);
bool attemptMove(const Arena& a, int dir, int& r, int& c);

#endif /* Game_hpp */
