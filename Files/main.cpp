#include <iostream>
#include "SetGame.h"
#include "Points.h"
#include <time.h>
#include <cstdlib>

int main()
{
    srand(time(0));
    SetGame setoption;
    Points points;

    setoption.FileExists();
    points.boughtUpgrade();
    points.mainFuction();
}