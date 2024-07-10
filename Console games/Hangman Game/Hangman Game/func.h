#ifndef func_h
#define func_h
#include <iostream>
#include <cstring>
#include <cstdlib>
#include <fstream>
using namespace std;
void game();
void menuworking();
void contioneogame();
                                        int tries = 4;
                                         char hidelet;
                                          string back;
                                         fstream file;

void newgamemenu(){
    cout<<"----------------------------------------"<<endl;
    cout<<"|              HangMAN GAME            |"<<endl;
    cout<<"----------------------------------------"<<endl;
    cout<<endl;
    cout<<"ENTER ANY :-"<<endl;
    cout<<"1-New game"<<endl;
    cout<<"2-Instructions"<<endl;
    cout<<"3-Select level"<<endl;
}

void contineomenu(){
    cout<<"----------------------------------------"<<endl;
    cout<<"|              HangMAN GAME            |"<<endl;
    cout<<"----------------------------------------"<<endl;
    cout<<endl;
    cout<<"ENTER ANY :-"<<endl;
    cout<<"1-Contioneo last game"<<endl;
    cout<<"2-New game"<<endl;
    cout<<"3-Instructions"<<endl;
    cout<<"4-Select level"<<endl;
}

void instruction(){
    cout<<"----------------------------------------"<<endl;
    cout<<"|              HangMAN GAME            |"<<endl;
    cout<<"----------------------------------------"<<endl;
    cout<<endl;
    cout<<"Instructions !! "<<endl;
    cout<<"-Guess the word"<<endl;
    cout<<"-Save the hangman"<<endl;
    cout<<endl;cout<<endl;
    cout<<"ENTER 0 to back :-"<<endl;
    while(true){
        cin>>back;
        if(back=="0"){
            menuworking();
            break;
        }
        if(back!="0"){
            cout<<"Wrong Input !!"<<endl;
        }
    }
}

void selectlevels(){
    cout<<"SELECT Level !!"<<endl;
    cout<<"1-Hard level"<<endl;
    cout<<"2-Medium level"<<endl;
    cout<<"3-Easy level"<<endl;
    while(true){
        cin>>back;
        if(back=="1"){
            file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Hangman Game/Hangman Game/assets/name.txt",ios::out|ios::trunc);
            file.close();
            file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Hangman Game/Hangman Game/assets/level.txt",ios::out|ios::trunc);
            file.close();
            file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Hangman Game/Hangman Game/assets/level.txt",ios::out);
            file<<1;
            file.close();
            cout<<endl;cout<<endl;
            cout<<"Level Hard Selected !!"<<endl;
            cout<<endl;cout<<endl;
            cout<<endl;cout<<endl;
            menuworking();
            break;
        }
        if(back=="2"){
            file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Hangman Game/Hangman Game/assets/name.txt",ios::out|ios::trunc);
            file.close();
            file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Hangman Game/Hangman Game/assets/level.txt",ios::out|ios::trunc);
            file.close();
            file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Hangman Game/Hangman Game/assets/level.txt",ios::out);
            file<<2;
            file.close();
            cout<<endl;cout<<endl;
            cout<<"Level Medium Selected !!"<<endl;
            cout<<endl;cout<<endl;
            cout<<endl;cout<<endl;
            menuworking();
            break;
        }
        if(back=="3"){
            file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Hangman Game/Hangman Game/assets/name.txt",ios::out|ios::trunc);
            file.close();
            file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Hangman Game/Hangman Game/assets/level.txt",ios::out|ios::trunc);
            file.close();
            file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Hangman Game/Hangman Game/assets/level.txt",ios::out);
            file<<3;
            file.close();
            cout<<endl;cout<<endl;
            cout<<"Level Easy Selected !!"<<endl;
            cout<<endl;cout<<endl;
            cout<<endl;cout<<endl;
            menuworking();
            break;
        }
        if((back!="1")||(back!="2")||(back!="3")){
            cout<<"Wrong Input !!"<<endl;
        }
    }
}

void menuworking(){
    file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Hangman Game/Hangman Game/assets/name.txt",ios::in);
    while (file) {
        getline(file,back);
    }
    file.close();
    if(back!="\0"){
        contineomenu();
        while(true){
            cin>>back;
            if(back=="1"){
                contioneogame();
                break;
            }
            if(back=="2"){
                game();
                break;
            }
            if(back=="3"){
                instruction();
                break;
            }
            if(back=="4"){
                selectlevels();
                break;
            }
            if((back!="1")||(back!="2")||(back!="3")||(back!="4")){
                cout<<"Wrong Input !!"<<endl;
            }
        }
    }
    if(back=="\0"){
        newgamemenu();
        while(true){
            cin>>back;
            if(back=="1"){
                game();
                break;
            }
            if(back=="2"){
                instruction();
                break;
            }
            if(back=="3"){
                selectlevels();
                break;
            }
            if((back!="1")||(back!="2")||(back!="3")){
                cout<<"Wrong Input !!"<<endl;
            }
        }
    }
}
#endif /* func_h */
