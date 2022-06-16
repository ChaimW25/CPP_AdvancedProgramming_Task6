#pragma once
#include <map>
#include "Team.hpp"


// #include "Player.hpp"
// #include "Game.hpp"

namespace ariel {
    // class Player;
    class Game{
    public:
        Team home;
        Team guest;


        Game(Team home, Team guest)
        void result(int teamA,int teamB);
        void result();
        // map<Team,int> guest;

        // Game(map home, map guest);

        // void block( Player &p);

        // void transfer( Player &p1,  Player &p2);

        // string role();

        // void unsteal();

    };
}