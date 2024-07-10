#ifndef main_hpp
#define main_hpp

#include <iostream>
#include <fstream>
#include<string>
#include "functions.h"
using namespace::std;
void inputsuggestion();
void menucontineowork();
//Intilization
                               fstream file;
                            int working = 0,
                                          i,
                                      check;
                        string back = "\0" ,
                     winner , name1 , name2;
                          char play1 = '\0',
                               play2 = '\0';
          char board[3][3]= {{' ',' ',' '} ,
                             {' ',' ',' '} ,
                             {' ',' ',' '}};

void gameworkingplayer2(string name1,string name2){
    //2
    {
        inputsuggestion();
        cout<<name2<<" player turn "<<endl;
        cout<<"--------------------"<<endl;
        cout<<"      ||   ||         "<<endl;
        cout<<"    "<<board[0][0]<<" || "<<board[0][1]<<" || "<<board[0][2]<<"       "<<endl;
        cout<<"  ====||===||====     "<<endl;
        cout<<"    "<<board[1][0]<<" || "<<board[1][1]<<" || "<<board[1][2]<<"       "<<endl;
        cout<<"  ====||===||====     "<<endl;
        cout<<"    "<<board[2][0]<<" || "<<board[2][1]<<" || "<<board[2][2]<<"       "<<endl;
        cout<<"      ||   ||         "<<endl;
        cout<<"--------------------"<<endl;
        cout<<endl;
        if((board[0][0]=='O'&&board[0][1]=='O'&&board[0][2]=='O')||(board[1][0]=='O'&&board[1][1]=='O'&&board[1][2]=='O')||(board[2][0]=='O'&&board[2][1]=='O'&&board[2][2]=='O')||(board[0][0]=='O'&&board[1][1]=='O'&&board[2][2]=='O')||(board[0][2]=='O'&&board[1][1]=='O'&&board[2][0]=='O')||(board[0][0]=='O'&&board[1][0]=='O'&&board[2][0]=='O')||(board[0][1]=='O'&&board[1][1]=='O'&&board[2][1]=='O')||(board[0][2]=='O'&&board[1][2]=='O'&&board[2][2]=='O')){
            board[0][0]=' ';board[0][1]=' ';board[0][2]=' ';
            board[1][0]=' ';board[1][1]=' ';board[1][2]=' ';
            board[2][0]=' ';board[2][1]=' ';board[2][2]=' ';
            file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Tick Rosss/Tick Rosss/assets/name1.txt",ios::out|ios::trunc);
            file.close();
            file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Tick Rosss/Tick Rosss/assets/name2.txt",ios::out|ios::trunc);
            file.close();
            file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Tick Rosss/Tick Rosss/assets/turn.txt",ios::out|ios::trunc);
            file.close();
            file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Tick Rosss/Tick Rosss/assets/contineo1.txt",ios::out|ios::trunc);
            file.close();
            file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Tick Rosss/Tick Rosss/assets/contineo2.txt",ios::out|ios::trunc);
            file.close();
            file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Tick Rosss/Tick Rosss/assets/winners.txt",ios::app|ios::out);
            file<<name1;
            file<<" won from ";
            file<<name2;
            file<<"\n";
            file.close();
            cout<<"------CONGRATULATIONS------"<<endl;
            cout<<name1<<" WON THE GAME ------"<<endl;
            cout<<endl;cout<<endl;cout<<endl;cout<<endl;
            menucontineowork();
        }
        if((board[0][0]=='X'&&board[0][1]=='X'&&board[0][2]=='X')||(board[1][0]=='X'&&board[1][1]=='X'&&board[1][2]=='X')||(board[2][0]=='X'&&board[2][1]=='X'&&board[2][2]=='X')||(board[0][0]=='X'&&board[1][1]=='X'&&board[2][2]=='X')||(board[0][2]=='X'&&board[1][1]=='X'&&board[2][0]=='X')||(board[0][0]=='X'&&board[1][0]=='X'&&board[2][0]=='X')||(board[0][1]=='X'&&board[1][1]=='X'&&board[2][1]=='X')||(board[0][2]=='X'&&board[1][2]=='X'&&board[2][2]=='X')){
            board[0][0]=' ';board[0][1]=' ';board[0][2]=' ';
            board[1][0]=' ';board[1][1]=' ';board[1][2]=' ';
            board[2][0]=' ';board[2][1]=' ';board[2][2]=' ';
            file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Tick Rosss/Tick Rosss/assets/name1.txt",ios::out|ios::trunc);
            file.close();
            file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Tick Rosss/Tick Rosss/assets/name2.txt",ios::out|ios::trunc);
            file.close();
            file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Tick Rosss/Tick Rosss/assets/turn.txt",ios::out|ios::trunc);
            file.close();
            file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Tick Rosss/Tick Rosss/assets/contineo1.txt",ios::out|ios::trunc);
            file.close();
            file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Tick Rosss/Tick Rosss/assets/contineo2.txt",ios::out|ios::trunc);
            file.close();
            file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Tick Rosss/Tick Rosss/assets/winners.txt",ios::app|ios::out);
            file<<name2;
            file<<" won from ";
            file<<name1;
            file<<"\n";
            file.close();
            cout<<"------CONGRATULATIONS------"<<endl;
            cout<<name2<<" WON THE GAME ------"<<endl;
            cout<<endl;cout<<endl;cout<<endl;cout<<endl;
            menucontineowork();
        }
        while (true) {
            cin>>play2;
            if(play2=='a'){
                if(board[0][0]!='O'&&board[0][0]!='X'){
                    break;
                }
            }
            if(play2=='b'){
                if(board[0][1]!='O'&&board[0][1]!='X'){
                    break;
                }
            }
            if(play2=='c'){
                if(board[0][2]!='O'&&board[0][2]!='X'){
                    break;
                }
            }
            if(play2=='d'){
                if(board[1][0]!='O'&&board[1][0]!='X'){
                    break;
                }
            }
            if(play2=='e'){
                if(board[1][1]!='O'&&board[1][1]!='X'){
                    break;
                }
            }
            if(play2=='f'){
                if(board[1][2]!='O'&&board[1][2]!='X'){
                    break;
                }
            }
            if(play2=='g'){
                if(board[2][0]!='O'&&board[2][0]!='X'){
                    break;
                }
            }
            if(play2=='h'){
                if(board[2][1]!='O'&&board[2][1]!='X'){
                    break;
                }
            }
            if(play2=='i'){
                if(board[2][2]!='O'&&board[2][2]!='X'){
                    break;
                }
            }
        }
        switch (play2) {
            case 'a':
                board[0][0]='X';
                file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Tick Rosss/Tick Rosss/assets/contineo2.txt",ios::out|ios::app);
                file<<"a";
                file.close();
                break;
            case 'b':
                board[0][1]='X';
                file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Tick Rosss/Tick Rosss/assets/contineo2.txt",ios::out|ios::app);
                file<<"b";
                file.close();
                break;
            case 'c':
                board[0][2]='X';
                file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Tick Rosss/Tick Rosss/assets/contineo2.txt",ios::out|ios::app);
                file<<"c";
                file.close();
                break;
            case 'd':
                board[1][0]='X';
                file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Tick Rosss/Tick Rosss/assets/contineo2.txt",ios::out|ios::app);
                file<<"d";
                file.close();
                break;
            case 'e':
                board[1][1]='X';
                file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Tick Rosss/Tick Rosss/assets/contineo2.txt",ios::out|ios::app);
                file<<"e";
                file.close();
                break;
            case 'f':
                board[1][2]='X';
                file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Tick Rosss/Tick Rosss/assets/contineo2.txt",ios::out|ios::app);
                file<<"f";
                file.close();
                break;
            case 'g':
                board[2][0]='X';
                file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Tick Rosss/Tick Rosss/assets/contineo2.txt",ios::out|ios::app);
                file<<"g";
                file.close();
                break;
            case 'h':
                board[2][1]='X';
                file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Tick Rosss/Tick Rosss/assets/contineo2.txt",ios::out|ios::app);
                file<<"h";
                file.close();
                break;
            case 'i':
                board[2][2]='X';
                file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Tick Rosss/Tick Rosss/assets/contineo2.txt",ios::out|ios::app);
                file<<"i";
                file.close();
                break;
        }
        file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Tick Rosss/Tick Rosss/assets/turn.txt",ios::out|ios::trunc);
        file.close();
        file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Tick Rosss/Tick Rosss/assets/turn.txt",ios::out);
        file<<1;
        file.close();
    }
}

