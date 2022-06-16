#pragma once

// #include "Player.hpp"
#include "Game.hpp"
#include "Team.hpp"


namespace ariel {
    class League {
    public:
        
        Team teams[20];

        League();
        League(Team g[10]);
        League(Team g[20]);

        // Ambassador(Game &g,  string str);

        // void block( Player &p);

        // void transfer( Player &p1,  Player &p2);

        // string role();

        // void unsteal();

    };
}