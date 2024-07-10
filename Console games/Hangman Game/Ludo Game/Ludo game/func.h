#ifndef func_h
#define func_h
#include<iostream>
#include<fstream>
#include<iomanip>
#include<cstdlib>
#include <ctime>
#include "game.hpp"
using namespace std;
string select , back;

void menuworking();
void newgame();
void winners();

void menu(){
    cout<<"----------------------------------------"<<endl;
    cout<<"|               Ludo Game              |"<<endl;
    cout<<"----------------------------------------"<<endl;
    cout<<endl;
    cout<<"ENTER ANY :-"<<endl;
    cout<<"1-New game"<<endl;
    cout<<"2-Rules"<<endl;
    cout<<"3-last Winners"<<endl;
}

void menucontineo(){
    cout<<"----------------------------------------"<<endl;
    cout<<"|               Ludo Game              |"<<endl;
    cout<<"----------------------------------------"<<endl;
    cout<<endl;
    cout<<"ENTER ANY :-"<<endl;
    cout<<"1-Contioneo last game"<<endl;
    cout<<"2-New game"<<endl;
    cout<<"3-Rules"<<endl;
    cout<<"4-last Winners"<<endl;
}

void rules(){
    cout<<"----------------------------------------"<<endl;
    cout<<"|               Ludo Game              |"<<endl;
    cout<<"----------------------------------------"<<endl;
    cout<<endl;
    cout<<"Rules !!"<<endl;
    cout<<"-Same as a ludo game"<<endl;
    cout<<"-Two player game"<<endl;
    cout<<"-Player one is repersent O "<<endl;
    cout<<"-Player two is repersent X "<<endl;
    cout<<"-Anyone can demote any player to home "<<endl;
    cout<<endl;
    cout<<"ENTER 0 TO BACK : ";
    while (true) {
        cin>>back;
        if(back=="0"){
            break;
        }
        if((back!="0")){
            cout<<"Wrong input"<<endl;
        }
    }
    if(back=="0"){
        menuworking();
    }
}

void winners(){
    cout<<"----------------------------------------"<<endl;
    cout<<"|               Ludo Game              |"<<endl;
    cout<<"----------------------------------------"<<endl;
    cout<<endl;
    cout<<"Winners !!"<<endl;
    fstream file;
    string winners;
    cout<<endl;
    file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Ludo Game/Ludo game/asset/winners.txt",ios::in);
    while(file){
        getline(file,winners);
        cout<<winners<<endl;
    }
    file.close();
    cout<<endl;
    cout<<endl;
    cout<<"ENTER 0 TO BACK : ";
    while (true) {
        cin>>back;
        if(back=="0"){
            break;
        }
        if((back!="0")){
            cout<<"Wrong input"<<endl;
        }
    }
    if(back=="0"){
        menuworking();
    }
}

void menuworking(){
    menu();
    while (true) {
        cin>>select;
        if(select=="1"){
            break;
        }
        if(select=="2"){
            break;
        }
        if(select=="3"){
            break;
        }
        if((select!="1")||(select!="2")||(select!="3")||(select!="4")){
            cout<<"Wrong input"<<endl;
        }
    }
    if(select=="1"){
        newgame();
    }
    if(select=="2"){
        rules();
    }
    if(select=="3"){
        winners();
    }
}

#endif /* func_h */
