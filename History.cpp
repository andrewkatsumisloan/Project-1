//
//  History.cpp
//  Vampires
//
//  Created by Andrew K. Sloan on 1/12/20.
//  Copyright © 2020 Andrew K. Sloan. All rights reserved.
//

#include "History.h"
#include "Arena.h"

History::History(int nRows, int nCols)
{
    m_rows = nRows;
    m_cols = nCols;
//
    for (int r = 1; r <= m_rows; r++)
        for (int c = 1; c <= m_cols; c++)
            m_grid[r-1][c-1]=0;

}

bool History::record(int r, int c)
    {
        if ((r > m_rows) || (c > m_cols))
            return false;
        if ((r <= 0) || (c <= 0))
            return false;
        
        // Increment grids with poisoined value
            m_grid[r-1][c-1]++;
        return true;
        
    }
  
void History::display() const
{
    char displayGrid[MAXROWS][MAXCOLS];
    int r, c;
    char lookup[27] = {'.', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    for (r = 1; r <= m_rows; r++)
        for (c = 1; c <= m_cols; c++)
            displayGrid[r-1][c-1] = lookup[m_grid[r-1][c-1]];


    clearScreen();
    for (r = 1; r <= m_rows; r++)
    {
        for (c = 1; c <= m_cols; c++)
            cout << displayGrid[r-1][c-1];
        cout << endl;
    }

    
}

