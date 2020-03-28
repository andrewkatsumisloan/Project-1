//
//  History.hpp
//  Vampires
//
//  Created by Andrew K. Sloan on 1/12/20.
//  Copyright © 2020 Andrew K. Sloan. All rights reserved.
//

#ifndef History_h
#define History_h

#include <iostream>
#include "globals.h"

class History
{
  public:
    History(int nRows, int nCols); // Creates a nRows, nCols grid
    bool record(int r, int c); // The record function is to be called to notify the history object that a vampire has started
                               //  its turn poisoned but alive at a grid point.  The function returns false if row r, column c is not within bounds; otherwise, it returns true after recording what it needs to. This function expects its parameters to be expressed in the same coordinate system as an Arena (e.g., row 1, column 1 is the upper-left-most position).
    void display() const;      // The display function clears the screen and displays the history grid as the posted programs do.                            This function does clear the screen, display the history grid, and write an empty line after the                           history grid; it does not print the Press enter to cont
    

private:
    int      m_grid[MAXROWS][MAXCOLS];
    int      m_rows;
    int      m_cols;
    
};



#endif /* History_hpp */
