#include <vector>
#include <string>

#include "Game.h"

#include "Stack.h"
#include "Cube.h"
#include <iostream>



using namespace std;




void tower_of_hanoi(unsigned N, Stack & stack_from, Stack & stack_to, Stack & stack_aux ) {

    // Base case
    if(N == 0) {
        return;
    }

    // Recursive case
    else {
        tower_of_hanoi(N-1, stack_from, stack_aux, stack_to);
        t_hanoi::Cube biggest = stack_from.pop();
        stack_to.push_back(biggest);
        tower_of_hanoi(N-1, stack_aux, stack_to, stack_from);


    }


}

// Implement this function solve Tower of Hanoi problem
void Game::solve() {

    unsigned num_cubes = stacks_[0].size();

    
    // Main function to solve tower of hanoi
    tower_of_hanoi(num_cubes, stacks_[0], stacks_[2], stacks_[1]);
    

}





Game::Game() {
    for(int i = 0; i < 3; i++) {
        Stack stackOfCubes;
        stacks_.push_back(stackOfCubes);

    }

    t_hanoi::Cube blue(4, "blue");
    stacks_[0].push_back(blue);

    t_hanoi::Cube orange(3, "orange");
    stacks_[0].push_back(orange);

    t_hanoi::Cube purple(2, "purple");
    stacks_[0].push_back(purple);

    t_hanoi::Cube yellow(1, "yellow");
    stacks_[0].push_back(yellow);
}
std::ostream& operator <<(std::ostream & os, Game const &game) {

    for(unsigned i = 0; i < game.stacks_.size(); i++) {
        os << "Stack [" << i << "]: " << game.stacks_[i] << "\n";
    }
    return os;
    
    
}


