#include <iostream>
//#include "Player.hpp"
#include "Schedule.hpp"
#include <string>
using namespace std;

namespace coup {

    Schedule::Schedule(Game g[38][10]) {
        this->g=g;
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
//        }
//        if (legalAmount() && validTurn()) {
//            this->game.nextTurn();
//        }
//        else {
//            throw ("Illegal turn or amount");
//        }
//    }



}
