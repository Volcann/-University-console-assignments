#ifndef func_h
#define func_h
#include <iostream>
#include <fstream>
#include <string>
#include "game.hpp"
using namespace::std;

void menuContineo();
void inputsuggestion();

void newgamemenu(){
    cout<<"-------------------------"<<endl;
    cout<<"-----Tick cross game-----"<<endl;
    cout<<"-------------------------"<<endl;
    cout<<endl;
    cout<<"Enter any !! "<<endl;
    cout<<"1-New Game "<<endl;
    cout<<"2-Rules "<<endl;
    cout<<"3-Winners "<<endl;
}

void inputsuggestion(){
    cout<<"Enter any !! "<<endl;
    cout<<"     A | B | C  "<<endl;
    cout<<"    ---|---|--- "<<endl;
    cout<<"     D | E | F  "<<endl;
    cout<<"    ---|---|--- "<<endl;
    cout<<"     G | H | I  "<<endl;
    cout<<endl;
}

void contineogamemenu(){
    cout<<"-------------------------"<<endl;
    cout<<"-----Tick cross game-----"<<endl;
    cout<<"-------------------------"<<endl;
    cout<<endl;
    cout<<"Enter any !! "<<endl;
    cout<<"1-Contineo "<<endl;
    cout<<"2-New Game "<<endl;
    cout<<"3-Rules "<<endl;
    cout<<"4-Winners "<<endl;
}

void rules(){
    cout<<"-------------------------"<<endl;
    cout<<"-----Tick cross game-----"<<endl;
    cout<<"-------------------------"<<endl;
    cout<<endl;
    cout<<"Rules !!"<<endl;
    cout<<"-Only two players can play this game"<<endl;
    cout<<"-Decide who will start first"<<endl;
    cout<<"-Make 3 potion similar and win the game"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"Enter 0 to Back"<<endl;
    while(true){
        cin>>back;
        if(back=="0"){
            menucontineowork();
        }
        if(back!="0"){
            cout<<"Wrong Input !!"<<endl;
        }
    }
    back="\0";
}

void winners(){
    winner="\0";
    cout<<"-------------------------"<<endl;
    cout<<"-----Tick cross game-----"<<endl;
    cout<<"-------------------------"<<endl;
    cout<<endl;
    cout<<"Last Winners !!"<<endl;
    file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Tick Rosss/Tick Rosss/assets/winners.txt",ios::in);
    while(file){
        getline(file,winner);
        cout<<winner<<endl;
    }
    file.close();
    cout<<endl; cout<<endl; cout<<endl;
    cout<<"Enter 0 to Back "<<endl;
    while(true){
        cin>>back;
        if(back=="0"){
            break;
            menucontineowork();
        }
        if(back=="1"){
            break;
            cout<<"Winners CLEARED!!"<<endl;
            file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Tick Rosss/Tick Rosss/assets/winners.txt",ios::out|ios::trunc);
            file.close();
            menucontineowork();
        }
        if(back!="1"||back!="0"){
            cout<<"Wrong Input !!"<<endl;
        }
    }
}

void menucontineowork(){
    back="\0";
    file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Tick Rosss/Tick Rosss/assets/turn.txt",ios::in);
    file>>back;
    file.close();
    if(back=="1"||back=="0"){
        contineogamemenu();
        while (true) {
            cin>>back;
            if(back=="1"){
                break;
            }
            if(back=="2"){
                break;
            }
            if(back=="3"){
                break;
            }
            if(back=="4"){
                break;
            }
            if((back!="1")||(back!="2")||(back!="3")||(back!="4")){
                cout<<"Wrong Input !!"<<endl;
            }
        }
        if(back=="1"){
            contineogame();
        }
        if(back=="2"){
            newgame();
        }
        if(back=="3"){
            rules();
        }
        if(back=="4"){
            winners();
        }
    }
    if(back!="1"||back!="0"){
        newgamemenu();
        while (true) {
            cin>>back;
            if(back=="1"){
                break;
            }
            if(back=="2"){
                break;
            }
            if(back=="3"){
                break;
            }
            if((back!="1")||(back!="2")||(back!="3")){
                cout<<"Wrong Input !!"<<endl;
            }
        }
        if(back=="1"){
            newgame();
        }
        if(back=="2"){
            rules();
        }
        if(back=="3"){
            winners();
        }
    }
}

#endif /* func_h */
