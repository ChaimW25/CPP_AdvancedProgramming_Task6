#include "doctest.h"
#include <iostream>
#include "Game.hpp"
#include "League.hpp"
#include "Schedule.hpp"
#include "Team.hpp"
#include <string>
#include <vector>
using namespace std;
using namespace ariel;


TEST_CASE("good input"){

    Team a("Real Madrid", 0.86);
    Team b("Barcelona",0.73);
    Team c("Atletico Madrid", 0.71);
    Team d("Sevilla", 0.70);
    Team e("Real Betis", 0.65);
    Team f("Real Sociedad",62);
    Team g("Villarreal", 0.59);
    Team h("Athletic Club", 0.55);
    Team i("Valencia", 0.48);
    Team j("Osasuna", 0.47);
    Team k("Celta Vigo", 0.46);
    Team l("Rayo Vallecano", 0.42);
    Team m("Elche", 0.42);
    Team n("Espanyol", 0.42);
    Team o("Getafe", 0.39);
    Team p("Mallorca", 0.39);
    Team q("Cádiz", 0.39);
    Team r("Granada", 0.38);
    Team s("Levante", 0.35);
    Team t("Alavés", 0.31);

    Team collection[20]={a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t};
    League laLiga(collection);
    Game classico(laLiga[0],laLiga[1]);

    CHECK_NOTHROW(classico.result(55,50));
    CHECK_NOTHROW(classico.result(57,50));
    CHECK_NOTHROW(classico.result(99,99));
    CHECK_NOTHROW(classico.result(90,50));
    CHECK_NOTHROW(classico.result(70,70));
    CHECK_THROWS(classico.result(58));
    CHECK_THROWS(classico.result(52,50,75));
    CHECK_THROWS(classico.result(59,38));
    CHECK_THROWS(classico.result(52,50,75));
    CHECK_THROWS(classico.result(55,55,75));
    CHECK_THROWS(classico.result(52,50));
    CHECK_THROWS(classico.result(59,50,75));
    CHECK_THROWS(classico.result(52));
    CHECK_THROWS(classico.result(52,50));
    CHECK_THROWS(classico.result(58,44));
    CHECK_THROWS(classico.result(50,75));
    CHECK_THROWS(classico.result(52,50));
    CHECK_THROWS(classico.result(77,75));
}
    
    










//     SUBCASE("func -> add root"){

//         CHECK_NOTHROW(organization1.add_root("CEO"));
//     }


//     /*
//     //        CEO
//     //        |--------|--------|
//     //        CTO      CFO      COO
//     //        |                 |
//     //        VP_SW             VP_BI
//     //  */

//     SUBCASE("func -> add sub"){
//     CHECK_NOTHROW(organization1.add_root("CEO")); // just for start a root
//     CHECK_NOTHROW(organization1.add_sub("CEO", "CTO"));
//     CHECK_NOTHROW(organization1.add_sub("CEO", "CFO"));
//     CHECK_NOTHROW(organization1.add_sub("CEO", "COO"));
//     CHECK_NOTHROW(organization1.add_sub("CTO", "VP_SW"));
//     CHECK_NOTHROW(organization1.add_sub("COO", "VP_BI"));
//     }


//     SUBCASE("func -> level order iterator"){
//     CHECK_NOTHROW(organization1.add_root("CEO")); // just for start a root
//     CHECK_NOTHROW(organization1.add_sub("CEO", "CTO"));
//     CHECK_NOTHROW(organization1.add_sub("CEO", "CFO"));
//     CHECK_NOTHROW(organization1.add_sub("CEO", "COO"));
//     CHECK_NOTHROW(organization1.add_sub("CTO", "VP_SW"));
//     CHECK_NOTHROW(organization1.add_sub("COO", "VP_BI"));
//     string factory1;
//     for (auto i = organization1.begin_level_order(); i != organization1.end_level_order(); ++i)
//     {
//     factory1 += (*i);
//     factory1 += " ";
//     }
//     CHECK(factory1 == "CEO CTO CFO COO VP_SW VP_BI ");
//     }


//     SUBCASE("func -> reverse order iterator"){
//     CHECK_NOTHROW(organization1.add_root("CEO")); // just for start a root
//     CHECK_NOTHROW(organization1.add_sub("CEO", "CTO"));
//     CHECK_NOTHROW(organization1.add_sub("CEO", "CFO"));
//     CHECK_NOTHROW(organization1.add_sub("CEO", "COO"));
//     CHECK_NOTHROW(organization1.add_sub("CTO", "VP_SW"));
//     CHECK_NOTHROW(organization1.add_sub("COO", "VP_BI"));
//     string factory2;
//     for (auto i = organization1.begin_reverse_order(); i != organization1.reverse_order(); ++i)
//     {
//     factory2 += (*i);
//     factory2 += " ";
//     }
//     CHECK(factory2 == "VP_SW VP_BI CTO CFO COO CEO ");
//     }


//     SUBCASE("func -> preorder iterator"){
//     CHECK_NOTHROW(organization1.add_root("CEO")); // just for start a root
//     CHECK_NOTHROW(organization1.add_sub("CEO", "CTO"));
//     CHECK_NOTHROW(organization1.add_sub("CEO", "CFO"));
//     CHECK_NOTHROW(organization1.add_sub("CEO", "COO"));
//     CHECK_NOTHROW(organization1.add_sub("CTO", "VP_SW"));
//     CHECK_NOTHROW(organization1.add_sub("COO", "VP_BI"));
//     string factory3;
//     for (auto i = organization1.begin_preorder(); i != organization1.end_preorder(); ++i)
//     {
//     factory3 += (*i);
//     factory3 += " ";
//     }
//     CHECK(factory3 == "CEO CTO VP_SW CFO COO VP_BI ");
//     }

// }

// TEST_CASE("bad input func -> add_sub"){
//     OrgChart organization1;
//     CHECK_NOTHROW(organization1.add_root("CEO"));
//     CHECK_NOTHROW(organization1.add_sub("CEO", "CTO"));
//     CHECK_NOTHROW(organization1.add_sub("CEO", "CFO"));
//     CHECK_NOTHROW(organization1.add_sub("CEO", "COO"));
//     CHECK_NOTHROW(organization1.add_sub("CTO", "VP_SW"));
//     CHECK_NOTHROW(organization1.add_sub("COO", "VP_BI"));
//     CHECK_THROWS(organization1.add_sub("COO", "nothing"));
//     CHECK_THROWS(organization1.add_sub("he", "nothing"));
//     CHECK_THROWS(organization1.add_sub("she", "nothing"));
// }