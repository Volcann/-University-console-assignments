#ifndef game_hpp
#define game_hpp
#include <iostream>
#include <fstream>
#include <string>
#include "game.h"
using namespace std;
string select , back ;

void menuworking();
void menulevel();
void menucontineoworking();

void menu(){
    cout<<"----------------------------------------"<<endl;
    cout<<"|          Snake n ladder Game         |"<<endl;
    cout<<"----------------------------------------"<<endl;
    cout<<endl;
    cout<<"ENTER ANY :-"<<endl;
    cout<<"1-New game"<<endl;
    cout<<"2-Rules"<<endl;
    cout<<"3-last Winners"<<endl;
    cout<<"4-Select level"<<endl;
}

void menucontineo(){
    cout<<"----------------------------------------"<<endl;
    cout<<"|          Snake n ladder Game         |"<<endl;
    cout<<"----------------------------------------"<<endl;
    cout<<endl;
    cout<<"ENTER ANY :-"<<endl;
    cout<<"1-Contioneo last game"<<endl;
    cout<<"2-New game"<<endl;
    cout<<"3-Rules"<<endl;
    cout<<"4-last Winners"<<endl;
    cout<<"5-Select level"<<endl;
}

void rules(){
    cout<<"----------------------------------------"<<endl;
    cout<<"|          Snake n ladder Game         |"<<endl;
    cout<<"----------------------------------------"<<endl;
    cout<<endl;
    cout<<"Rules !!"<<endl;
    cout<<"-Same as a snake and ladder board game"<<endl;
    cout<<"-Two player game"<<endl;
    cout<<"-Player one is repersent O "<<endl;
    cout<<"-Player two is repersent X "<<endl;
    cout<<"-COMMAS repersent Box demotion mean you get demoted (avoid comma boxes)"<<endl;
    cout<<"-DOTS repersent Box promotion mean you get promoted (lucky if got dot boxes)"<<endl;
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
        menucontineoworking();
    }
}

void winners(){
    cout<<"----------------------------------------"<<endl;
    cout<<"|          Snake n ladder Game         |"<<endl;
    cout<<"----------------------------------------"<<endl;
    cout<<endl;
    cout<<"Winners !!"<<endl;
    fstream file;
    string winners;
    cout<<endl;
    file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Snake n Ladder Game/Snake n Ladder Game/assets/winners.txt",ios::in);
    while(file){
        getline(file,winners);
        cout<<winners<<endl;
    }
    file.close();
    cout<<endl;
}

void menulevel(){
    cout<<"----------------------------------------"<<endl;
    cout<<"|          Snake n ladder Game         |"<<endl;
    cout<<"----------------------------------------"<<endl;
    cout<<endl;
    cout<<"Warning NOTE : "<<endl;
    cout<<"Changing level will make previous game deleted and take you to new game"<<endl;
    cout<<"Enter any "<<endl;
    cout<<"0-To back "<<endl;
    cout<<"1-Hard level "<<endl;
    cout<<"2-Medium level "<<endl;
    cout<<"3-Easy level "<<endl;
}

void levelworking(int level){
    fstream file;
    file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Snake n Ladder Game/Snake n Ladder Game/assets/level.txt",ios::out|ios::trunc);
    file.close();
    file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Snake n Ladder Game/Snake n Ladder Game/assets/level.txt",ios::out);
    file<<level;
    file.close();
    if(level==1){
        cout<<"Level Hard selected !!"<<endl;
    }
    if(level==2){
        cout<<"Level Medium selected!!"<<endl;
    }
    if(level==3){
        cout<<"Level Easy selected!!"<<endl;
    }
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Snake n Ladder Game/Snake n Ladder Game/assets/contineo1.txt",ios::out|ios::trunc);
    file.close();
    file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Snake n Ladder Game/Snake n Ladder Game/assets/contineo2.txt",ios::out|ios::trunc);
    file.close();
    file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Snake n Ladder Game/Snake n Ladder Game/assets/name.txt",ios::out|ios::trunc);
    file.close();
    file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Snake n Ladder Game/Snake n Ladder Game/assets/turn.txt",ios::out|ios::trunc);
    file.close();
}

void menucontineoworking(){
    fstream file;
    string data;
    file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Snake n Ladder Game/Snake n Ladder Game/assets/contineo1.txt",ios::in);
    while(file){
        file>>data;
    }
    if(data!="\0"){
        menucontineo();
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
            if(select=="4"){
                break;
            }
            if(select=="5"){
                break;
            }
            if((select!="1")||(select!="2")||(select!="3")||(select!="4")||(select!="5")){
                cout<<"Wrong input"<<endl;
            }
        }
        if(select=="1"){
            contineogame();
        }
        if(select=="2"){
            game();
        }
        if(select=="3"){
            rules();
        }
        if(select=="4"){
            winners();
            cout<<"Enter 0 to back "<<endl;
            cout<<"Enter 1 to delete all winner names "<<endl;
            while (true) {
                cin>>back;
                if(back=="0"){
                    break;
                }
                if(back=="1"){
                    break;
                }
                if((back!="0")||(back!="1")){
                    cout<<"Wrong input"<<endl;
                }
            }
            if(back=="0"){
                menucontineoworking();
            }
            if(back=="1"){
                fstream file;
                file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Snake n Ladder Game/Snake n Ladder Game/assets/winners.txt",ios::out|ios::trunc);
                file.close();
                cout<<"Winners were cleared !!"<<endl;
                cout<<endl;
                menucontineoworking();
            }
        }
        if(select=="5"){
            menulevel();
            while (true) {
                cin>>back;
                if(back=="0"){
                    break;
                }
                if(back=="1"){
                    break;
                }
                if(back=="2"){
                    break;
                }
                if(back=="3"){
                    break;
                }
                if((back!="0")){
                    cout<<"Wrong input"<<endl;
                }
            }
            if(back=="0"){
                menucontineoworking();
            }
            if(back=="1"){
                int level = 1;
                levelworking(level);
                menucontineoworking();
            }
            if(back=="2"){
                int level = 2;
                levelworking(level);
                menucontineoworking();
            }
            if(back=="3"){
                int level = 3;
                levelworking(level);
                menucontineoworking();
            }
        }
    }
    if(data=="\0"){
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
        if(select=="4"){
            break;
        }
        if((select!="1")||(select!="2")||(select!="3")||(select!="4")){
            cout<<"Wrong input"<<endl;
        }
    }
    if(select=="1"){
        game();
    }
    if(select=="2"){
        rules();
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
    if(select=="3"){
        winners();
        cout<<"Enter 0 to back : ";
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
            menucontineoworking();
        }
    }
    if(select=="4"){
        menulevel();
        while (true) {
            cin>>back;
            if(back=="0"){
                break;
            }
            if(back=="1"){
                break;
            }
            if(back=="2"){
                break;
            }
            if(back=="3"){
                break;
            }
            if((back!="0")){
                cout<<"Wrong input"<<endl;
            }
        }
        if(back=="0"){
            menucontineoworking();
        }
        if(back=="1"){
            int level = 1;
            levelworking(level);
            menucontineoworking();
        }
        if(back=="2"){
            int level = 2;
            levelworking(level);
            menucontineoworking();
        }
        if(back=="3"){
            int level = 3;
            levelworking(level);
            menucontineoworking();
        }
    }
}

#endif /* game_hpp */
