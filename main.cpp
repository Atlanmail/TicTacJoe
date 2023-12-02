#include <iostream>
#include "GameState.h"

using namespace std;

int main(){
    GameState game;

    game.play(0, 0);
    game.play(1, 1);
    cout << game << endl;
    cout << "20" << endl;
    cout << "30" << endl;
    return 0;
}