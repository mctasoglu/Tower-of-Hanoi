#include "Stack.h"
#include "Cube.h"
#include "Game.h"
#include <iostream>
#include <string>
#include <vector>



using namespace std;
using namespace t_hanoi;


int main() {

    Game g;

  


    // Stack stack;
    
    cout << "Initial game state: " << endl;
    cout << g << endl;

   



    g.solve();

    cout << "Final game state: " << endl;
    cout << g << endl;
   





    return 0;
}