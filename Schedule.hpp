#pragma once

// #include "Player.hpp"
#include "Game.hpp"

namespace ariel {
    // class Player;
    class Schedule {
    public:

        Game g[38][10];

        Schedule(Game g[10][38]);

        // Ambassador(Game &g,  string str);

        // void block( Player &p);

        // void transfer( Player &p1,  Player &p2);

        // string role();

        // void unsteal();

    };
}