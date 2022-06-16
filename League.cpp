#include <iostream>
//#include "Player.hpp"
#include "League.hpp"
#include <string>
#include <stdio.h>

using namespace std;

namespace ariel {

    League::League() {
        string str;
        for(int i=0;i<20;i++){
            str="";
            int tmp=rand()+1;
            int num = tmp/26;
            for(int j=0;j<num+1;j++){
                str+=tmp%26;
            }
            Team t(str,tmp/tmp+1);
            teams[i]=t;
        }
    }
    League::League(Team g[10]) {
        string str;
        for(int i=0;i<10;i++){
            str="";
            int tmp=rand()+1;
            int num = tmp/26;
            for(int j=0;j<num+1;j++){
                str+=tmp%26;
            }
            Team t(str,tmp/tmp+1);
            teams[i]=t;
        }
        for(int i=10;i<20;i++){
            teams[i]=g[i-10];
        }

    }
    League::League(Team g[20]) {
        this->teams=g;
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

