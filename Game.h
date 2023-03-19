#pragma once

#include <iostream>
#include "Stack.h"
#include <vector>

class Game {
    public:
        Game();
        void solve();

        

        friend std::ostream& operator <<(std::ostream & os, Game const &game);


        private:
            std::vector<Stack> stacks_;
};