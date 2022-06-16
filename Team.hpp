#pragma once
#include <iostream>
#include<string>
// #include "Player.hpp"
// #include "Game.hpp"

namespace ariel {
    class Team {//: public coup::Player {
    public:
        string _name;
        double _level;
        int points=0;
        int victories=0;

        Team(string s,double level);

        // Ambassador(Game &g,  string str);

        // void block( Player &p);

        // void transfer( Player &p1,  Player &p2);

        // string role();

        // void unsteal();

    };
}