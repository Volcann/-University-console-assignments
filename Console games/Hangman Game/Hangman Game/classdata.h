#ifndef classdata_h
#define classdata_h
#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;

int select;
string getword;

class data{
    string wordhard[8] = {"Motivation","Abnormally","Strawberry","Skyjackers","Friendship",
        "Everything","Cyberpunks","Squeezebox"};
    string wordmedium[8] = {"Absolute","Bachelor","Definite","Delivery","Colorful",
        "Artistic","Athletic","Colonial"};
    string wordeasy[8] = {"Babbies","Baboons","Fabrics","Gabbers","Hackked",
        "Habbits","Jackals","Peppers"};
public:
    string getwordhard(){
        srand((unsigned) time(NULL));
        select = rand()%7;
        getword=wordhard[select];
        return getword;
    }
    string getwordmedium(){
        srand((unsigned) time(NULL));
        select = rand()%7;
        getword=wordmedium[select];
        return getword;
    }
    string getwordeasy(){
        srand((unsigned) time(NULL));
        select = rand()%7;
        getword=wordeasy[select];
        return getword;
    }
};

#endif /* classdata_h */
