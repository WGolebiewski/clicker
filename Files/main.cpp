#include <iostream>
#include "Set.h"
#include "Points.h"
#include <time.h>
#include <cstdlib>

int main()
{
    srand(time(0));
    SetOptions setGame;
    Points add;

    setGame.theFileIsExists();
    add.whatUpgradeUserBought();
    add.add();
}