//1 -> mean Player 1 turn
//2 -> mean Player 2 turn

void gameworking(string name1,string name2){
    //1
    {
        inputsuggestion();
        cout<<name1<<" player turn "<<endl;
        cout<<"--------------------"<<endl;
        cout<<"      ||   ||         "<<endl;
        cout<<"    "<<board[0][0]<<" || "<<board[0][1]<<" || "<<board[0][2]<<"       "<<endl;
        cout<<"  ====||===||====     "<<endl;
        cout<<"    "<<board[1][0]<<" || "<<board[1][1]<<" || "<<board[1][2]<<"       "<<endl;
        cout<<"  ====||===||====     "<<endl;
        cout<<"    "<<board[2][0]<<" || "<<board[2][1]<<" || "<<board[2][2]<<"       "<<endl;
        cout<<"      ||   ||         "<<endl;
        cout<<"--------------------"<<endl;
        cout<<endl;
        if((board[0][0]=='O'&&board[0][1]=='O'&&board[0][2]=='O')||(board[1][0]=='O'&&board[1][1]=='O'&&board[1][2]=='O')||(board[2][0]=='O'&&board[2][1]=='O'&&board[2][2]=='O')||(board[0][0]=='O'&&board[1][1]=='O'&&board[2][2]=='O')||(board[0][2]=='O'&&board[1][1]=='O'&&board[2][0]=='O')||(board[0][0]=='O'&&board[1][0]=='O'&&board[2][0]=='O')||(board[0][1]=='O'&&board[1][1]=='O'&&board[2][1]=='O')||(board[0][2]=='O'&&board[1][2]=='O'&&board[2][2]=='O')){
            board[0][0]=' ';board[0][1]=' ';board[0][2]=' ';
            board[1][0]=' ';board[1][1]=' ';board[1][2]=' ';
            board[2][0]=' ';board[2][1]=' ';board[2][2]=' ';
            file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Tick Rosss/Tick Rosss/assets/name1.txt",ios::out|ios::trunc);
            file.close();
            file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Tick Rosss/Tick Rosss/assets/name2.txt",ios::out|ios::trunc);
            file.close();
            file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Tick Rosss/Tick Rosss/assets/turn.txt",ios::out|ios::trunc);
            file.close();
            file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Tick Rosss/Tick Rosss/assets/contineo1.txt",ios::out|ios::trunc);
            file.close();
            file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Tick Rosss/Tick Rosss/assets/contineo2.txt",ios::out|ios::trunc);
            file.close();
            file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Tick Rosss/Tick Rosss/assets/winners.txt",ios::app|ios::out);
            file<<name1;
            file<<" won from ";
            file<<name2;
            file<<"\n";
            file.close();
            cout<<"------CONGRATULATIONS------"<<endl;
            cout<<name1<<" WON THE GAME ------"<<endl;
            cout<<endl;cout<<endl;cout<<endl;cout<<endl;
            menucontineowork();
        }
        if((board[0][0]=='X'&&board[0][1]=='X'&&board[0][2]=='X')||(board[1][0]=='X'&&board[1][1]=='X'&&board[1][2]=='X')||(board[2][0]=='X'&&board[2][1]=='X'&&board[2][2]=='X')||(board[0][0]=='X'&&board[1][1]=='X'&&board[2][2]=='X')||(board[0][2]=='X'&&board[1][1]=='X'&&board[2][0]=='X')||(board[0][0]=='X'&&board[1][0]=='X'&&board[2][0]=='X')||(board[0][1]=='X'&&board[1][1]=='X'&&board[2][1]=='X')||(board[0][2]=='X'&&board[1][2]=='X'&&board[2][2]=='X')){
            board[0][0]=' ';board[0][1]=' ';board[0][2]=' ';
            board[1][0]=' ';board[1][1]=' ';board[1][2]=' ';
            board[2][0]=' ';board[2][1]=' ';board[2][2]=' ';
            file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Tick Rosss/Tick Rosss/assets/name1.txt",ios::out|ios::trunc);
            file.close();
            file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Tick Rosss/Tick Rosss/assets/name2.txt",ios::out|ios::trunc);
            file.close();
            file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Tick Rosss/Tick Rosss/assets/turn.txt",ios::out|ios::trunc);
            file.close();
            file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Tick Rosss/Tick Rosss/assets/contineo1.txt",ios::out|ios::trunc);
            file.close();
            file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Tick Rosss/Tick Rosss/assets/contineo2.txt",ios::out|ios::trunc);
            file.close();
            file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Tick Rosss/Tick Rosss/assets/winners.txt",ios::app|ios::out);
            file<<name2;
            file<<" won from ";
            file<<name1;
            file<<"\n";
            file.close();
            cout<<"------CONGRATULATIONS------"<<endl;
            cout<<name2<<" WON THE GAME ------"<<endl;
            cout<<endl;cout<<endl;cout<<endl;cout<<endl;
            menucontineowork();
        }
        while (true) {
            cin>>play1;
            if(play1=='a'){
                if((board[0][0]!='O')&&(board[0][0]!='X')){
                    board[0][0]='O';
                    file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Tick Rosss/Tick Rosss/assets/contineo1.txt",ios::out|ios::app);
                    file<<"a";
                    file.close();
                    break;
                }
            }
            if(play1=='b'){
                if((board[0][1]!='O')&&(board[0][1]!='X')){
                    board[0][1]='O';
                    file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Tick Rosss/Tick Rosss/assets/contineo1.txt",ios::out|ios::app);
                    file<<"b";
                    file.close();
                    break;
                }
            }
            if(play1=='c'){
                if((board[0][2]!='O')&&(board[0][2]!='X')){
                    board[0][2]='O';
                    file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Tick Rosss/Tick Rosss/assets/contineo1.txt",ios::out|ios::app);
                    file<<"c";
                    file.close();
                    break;
                }
            }
            if(play1=='d'){
                if((board[1][0]!='O')&&(board[1][0]!='X')){
                    board[1][0]='O';
                    file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Tick Rosss/Tick Rosss/assets/contineo1.txt",ios::out|ios::app);
                    file<<"d";
                    file.close();
                    break;
                }
            }
            if(play1=='e'){
                if((board[1][1]!='O')&&(board[1][1]!='X')){
                    board[1][1]='O';
                    file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Tick Rosss/Tick Rosss/assets/contineo1.txt",ios::out|ios::app);
                    file<<"e";
                    file.close();
                    break;
                }
            }
            if(play1=='f'){
                if((board[1][2]!='O')&&(board[1][2]!='X')){
                    board[1][2]='O';
                    file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Tick Rosss/Tick Rosss/assets/contineo1.txt",ios::out|ios::app);
                    file<<"f";
                    file.close();
                    break;
                }
            }
            if(play1=='g'){
                if((board[2][0]!='O')&&(board[2][0]!='X')){
                    board[2][0]='O';
                    file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Tick Rosss/Tick Rosss/assets/contineo1.txt",ios::out|ios::app);
                    file<<"g";
                    file.close();
                    break;
                }
            }
            if(play1=='h'){
                if((board[2][1]!='O')&&(board[2][1]!='X')){
                    board[2][1]='O';
                    file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Tick Rosss/Tick Rosss/assets/contineo1.txt",ios::out|ios::app);
                    file<<"h";
                    file.close();
                    break;
                }
            }
            if(play1=='i'){
                if((board[2][2]!='O')&&(board[2][2]!='X')){
                    board[2][2]='O';
                    file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Tick Rosss/Tick Rosss/assets/contineo1.txt",ios::out|ios::app);
                    file<<"i";
                    file.close();
                    break;
                }
            }
        }
        file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Tick Rosss/Tick Rosss/assets/turn.txt",ios::out|ios::trunc);
        file.close();
        file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Tick Rosss/Tick Rosss/assets/turn.txt",ios::out);
        file<<0;
        file.close();
    }
    //2
    {
        inputsuggestion();
        cout<<name2<<" player turn "<<endl;
        cout<<"--------------------"<<endl;
        cout<<"      ||   ||         "<<endl;
        cout<<"    "<<board[0][0]<<" || "<<board[0][1]<<" || "<<board[0][2]<<"       "<<endl;
        cout<<"  ====||===||====     "<<endl;
        cout<<"    "<<board[1][0]<<" || "<<board[1][1]<<" || "<<board[1][2]<<"       "<<endl;
        cout<<"  ====||===||====     "<<endl;
        cout<<"    "<<board[2][0]<<" || "<<board[2][1]<<" || "<<board[2][2]<<"       "<<endl;
        cout<<"      ||   ||         "<<endl;
        cout<<"--------------------"<<endl;
        cout<<endl;
        if((board[0][0]=='O'&&board[0][1]=='O'&&board[0][2]=='O')||(board[1][0]=='O'&&board[1][1]=='O'&&board[1][2]=='O')||(board[2][0]=='O'&&board[2][1]=='O'&&board[2][2]=='O')||(board[0][0]=='O'&&board[1][1]=='O'&&board[2][2]=='O')||(board[0][2]=='O'&&board[1][1]=='O'&&board[2][0]=='O')||(board[0][0]=='O'&&board[1][0]=='O'&&board[2][0]=='O')||(board[0][1]=='O'&&board[1][1]=='O'&&board[2][1]=='O')||(board[0][2]=='O'&&board[1][2]=='O'&&board[2][2]=='O')){
            board[0][0]=' ';board[0][1]=' ';board[0][2]=' ';
            board[1][0]=' ';board[1][1]=' ';board[1][2]=' ';
            board[2][0]=' ';board[2][1]=' ';board[2][2]=' ';
            file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Tick Rosss/Tick Rosss/assets/name1.txt",ios::out|ios::trunc);
            file.close();
            file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Tick Rosss/Tick Rosss/assets/name2.txt",ios::out|ios::trunc);
            file.close();
            file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Tick Rosss/Tick Rosss/assets/turn.txt",ios::out|ios::trunc);
            file.close();
            file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Tick Rosss/Tick Rosss/assets/contineo1.txt",ios::out|ios::trunc);
            file.close();
            file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Tick Rosss/Tick Rosss/assets/contineo2.txt",ios::out|ios::trunc);
            file.close();
            file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Tick Rosss/Tick Rosss/assets/winners.txt",ios::app|ios::out);
            file<<name1;
            file<<" won from ";
            file<<name2;
            file<<"\n";
            file.close();
            cout<<"------CONGRATULATIONS------"<<endl;
            cout<<name1<<" WON THE GAME ------"<<endl;
            cout<<endl;cout<<endl;cout<<endl;cout<<endl;
            menucontineowork();
        }
        if((board[0][0]=='X'&&board[0][1]=='X'&&board[0][2]=='X')||(board[1][0]=='X'&&board[1][1]=='X'&&board[1][2]=='X')||(board[2][0]=='X'&&board[2][1]=='X'&&board[2][2]=='X')||(board[0][0]=='X'&&board[1][1]=='X'&&board[2][2]=='X')||(board[0][2]=='X'&&board[1][1]=='X'&&board[2][0]=='X')||(board[0][0]=='X'&&board[1][0]=='X'&&board[2][0]=='X')||(board[0][1]=='X'&&board[1][1]=='X'&&board[2][1]=='X')||(board[0][2]=='X'&&board[1][2]=='X'&&board[2][2]=='X')){
            board[0][0]=' ';board[0][1]=' ';board[0][2]=' ';
            board[1][0]=' ';board[1][1]=' ';board[1][2]=' ';
            board[2][0]=' ';board[2][1]=' ';board[2][2]=' ';
            file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Tick Rosss/Tick Rosss/assets/name1.txt",ios::out|ios::trunc);
            file.close();
            file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Tick Rosss/Tick Rosss/assets/name2.txt",ios::out|ios::trunc);
            file.close();
            file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Tick Rosss/Tick Rosss/assets/turn.txt",ios::out|ios::trunc);
            file.close();
            file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Tick Rosss/Tick Rosss/assets/contineo1.txt",ios::out|ios::trunc);
            file.close();
            file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Tick Rosss/Tick Rosss/assets/contineo2.txt",ios::out|ios::trunc);
            file.close();
            file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Tick Rosss/Tick Rosss/assets/winners.txt",ios::app|ios::out);
            file<<name2;
            file<<" won from ";
            file<<name1;
            file<<"\n";
            file.close();
            cout<<"------CONGRATULATIONS------"<<endl;
            cout<<name2<<" WON THE GAME ------"<<endl;
            cout<<endl;cout<<endl;cout<<endl;cout<<endl;
            menucontineowork();
        }
        while (true) {
            cin>>play2;
            if(play2=='a'){
                if(board[0][0]!='O'&&board[0][0]!='X'){
                    break;
                }
            }
            if(play2=='b'){
                if(board[0][1]!='O'&&board[0][1]!='X'){
                    break;
                }
            }
            if(play2=='c'){
                if(board[0][2]!='O'&&board[0][2]!='X'){
                    break;
                }
            }
            if(play2=='d'){
                if(board[1][0]!='O'&&board[1][0]!='X'){
                    break;
                }
            }
            if(play2=='e'){
                if(board[1][1]!='O'&&board[1][1]!='X'){
                    break;
                }
            }
            if(play2=='f'){
                if(board[1][2]!='O'&&board[1][2]!='X'){
                    break;
                }
            }
            if(play2=='g'){
                if(board[2][0]!='O'&&board[2][0]!='X'){
                    break;
                }
            }
            if(play2=='h'){
                if(board[2][1]!='O'&&board[2][1]!='X'){
                    break;
                }
            }
            if(play2=='i'){
                if(board[2][2]!='O'&&board[2][2]!='X'){
                    break;
                }
            }
        }
        switch (play2) {
            case 'a':
                board[0][0]='X';
                file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Tick Rosss/Tick Rosss/assets/contineo2.txt",ios::out|ios::app);
                file<<"a";
                file.close();
                break;
            case 'b':
                board[0][1]='X';
                file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Tick Rosss/Tick Rosss/assets/contineo2.txt",ios::out|ios::app);
                file<<"b";
                file.close();
                break;
            case 'c':
                board[0][2]='X';
                file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Tick Rosss/Tick Rosss/assets/contineo2.txt",ios::out|ios::app);
                file<<"c";
                file.close();
                break;
            case 'd':
                board[1][0]='X';
                file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Tick Rosss/Tick Rosss/assets/contineo2.txt",ios::out|ios::app);
                file<<"d";
                file.close();
                break;
            case 'e':
                board[1][1]='X';
                file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Tick Rosss/Tick Rosss/assets/contineo2.txt",ios::out|ios::app);
                file<<"e";
                file.close();
                break;
            case 'f':
                board[1][2]='X';
                file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Tick Rosss/Tick Rosss/assets/contineo2.txt",ios::out|ios::app);
                file<<"f";
                file.close();
                break;
            case 'g':
                board[2][0]='X';
                file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Tick Rosss/Tick Rosss/assets/contineo2.txt",ios::out|ios::app);
                file<<"g";
                file.close();
                break;
            case 'h':
                board[2][1]='X';
                file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Tick Rosss/Tick Rosss/assets/contineo2.txt",ios::out|ios::app);
                file<<"h";
                file.close();
                break;
            case 'i':
                board[2][2]='X';
                file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Tick Rosss/Tick Rosss/assets/contineo2.txt",ios::out|ios::app);
                file<<"i";
                file.close();
                break;
        }
        file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Tick Rosss/Tick Rosss/assets/turn.txt",ios::out|ios::trunc);
        file.close();
        file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Tick Rosss/Tick Rosss/assets/turn.txt",ios::out);
        file<<1;
        file.close();
    }
}

