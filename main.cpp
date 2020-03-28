//
//  main.cpp
//  Vampires
//
//  Created by Andrew K. Sloan on 1/12/20.
//  Copyright © 2020 Andrew K. Sloan. All rights reserved.
//

#include <iostream>
#include <string>
#include <random>
#include <utility>
#include <cstdlib>
#include <cctype>
#include "Game.h"
using namespace std;

int main()
{
    Game g(10, 12, 40);
    g.play();
}

