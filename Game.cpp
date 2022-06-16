#include <iostream>
//#include "Player.hpp"
#include "Game.hpp"
#include <string>
using namespace std;

namespace ariel {

    Game::Game(map home, map guest) {
        this->home=home;
        this->guest=guest;
    }
    void Game::result(int teamA,int teamB){
        if(teamA<55 || teamB<50 || teamA>100 || teamB>100){
            throw("illegal num of points");
        }
        string str = "";
        if(teamA>=teamB){
            cout<<"the winner is"<<home._name;
            home.victories++;
        }
        else{
            cout<<"the winner is"<<guest._name;
             guest.victories++;
       }
       home.points+=teamA;
       guest.points+=teamB;
        }
    void Game::result(){
        int teamB=rand()%50+50;
        int teamA=rand()%45+55;
        string str = "";
        if(teamA>=teamB){
            cout<<"the winner is"<<home._name;
            home.victories++;
        }
        else{
            cout<<"the winner is"<<guest._name;
             guest.victories++;
       }
       home.points+=teamA;
       guest.points+=teamB;

    }

//     void Ambassador::block( Player &p){
//         if(coinNum>=10){
//             throw("have to coup");
//         }
//         if (legalAmount() ) {
//             if(p.lastAction==2){
//                 int temp=p.enemy->coinsIStoled;
//                 p.coinNum-=temp;
//                 p.enemy->coinNum+=temp;
//                 p.lastAction=-1;
//             }
//         }
//         else {
//             throw ("Illegal turn or amount");
//         }
//     }

//     void Ambassador::transfer( Player &p1,  Player &p2){
//         if(coinNum>=10){
//             throw("have to coup");
//         }
//         if (legalAmount() && validTurn()) {
//             if(p1.coinNum>=1) {
//                 p1.coinNum -= 1;
//                 p2.coinNum += 1;
//                 this->game.nextTurn();
//                 lastAction=2;
//             }
//             else{
//                 throw("not enough money");
//             }
//         }
//         else {
//                 throw ("Illegal turn or amount");
//             }
//     }

//     string Ambassador::role(){
//         return "Ambassador";
//     }
// //    void Ambassador::unsteal(){
// //        if(coinNum>=10){
// //            throw("have to coup");
// //        }
// //        if (legalAmount() && validTurn()) {
// //            this->game.nextTurn();
// //        }
// //        else {
// //            throw ("Illegal turn or amount");
// //        }
// //    }



}