void newgame(){
    working=0;
    file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Tick Rosss/Tick Rosss/assets/name1.txt",ios::out|ios::trunc);
    file.close();
    file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Tick Rosss/Tick Rosss/assets/name2.txt",ios::out|ios::trunc);
    file.close();
    file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Tick Rosss/Tick Rosss/assets/turn.txt",ios::out|ios::trunc);
    file.close();
    file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Tick Rosss/Tick Rosss/assets/contineo1.txt",ios::out|ios::trunc);
    file.close();
    file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Tick Rosss/Tick Rosss/assets/contineo2.txt",ios::out|ios::trunc);
    file.close();
    board[0][0]=' ';board[0][1]=' ';board[0][2]=' ';
    board[1][0]=' ';board[1][1]=' ';board[1][2]=' ';
    board[2][0]=' ';board[2][1]=' ';board[2][2]=' ';
    cout<<"-------------------------"<<endl;
    cout<<"-----Tick cross game-----"<<endl;
    cout<<"-------------------------"<<endl;
    cout<<"Enter player one name"<<endl;
    cin.ignore();
    getline(cin,name1);
    file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Tick Rosss/Tick Rosss/assets/name1.txt",ios::out);
    file<<name1;
    file.close();
    cout<<"Enter player two name"<<endl;
    getline(cin,name2);
    file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Tick Rosss/Tick Rosss/assets/name2.txt",ios::out);
    file<<name2;
    file.close();
    cout<<name1<<" Assigned [ O ]"<<endl;
    cout<<name2<<" Assigned [ X ]"<<endl;
    cout<<endl;
    cout<<"Enter 1 to start the game "<<endl;
    while(true){
        cin>>back;
        if(back=="1"){
            break;
        }
        if(back!="1"){
            cout<<"Wrong input !!"<<endl;
        }
    }
    if(back=="1"){
        back="\0";
        while(true){
            gameworking(name1, name2);
            working++;
            if(working==4){
                break;
            }
        }
        if(working==4){
            file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Tick Rosss/Tick Rosss/assets/name1.txt",ios::out|ios::trunc);
            file.close();
            file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Tick Rosss/Tick Rosss/assets/name2.txt",ios::out|ios::trunc);
            file.close();
            file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Tick Rosss/Tick Rosss/assets/turn.txt",ios::out|ios::trunc);
            file.close();
            file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Tick Rosss/Tick Rosss/assets/contineo.txt",ios::out|ios::trunc);
            file.close();
            cout<<endl;cout<<endl;cout<<endl;cout<<endl;
            cout<<"******** WARNING !! *********"<<endl;
            cout<<"MATCH DRAW !!"<<endl;
            cout<<"--------------------"<<endl;
            cout<<"      ||   ||         "<<endl;
            cout<<"    "<<board[0][0]<<" || "<<board[0][1]<<" || "<<board[0][2]<<"       "<<endl;
            cout<<"  ====||===||====     "<<endl;
            cout<<"    "<<board[1][0]<<" || "<<board[1][1]<<" || "<<board[1][2]<<"       "<<endl;
            cout<<"  ====||===||====     "<<endl;
            cout<<"    "<<board[2][0]<<" || "<<board[2][1]<<" || "<<board[2][2]<<"       "<<endl;
            cout<<"      ||   ||         "<<endl;
            cout<<"--------------------"<<endl;
            cout<<endl;cout<<endl;cout<<endl;cout<<endl;
            cout<<endl;cout<<endl;cout<<endl;cout<<endl;
            menucontineowork();
        }
    }
}

void contineogame(){
    char check1 , check2;
    file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Tick Rosss/Tick Rosss/assets/contineo1.txt",ios::in);
    while(file){
        file.get(check1);
        if(check1=='a'){
            if((board[0][0]!='O')&&(board[0][0]!='X')){
                board[0][0]='O';
            }
        }
        if(check1=='b'){
            if((board[0][1]!='O')&&(board[0][1]!='X')){
                board[0][1]='O';
            }
        }
        if(check1=='c'){
            if((board[0][2]!='O')&&(board[0][2]!='X')){
                board[0][2]='O';
            }
        }
        if(check1=='d'){
            if((board[1][0]!='O')&&(board[1][0]!='X')){
                board[1][0]='O';
            }
        }
        if(check1=='e'){
            if((board[1][1]!='O')&&(board[1][1]!='X')){
                board[1][1]='O';
            }
        }
        if(check1=='f'){
            if((board[1][2]!='O')&&(board[1][2]!='X')){
                board[1][2]='O';
            }
        }
        if(check1=='g'){
            if((board[2][0]!='O')&&(board[2][0]!='X')){
                board[2][0]='O';
            }
        }
        if(check1=='h'){
            if((board[2][1]!='O')&&(board[2][1]!='X')){
                board[2][1]='O';
            }
        }
        if(check1=='i'){
            if((board[2][2]!='O')&&(board[2][2]!='X')){
                board[2][2]='O';
            }
        }
    }
    file.close();
    file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Tick Rosss/Tick Rosss/assets/contineo2.txt",ios::in);
    while(file){
        file.get(check2);
        if(check2=='a'){
            if((board[0][0]!='O')&&(board[0][0]!='X')){
                board[0][0]='X';
            }
        }
        if(check2=='b'){
            if((board[0][1]!='O')&&(board[0][1]!='X')){
                board[0][1]='X';
            }
        }
        if(check2=='c'){
            if((board[0][2]!='O')&&(board[0][2]!='X')){
                board[0][2]='X';
            }
        }
        if(check2=='d'){
            if((board[1][0]!='O')&&(board[1][0]!='X')){
                board[1][0]='X';
            }
        }
        if(check2=='e'){
            if((board[1][1]!='O')&&(board[1][1]!='X')){
                board[1][1]='X';
            }
        }
        if(check2=='f'){
            if((board[1][2]!='O')&&(board[1][2]!='X')){
                board[1][2]='X';
            }
        }
        if(check2=='g'){
            if((board[2][0]!='O')&&(board[2][0]!='X')){
                board[2][0]='X';
            }
        }
        if(check2=='h'){
            if((board[2][1]!='O')&&(board[2][1]!='X')){
                board[2][1]='X';
            }
        }
        if(check2=='i'){
            if((board[2][2]!='O')&&(board[2][2]!='X')){
                board[2][2]='X';
            }
        }
    }
    file.close();
    
    cout<<"-------------------------"<<endl;
    cout<<"-----Tick cross game-----"<<endl;
    cout<<"-------------------------"<<endl;
    cout<<endl;cout<<endl;cout<<endl;cout<<endl;
    file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Tick Rosss/Tick Rosss/assets/name1.txt",ios::in);
    while(file){
        getline(file,name1);
    }
    file.close();
    file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Tick Rosss/Tick Rosss/assets/name2.txt",ios::in);
    while(file){
        getline(file,name2);
    }
    file.close();
    file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Tick Rosss/Tick Rosss/assets/turn.txt",ios::in);
    file>>check;
    file.close();
    working=0;
    if(board[0][0]==' '){
        working++;
    }
    if(board[0][1]==' '){
        working++;
    }
    if(board[0][2]==' '){
        working++;
    }
    if(board[1][0]==' '){
        working++;
    }
    if(board[1][1]==' '){
        working++;
    }
    if(board[1][2]==' '){
        working++;
    }
    if(board[2][0]==' '){
        working++;
    }
    if(board[2][1]==' '){
        working++;
    }
    if(board[2][2]==' '){
        working++;
    }
    if(check==0){
        if(working==8){
            gameworkingplayer2(name1, name2);
            gameworking(name1, name2);
            gameworking(name1, name2);
            gameworking(name1, name2);
            file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Tick Rosss/Tick Rosss/assets/name1.txt",ios::out|ios::trunc);
            file.close();
            file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Tick Rosss/Tick Rosss/assets/name2.txt",ios::out|ios::trunc);
            file.close();
            file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Tick Rosss/Tick Rosss/assets/turn.txt",ios::out|ios::trunc);
            file.close();
            file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Tick Rosss/Tick Rosss/assets/contineo.txt",ios::out|ios::trunc);
            file.close();
            cout<<endl;cout<<endl;cout<<endl;cout<<endl;
            cout<<"******** WARNING !! *********"<<endl;
            cout<<"MATCH DRAW !!"<<endl;
            cout<<"--------------------"<<endl;
            cout<<"      ||   ||         "<<endl;
            cout<<"    "<<board[0][0]<<" || "<<board[0][1]<<" || "<<board[0][2]<<"       "<<endl;
            cout<<"  ====||===||====     "<<endl;
            cout<<"    "<<board[1][0]<<" || "<<board[1][1]<<" || "<<board[1][2]<<"       "<<endl;
            cout<<"  ====||===||====     "<<endl;
            cout<<"    "<<board[2][0]<<" || "<<board[2][1]<<" || "<<board[2][2]<<"       "<<endl;
            cout<<"      ||   ||         "<<endl;
            cout<<"--------------------"<<endl;
            cout<<endl;cout<<endl;cout<<endl;cout<<endl;
            cout<<endl;cout<<endl;cout<<endl;cout<<endl;
            menucontineowork();
        }
        if(working==7){
            gameworkingplayer2(name1, name2);
            gameworking(name1, name2);
            gameworking(name1, name2);
            gameworking(name1, name2);
            file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Tick Rosss/Tick Rosss/assets/name1.txt",ios::out|ios::trunc);
            file.close();
            file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Tick Rosss/Tick Rosss/assets/name2.txt",ios::out|ios::trunc);
            file.close();
            file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Tick Rosss/Tick Rosss/assets/turn.txt",ios::out|ios::trunc);
            file.close();
            file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Tick Rosss/Tick Rosss/assets/contineo.txt",ios::out|ios::trunc);
            file.close();
            cout<<endl;cout<<endl;cout<<endl;cout<<endl;
            cout<<"******** WARNING !! *********"<<endl;
            cout<<"MATCH DRAW !!"<<endl;
            cout<<"--------------------"<<endl;
            cout<<"      ||   ||         "<<endl;
            cout<<"    "<<board[0][0]<<" || "<<board[0][1]<<" || "<<board[0][2]<<"       "<<endl;
            cout<<"  ====||===||====     "<<endl;
            cout<<"    "<<board[1][0]<<" || "<<board[1][1]<<" || "<<board[1][2]<<"       "<<endl;
            cout<<"  ====||===||====     "<<endl;
            cout<<"    "<<board[2][0]<<" || "<<board[2][1]<<" || "<<board[2][2]<<"       "<<endl;
            cout<<"      ||   ||         "<<endl;
            cout<<"--------------------"<<endl;
            cout<<endl;cout<<endl;cout<<endl;cout<<endl;
            cout<<endl;cout<<endl;cout<<endl;cout<<endl;
            menucontineowork();
        }
        if(working==6){
            gameworkingplayer2(name1, name2);
            gameworking(name1, name2);
            gameworking(name1, name2);
            file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Tick Rosss/Tick Rosss/assets/name1.txt",ios::out|ios::trunc);
            file.close();
            file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Tick Rosss/Tick Rosss/assets/name2.txt",ios::out|ios::trunc);
            file.close();
            file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Tick Rosss/Tick Rosss/assets/turn.txt",ios::out|ios::trunc);
            file.close();
            file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Tick Rosss/Tick Rosss/assets/contineo.txt",ios::out|ios::trunc);
            file.close();
            cout<<endl;cout<<endl;cout<<endl;cout<<endl;
            cout<<"******** WARNING !! *********"<<endl;
            cout<<"MATCH DRAW !!"<<endl;
            cout<<"--------------------"<<endl;
            cout<<"      ||   ||         "<<endl;
            cout<<"    "<<board[0][0]<<" || "<<board[0][1]<<" || "<<board[0][2]<<"       "<<endl;
            cout<<"  ====||===||====     "<<endl;
            cout<<"    "<<board[1][0]<<" || "<<board[1][1]<<" || "<<board[1][2]<<"       "<<endl;
            cout<<"  ====||===||====     "<<endl;
            cout<<"    "<<board[2][0]<<" || "<<board[2][1]<<" || "<<board[2][2]<<"       "<<endl;
            cout<<"      ||   ||         "<<endl;
            cout<<"--------------------"<<endl;
            cout<<endl;cout<<endl;cout<<endl;cout<<endl;
            cout<<endl;cout<<endl;cout<<endl;cout<<endl;
            menucontineowork();
        }
        if(working==5){
            gameworkingplayer2(name1, name2);
            gameworking(name1, name2);
            gameworking(name1, name2);
            file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Tick Rosss/Tick Rosss/assets/name1.txt",ios::out|ios::trunc);
            file.close();
            file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Tick Rosss/Tick Rosss/assets/name2.txt",ios::out|ios::trunc);
            file.close();
            file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Tick Rosss/Tick Rosss/assets/turn.txt",ios::out|ios::trunc);
            file.close();
            file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Tick Rosss/Tick Rosss/assets/contineo.txt",ios::out|ios::trunc);
            file.close();
            cout<<endl;cout<<endl;cout<<endl;cout<<endl;
            cout<<"******** WARNING !! *********"<<endl;
            cout<<"MATCH DRAW !!"<<endl;
            cout<<"--------------------"<<endl;
            cout<<"      ||   ||         "<<endl;
            cout<<"    "<<board[0][0]<<" || "<<board[0][1]<<" || "<<board[0][2]<<"       "<<endl;
            cout<<"  ====||===||====     "<<endl;
            cout<<"    "<<board[1][0]<<" || "<<board[1][1]<<" || "<<board[1][2]<<"       "<<endl;
            cout<<"  ====||===||====     "<<endl;
            cout<<"    "<<board[2][0]<<" || "<<board[2][1]<<" || "<<board[2][2]<<"       "<<endl;
            cout<<"      ||   ||         "<<endl;
            cout<<"--------------------"<<endl;
            cout<<endl;cout<<endl;cout<<endl;cout<<endl;
            cout<<endl;cout<<endl;cout<<endl;cout<<endl;
            menucontineowork();
        }
        if(working==4){
            gameworkingplayer2(name1, name2);
            gameworking(name1, name2);
            file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Tick Rosss/Tick Rosss/assets/name1.txt",ios::out|ios::trunc);
            file.close();
            file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Tick Rosss/Tick Rosss/assets/name2.txt",ios::out|ios::trunc);
            file.close();
            file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Tick Rosss/Tick Rosss/assets/turn.txt",ios::out|ios::trunc);
            file.close();
            file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Tick Rosss/Tick Rosss/assets/contineo.txt",ios::out|ios::trunc);
            file.close();
            cout<<endl;cout<<endl;cout<<endl;cout<<endl;
            cout<<"******** WARNING !! *********"<<endl;
            cout<<"MATCH DRAW !!"<<endl;
            cout<<"--------------------"<<endl;
            cout<<"      ||   ||         "<<endl;
            cout<<"    "<<board[0][0]<<" || "<<board[0][1]<<" || "<<board[0][2]<<"       "<<endl;
            cout<<"  ====||===||====     "<<endl;
            cout<<"    "<<board[1][0]<<" || "<<board[1][1]<<" || "<<board[1][2]<<"       "<<endl;
            cout<<"  ====||===||====     "<<endl;
            cout<<"    "<<board[2][0]<<" || "<<board[2][1]<<" || "<<board[2][2]<<"       "<<endl;
            cout<<"      ||   ||         "<<endl;
            cout<<"--------------------"<<endl;
            cout<<endl;cout<<endl;cout<<endl;cout<<endl;
            cout<<endl;cout<<endl;cout<<endl;cout<<endl;
            menucontineowork();
        }
        if(working==3){
            gameworkingplayer2(name1, name2);
            gameworking(name1, name2);
            file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Tick Rosss/Tick Rosss/assets/name1.txt",ios::out|ios::trunc);
            file.close();
            file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Tick Rosss/Tick Rosss/assets/name2.txt",ios::out|ios::trunc);
            file.close();
            file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Tick Rosss/Tick Rosss/assets/turn.txt",ios::out|ios::trunc);
            file.close();
            file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Tick Rosss/Tick Rosss/assets/contineo.txt",ios::out|ios::trunc);
            file.close();
            cout<<endl;cout<<endl;cout<<endl;cout<<endl;
            cout<<"******** WARNING !! *********"<<endl;
            cout<<"MATCH DRAW !!"<<endl;
            cout<<"--------------------"<<endl;
            cout<<"      ||   ||         "<<endl;
            cout<<"    "<<board[0][0]<<" || "<<board[0][1]<<" || "<<board[0][2]<<"       "<<endl;
            cout<<"  ====||===||====     "<<endl;
            cout<<"    "<<board[1][0]<<" || "<<board[1][1]<<" || "<<board[1][2]<<"       "<<endl;
            cout<<"  ====||===||====     "<<endl;
            cout<<"    "<<board[2][0]<<" || "<<board[2][1]<<" || "<<board[2][2]<<"       "<<endl;
            cout<<"      ||   ||         "<<endl;
            cout<<"--------------------"<<endl;
            cout<<endl;cout<<endl;cout<<endl;cout<<endl;
            cout<<endl;cout<<endl;cout<<endl;cout<<endl;
            menucontineowork();
        }
        if(working==2){
            gameworkingplayer2(name1, name2);
            file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Tick Rosss/Tick Rosss/assets/name1.txt",ios::out|ios::trunc);
            file.close();
            file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Tick Rosss/Tick Rosss/assets/name2.txt",ios::out|ios::trunc);
            file.close();
            file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Tick Rosss/Tick Rosss/assets/turn.txt",ios::out|ios::trunc);
            file.close();
            file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Tick Rosss/Tick Rosss/assets/contineo.txt",ios::out|ios::trunc);
            file.close();
            cout<<endl;cout<<endl;cout<<endl;cout<<endl;
            cout<<"******** WARNING !! *********"<<endl;
            cout<<"MATCH DRAW !!"<<endl;
            cout<<"--------------------"<<endl;
            cout<<"      ||   ||         "<<endl;
            cout<<"    "<<board[0][0]<<" || "<<board[0][1]<<" || "<<board[0][2]<<"       "<<endl;
            cout<<"  ====||===||====     "<<endl;
            cout<<"    "<<board[1][0]<<" || "<<board[1][1]<<" || "<<board[1][2]<<"       "<<endl;
            cout<<"  ====||===||====     "<<endl;
            cout<<"    "<<board[2][0]<<" || "<<board[2][1]<<" || "<<board[2][2]<<"       "<<endl;
            cout<<"      ||   ||         "<<endl;
            cout<<"--------------------"<<endl;
            cout<<endl;cout<<endl;cout<<endl;cout<<endl;
            cout<<endl;cout<<endl;cout<<endl;cout<<endl;
            menucontineowork();
        }
        if(working==1){
            gameworkingplayer2(name1, name2);
            file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Tick Rosss/Tick Rosss/assets/name1.txt",ios::out|ios::trunc);
            file.close();
            file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Tick Rosss/Tick Rosss/assets/name2.txt",ios::out|ios::trunc);
            file.close();
            file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Tick Rosss/Tick Rosss/assets/turn.txt",ios::out|ios::trunc);
            file.close();
            file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Tick Rosss/Tick Rosss/assets/contineo.txt",ios::out|ios::trunc);
            file.close();
            cout<<endl;cout<<endl;cout<<endl;cout<<endl;
            cout<<"******** WARNING !! *********"<<endl;
            cout<<"MATCH DRAW !!"<<endl;
            cout<<"--------------------"<<endl;
            cout<<"      ||   ||         "<<endl;
            cout<<"    "<<board[0][0]<<" || "<<board[0][1]<<" || "<<board[0][2]<<"       "<<endl;
            cout<<"  ====||===||====     "<<endl;
            cout<<"    "<<board[1][0]<<" || "<<board[1][1]<<" || "<<board[1][2]<<"       "<<endl;
            cout<<"  ====||===||====     "<<endl;
            cout<<"    "<<board[2][0]<<" || "<<board[2][1]<<" || "<<board[2][2]<<"       "<<endl;
            cout<<"      ||   ||         "<<endl;
            cout<<"--------------------"<<endl;
            cout<<endl;cout<<endl;cout<<endl;cout<<endl;
            cout<<endl;cout<<endl;cout<<endl;cout<<endl;
            menucontineowork();
        }
    }
    if(check==1){
        if(working==7){
            gameworking(name1, name2);
            gameworking(name1, name2);
            gameworking(name1, name2);
            file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Tick Rosss/Tick Rosss/assets/name1.txt",ios::out|ios::trunc);
            file.close();
            file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Tick Rosss/Tick Rosss/assets/name2.txt",ios::out|ios::trunc);
            file.close();
            file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Tick Rosss/Tick Rosss/assets/turn.txt",ios::out|ios::trunc);
            file.close();
            file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Tick Rosss/Tick Rosss/assets/contineo.txt",ios::out|ios::trunc);
            file.close();
            cout<<endl;cout<<endl;cout<<endl;cout<<endl;
            cout<<"******** WARNING !! *********"<<endl;
            cout<<"MATCH DRAW !!"<<endl;
            cout<<"--------------------"<<endl;
            cout<<"      ||   ||         "<<endl;
            cout<<"    "<<board[0][0]<<" || "<<board[0][1]<<" || "<<board[0][2]<<"       "<<endl;
            cout<<"  ====||===||====     "<<endl;
            cout<<"    "<<board[1][0]<<" || "<<board[1][1]<<" || "<<board[1][2]<<"       "<<endl;
            cout<<"  ====||===||====     "<<endl;
            cout<<"    "<<board[2][0]<<" || "<<board[2][1]<<" || "<<board[2][2]<<"       "<<endl;
            cout<<"      ||   ||         "<<endl;
            cout<<"--------------------"<<endl;
            cout<<endl;cout<<endl;cout<<endl;cout<<endl;
            cout<<endl;cout<<endl;cout<<endl;cout<<endl;
            menucontineowork();
        }
        if(working==6){
            gameworking(name1, name2);
            gameworking(name1, name2);
            gameworking(name1, name2);
            file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Tick Rosss/Tick Rosss/assets/name1.txt",ios::out|ios::trunc);
            file.close();
            file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Tick Rosss/Tick Rosss/assets/name2.txt",ios::out|ios::trunc);
            file.close();
            file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Tick Rosss/Tick Rosss/assets/turn.txt",ios::out|ios::trunc);
            file.close();
            file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Tick Rosss/Tick Rosss/assets/contineo.txt",ios::out|ios::trunc);
            file.close();
            cout<<endl;cout<<endl;cout<<endl;cout<<endl;
            cout<<"******** WARNING !! *********"<<endl;
            cout<<"MATCH DRAW !!"<<endl;
            cout<<"--------------------"<<endl;
            cout<<"      ||   ||         "<<endl;
            cout<<"    "<<board[0][0]<<" || "<<board[0][1]<<" || "<<board[0][2]<<"       "<<endl;
            cout<<"  ====||===||====     "<<endl;
            cout<<"    "<<board[1][0]<<" || "<<board[1][1]<<" || "<<board[1][2]<<"       "<<endl;
            cout<<"  ====||===||====     "<<endl;
            cout<<"    "<<board[2][0]<<" || "<<board[2][1]<<" || "<<board[2][2]<<"       "<<endl;
            cout<<"      ||   ||         "<<endl;
            cout<<"--------------------"<<endl;
            cout<<endl;cout<<endl;cout<<endl;cout<<endl;
            cout<<endl;cout<<endl;cout<<endl;cout<<endl;
            menucontineowork();
        }
        if(working==5){
            gameworking(name1, name2);
            gameworking(name1, name2);
            file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Tick Rosss/Tick Rosss/assets/name1.txt",ios::out|ios::trunc);
            file.close();
            file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Tick Rosss/Tick Rosss/assets/name2.txt",ios::out|ios::trunc);
            file.close();
            file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Tick Rosss/Tick Rosss/assets/turn.txt",ios::out|ios::trunc);
            file.close();
            file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Tick Rosss/Tick Rosss/assets/contineo.txt",ios::out|ios::trunc);
            file.close();
            cout<<endl;cout<<endl;cout<<endl;cout<<endl;
            cout<<"******** WARNING !! *********"<<endl;
            cout<<"MATCH DRAW !!"<<endl;
            cout<<"--------------------"<<endl;
            cout<<"      ||   ||         "<<endl;
            cout<<"    "<<board[0][0]<<" || "<<board[0][1]<<" || "<<board[0][2]<<"       "<<endl;
            cout<<"  ====||===||====     "<<endl;
            cout<<"    "<<board[1][0]<<" || "<<board[1][1]<<" || "<<board[1][2]<<"       "<<endl;
            cout<<"  ====||===||====     "<<endl;
            cout<<"    "<<board[2][0]<<" || "<<board[2][1]<<" || "<<board[2][2]<<"       "<<endl;
            cout<<"      ||   ||         "<<endl;
            cout<<"--------------------"<<endl;
            cout<<endl;cout<<endl;cout<<endl;cout<<endl;
            cout<<endl;cout<<endl;cout<<endl;cout<<endl;
            menucontineowork();
        }
        if(working==4){
            gameworking(name1, name2);
            gameworking(name1, name2);
            file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Tick Rosss/Tick Rosss/assets/name1.txt",ios::out|ios::trunc);
            file.close();
            file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Tick Rosss/Tick Rosss/assets/name2.txt",ios::out|ios::trunc);
            file.close();
            file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Tick Rosss/Tick Rosss/assets/turn.txt",ios::out|ios::trunc);
            file.close();
            file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Tick Rosss/Tick Rosss/assets/contineo.txt",ios::out|ios::trunc);
            file.close();
            cout<<endl;cout<<endl;cout<<endl;cout<<endl;
            cout<<"******** WARNING !! *********"<<endl;
            cout<<"MATCH DRAW !!"<<endl;
            cout<<"--------------------"<<endl;
            cout<<"      ||   ||         "<<endl;
            cout<<"    "<<board[0][0]<<" || "<<board[0][1]<<" || "<<board[0][2]<<"       "<<endl;
            cout<<"  ====||===||====     "<<endl;
            cout<<"    "<<board[1][0]<<" || "<<board[1][1]<<" || "<<board[1][2]<<"       "<<endl;
            cout<<"  ====||===||====     "<<endl;
            cout<<"    "<<board[2][0]<<" || "<<board[2][1]<<" || "<<board[2][2]<<"       "<<endl;
            cout<<"      ||   ||         "<<endl;
            cout<<"--------------------"<<endl;
            cout<<endl;cout<<endl;cout<<endl;cout<<endl;
            cout<<endl;cout<<endl;cout<<endl;cout<<endl;
            menucontineowork();
        }
        if(working==3){
            gameworking(name1, name2);
            file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Tick Rosss/Tick Rosss/assets/name1.txt",ios::out|ios::trunc);
            file.close();
            file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Tick Rosss/Tick Rosss/assets/name2.txt",ios::out|ios::trunc);
            file.close();
            file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Tick Rosss/Tick Rosss/assets/turn.txt",ios::out|ios::trunc);
            file.close();
            file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Tick Rosss/Tick Rosss/assets/contineo.txt",ios::out|ios::trunc);
            file.close();
            cout<<endl;cout<<endl;cout<<endl;cout<<endl;
            cout<<"******** WARNING !! *********"<<endl;
            cout<<"MATCH DRAW !!"<<endl;
            cout<<"--------------------"<<endl;
            cout<<"      ||   ||         "<<endl;
            cout<<"    "<<board[0][0]<<" || "<<board[0][1]<<" || "<<board[0][2]<<"       "<<endl;
            cout<<"  ====||===||====     "<<endl;
            cout<<"    "<<board[1][0]<<" || "<<board[1][1]<<" || "<<board[1][2]<<"       "<<endl;
            cout<<"  ====||===||====     "<<endl;
            cout<<"    "<<board[2][0]<<" || "<<board[2][1]<<" || "<<board[2][2]<<"       "<<endl;
            cout<<"      ||   ||         "<<endl;
            cout<<"--------------------"<<endl;
            cout<<endl;cout<<endl;cout<<endl;cout<<endl;
            cout<<endl;cout<<endl;cout<<endl;cout<<endl;
            menucontineowork();
        }
        if(working==2){
            gameworking(name1, name2);
            file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Tick Rosss/Tick Rosss/assets/name1.txt",ios::out|ios::trunc);
            file.close();
            file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Tick Rosss/Tick Rosss/assets/name2.txt",ios::out|ios::trunc);
            file.close();
            file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Tick Rosss/Tick Rosss/assets/turn.txt",ios::out|ios::trunc);
            file.close();
            file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Tick Rosss/Tick Rosss/assets/contineo.txt",ios::out|ios::trunc);
            file.close();
            cout<<endl;cout<<endl;cout<<endl;cout<<endl;
            cout<<"******** WARNING !! *********"<<endl;
            cout<<"MATCH DRAW !!"<<endl;
            cout<<"--------------------"<<endl;
            cout<<"      ||   ||         "<<endl;
            cout<<"    "<<board[0][0]<<" || "<<board[0][1]<<" || "<<board[0][2]<<"       "<<endl;
            cout<<"  ====||===||====     "<<endl;
            cout<<"    "<<board[1][0]<<" || "<<board[1][1]<<" || "<<board[1][2]<<"       "<<endl;
            cout<<"  ====||===||====     "<<endl;
            cout<<"    "<<board[2][0]<<" || "<<board[2][1]<<" || "<<board[2][2]<<"       "<<endl;
            cout<<"      ||   ||         "<<endl;
            cout<<"--------------------"<<endl;
            cout<<endl;cout<<endl;cout<<endl;cout<<endl;
            cout<<endl;cout<<endl;cout<<endl;cout<<endl;
            menucontineowork();
        }
        if(working==1||working==0){
            file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Tick Rosss/Tick Rosss/assets/name1.txt",ios::out|ios::trunc);
            file.close();
            file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Tick Rosss/Tick Rosss/assets/name2.txt",ios::out|ios::trunc);
            file.close();
            file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Tick Rosss/Tick Rosss/assets/turn.txt",ios::out|ios::trunc);
            file.close();
            file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Tick Rosss/Tick Rosss/assets/contineo.txt",ios::out|ios::trunc);
            file.close();
            cout<<endl;cout<<endl;cout<<endl;cout<<endl;
            cout<<"******** WARNING !! *********"<<endl;
            cout<<"MATCH DRAW !!"<<endl;
            cout<<"--------------------"<<endl;
            cout<<"      ||   ||         "<<endl;
            cout<<"    "<<board[0][0]<<" || "<<board[0][1]<<" || "<<board[0][2]<<"       "<<endl;
            cout<<"  ====||===||====     "<<endl;
            cout<<"    "<<board[1][0]<<" || "<<board[1][1]<<" || "<<board[1][2]<<"       "<<endl;
            cout<<"  ====||===||====     "<<endl;
            cout<<"    "<<board[2][0]<<" || "<<board[2][1]<<" || "<<board[2][2]<<"       "<<endl;
            cout<<"      ||   ||         "<<endl;
            cout<<"--------------------"<<endl;
            cout<<endl;cout<<endl;cout<<endl;cout<<endl;
            cout<<endl;cout<<endl;cout<<endl;cout<<endl;
            menucontineowork();
        }
    }
}

#endif /* main_hpp */
