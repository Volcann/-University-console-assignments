#ifndef main_hpp
#define main_hpp
#include <iostream>
#include <cstring>
#include <cstdlib>
#include "func.h"
#include "classdata.h"
using namespace std;
void newgamehard(string);
void newgameeasy(string);
void newgamemedium(string);

void game(){
    file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Hangman Game/Hangman Game/assets/name.txt",ios::out|ios::trunc);
    file.close();
    file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Hangman Game/Hangman Game/assets/level.txt",ios::in);
    file>>select;
    file.close();
    if(select==1){
        newgamehard(back);
    }
    if(select==2){
        newgamemedium(back);
    }
    if(select==3){
        newgameeasy(back);
    }
}

void newgamehard(string w){
    char word1[11],
        obtainword1[11];
    class data word;
    w = word.getwordhard();
    for(int i = 0 ; i < w.size() ; i++){
            obtainword1[i]=word1[i]=w.at(i);
    }
    file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Hangman Game/Hangman Game/assets/name.txt",ios::out|ios::trunc);
    file.close();
    file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Hangman Game/Hangman Game/assets/name.txt",ios::out);
    file<<w;
    file.close();
//Start
    cout<<endl;
    cout<<"=================== HangMan Game ==================="<<endl;
    cout<<"----------------------------------------------------"<<endl;
    cout<<"|                      Hangman                      |"<<endl;
    cout<<"----------------------------------------------------"<<endl;
    cout<<"|                         |                         |"<<endl;
    cout<<"|                         |                         |"<<endl;
    cout<<"|                         |                         |"<<endl;
    cout<<"|                         O                         |"<<endl;
    cout<<"|                        /|\\                        |"<<endl;
    cout<<"|                         |                         |"<<endl;
    cout<<"|                        / \\                        |"<<endl;
    cout<<"----------------------------------------------------"<<endl;
    cout<<"---------------- Select and Type One ---------------"<<endl;
    cout<<"                      ";
    cout<<static_cast<char>(toupper(    obtainword1[1]))<<" ";
    cout<<static_cast<char>(toupper(    obtainword1[7]))<<" ";
    cout<<static_cast<char>(toupper(    obtainword1[3]))<<" ";
    cout<<static_cast<char>(toupper(    obtainword1[4]))<<" ";
    cout<<static_cast<char>(toupper(    obtainword1[9]))<<" ";
    cout<<endl;
    cout<<"----------------------------------------------------"<<endl;
    cout<<"|                                                   |"<<endl;
    cout<<"                 ";
    for(int i = 0 ; i<=strlen(word1) ; i++){
        if(i==1){
            word1[i]='-';
        }
        if(i==3){
            word1[i]='-';
        }
        if(i==4){
            word1[i]='-';
        }
        if(i==7){
            word1[i]='-';
        }
        if(i==9){
            word1[i]='-';
        }
        cout<<word1[i]<<" ";
    }
    cout<<endl;
    cout<<"|                                                   |"<<endl;
    cout<<"----------------------------------------------------"<<endl;
    cout<<"Enter the hidden word "<<endl;
    while(true){
        tries--;
        cin>>hidelet;
        if(hidelet==    obtainword1[1]){
            break;
        }
        if(tries==3){
            cout<<"------------------------------------------"<<endl;
            cout<<"|            Hangman is Hanged           |"<<endl;
            cout<<"------------------------------------------"<<endl;
            cout<<"|                  |                     |"<<endl;
            cout<<"|                  |    uhHH             |"<<endl;
            cout<<"|                  O                     |"<<endl;
            cout<<"|                 /|\\                    |"<<endl;
            cout<<"|                  |                     |"<<endl;
            cout<<"|                 / \\                    |"<<endl;
            cout<<"|                                        |"<<endl;
            cout<<"------------------------------------------"<<endl;
            cout<<"Please enter the right letter"<<endl;
        }
        if(tries==2){
            cout<<"------------------------------------------"<<endl;
            cout<<"|          Hangman is in Danger          |"<<endl;
            cout<<"------------------------------------------"<<endl;
            cout<<"|                  |     ahh             |"<<endl;
            cout<<"|                  O  aAAhHH             |"<<endl;
            cout<<"|                 /|\\                    |"<<endl;
            cout<<"|                  |                     |"<<endl;
            cout<<"|                 / \\                    |"<<endl;
            cout<<"|                                        |"<<endl;
            cout<<"|                                        |"<<endl;
            cout<<"------------------------------------------"<<endl;
            cout<<"Please enter the right letter"<<endl;
        }
        if(tries==1){
            cout<<"############## GAME OVER #################"<<endl;
            cout<<"------------------------------------------"<<endl;
            cout<<"|             Hangman is Died            |"<<endl;
            cout<<"------------------------------------------"<<endl;
            cout<<"|                  |   ~                 |"<<endl;
            cout<<"|                  O ~                    |"<<endl;
            cout<<"|                 /|\\                    |"<<endl;
            cout<<"|                  |                     |"<<endl;
            cout<<"|                 / \\                    |"<<endl;
            cout<<"|                                        |"<<endl;
            cout<<"|                                        |"<<endl;
            cout<<"------------------------------------------"<<endl;
            cout<<endl; cout<<endl; cout<<endl;
            menuworking();
        }
    }
    
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    
//if 1 letter done
    if(hidelet==    obtainword1[1]){
        cout<<"=================== HangMan Game ==================="<<endl;
        cout<<"----------------------------------------------------"<<endl;
        cout<<"|                      Hangman                      |"<<endl;
        cout<<"----------------------------------------------------"<<endl;
        cout<<"|                         |                         |"<<endl;
        cout<<"|                         |                         |"<<endl;
        cout<<"|                         |                         |"<<endl;
        cout<<"|                         O                         |"<<endl;
        cout<<"|                        /|\\                        |"<<endl;
        cout<<"|                         |                         |"<<endl;
        cout<<"|                        / \\                        |"<<endl;
        cout<<"----------------------------------------------------"<<endl;
        cout<<"---------------- Select and Type One ---------------"<<endl;
        cout<<"                      ";
        cout<<static_cast<char>(toupper(    obtainword1[7]))<<" ";
        cout<<static_cast<char>(toupper(    obtainword1[3]))<<" ";
        cout<<static_cast<char>(toupper(    obtainword1[4]))<<" ";
        cout<<static_cast<char>(toupper(    obtainword1[9]))<<" ";
        cout<<endl;
        cout<<"----------------------------------------------------"<<endl;
        cout<<"|                                                   |"<<endl;
        cout<<"                    ";
        for(int i = 0 ; i<=strlen(word1) ; i++){
            if(i==1){
                word1[i]=hidelet;
            }
            if(i==3){
                word1[i]='-';
            }
            if(i==4){
                word1[i]='-';
            }
            if(i==7){
                word1[i]='-';
            }
            if(i==9){
                word1[i]='-';
            }
            cout<<word1[i]<<" ";
        }
        cout<<endl;
        cout<<"|                                                   |"<<endl;
        cout<<"----------------------------------------------------"<<endl;
    }
    tries = 4;
    cout<<"Enter the hidden word "<<endl;
    while(true){
        tries--;
        cin>>hidelet;
        if(hidelet==    obtainword1[3]){
            break;
        }
        if(tries==3){
            cout<<"------------------------------------------"<<endl;
            cout<<"|            Hangman is Hanged           |"<<endl;
            cout<<"------------------------------------------"<<endl;
            cout<<"|                  |                     |"<<endl;
            cout<<"|                  |    uhHH             |"<<endl;
            cout<<"|                  O                     |"<<endl;
            cout<<"|                 /|\\                    |"<<endl;
            cout<<"|                  |                     |"<<endl;
            cout<<"|                 / \\                    |"<<endl;
            cout<<"|                                        |"<<endl;
            cout<<"------------------------------------------"<<endl;
            cout<<"Please enter the right letter"<<endl;
        }
        if(tries==2){
            cout<<"------------------------------------------"<<endl;
            cout<<"|          Hangman is in Danger          |"<<endl;
            cout<<"------------------------------------------"<<endl;
            cout<<"|                  |     ahh             |"<<endl;
            cout<<"|                  O  aAAhHH             |"<<endl;
            cout<<"|                 /|\\                    |"<<endl;
            cout<<"|                  |                     |"<<endl;
            cout<<"|                 / \\                    |"<<endl;
            cout<<"|                                        |"<<endl;
            cout<<"|                                        |"<<endl;
            cout<<"------------------------------------------"<<endl;
            cout<<"Please enter the right letter"<<endl;
        }
        if(tries==1){
            cout<<"############## GAME OVER #################"<<endl;
            cout<<"------------------------------------------"<<endl;
            cout<<"|             Hangman is Died            |"<<endl;
            cout<<"------------------------------------------"<<endl;
            cout<<"|                  |   ~                 |"<<endl;
            cout<<"|                  O ~                    |"<<endl;
            cout<<"|                 /|\\                    |"<<endl;
            cout<<"|                  |                     |"<<endl;
            cout<<"|                 / \\                    |"<<endl;
            cout<<"|                                        |"<<endl;
            cout<<"|                                        |"<<endl;
            cout<<"------------------------------------------"<<endl;
            cout<<endl; cout<<endl; cout<<endl;
            menuworking();
        }
    }
    
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    
//if 3 letter done
    if(hidelet==    obtainword1[3]){
        cout<<"=================== HangMan Game ==================="<<endl;
        cout<<"----------------------------------------------------"<<endl;
        cout<<"|                      Hangman                      |"<<endl;
        cout<<"----------------------------------------------------"<<endl;
        cout<<"|                         |                         |"<<endl;
        cout<<"|                         |                         |"<<endl;
        cout<<"|                         |                         |"<<endl;
        cout<<"|                         O                         |"<<endl;
        cout<<"|                        /|\\                        |"<<endl;
        cout<<"|                         |                         |"<<endl;
        cout<<"|                        / \\                        |"<<endl;
        cout<<"----------------------------------------------------"<<endl;
        cout<<"---------------- Select and Type One ---------------"<<endl;
        cout<<"                      ";
        cout<<static_cast<char>(toupper(    obtainword1[7]))<<" ";
        cout<<static_cast<char>(toupper(    obtainword1[4]))<<" ";
        cout<<static_cast<char>(toupper(    obtainword1[9]))<<" ";
        cout<<endl;
        cout<<"----------------------------------------------------"<<endl;
        cout<<"|                                                   |"<<endl;
        cout<<"                    ";
        for(int i = 0 ; i<=strlen(word1) ; i++){
            if(i==3){
                word1[i]=hidelet;
            }
            if(i==4){
                word1[i]='-';
            }
            if(i==7){
                word1[i]='-';
            }
            if(i==9){
                word1[i]='-';
            }
            cout<<word1[i]<<" ";
        }
        cout<<endl;
        cout<<"|                                                   |"<<endl;
        cout<<"----------------------------------------------------"<<endl;
    }
    tries = 4;
    cout<<"Enter the hidden word "<<endl;
    while(true){
        tries--;
        cin>>hidelet;
        if(hidelet==    obtainword1[4]){
            break;
        }
        if(tries==3){
            cout<<"------------------------------------------"<<endl;
            cout<<"|            Hangman is Hanged           |"<<endl;
            cout<<"------------------------------------------"<<endl;
            cout<<"|                  |                     |"<<endl;
            cout<<"|                  |    uhHH             |"<<endl;
            cout<<"|                  O                     |"<<endl;
            cout<<"|                 /|\\                    |"<<endl;
            cout<<"|                  |                     |"<<endl;
            cout<<"|                 / \\                    |"<<endl;
            cout<<"|                                        |"<<endl;
            cout<<"------------------------------------------"<<endl;
            cout<<"Please enter the right letter"<<endl;
        }
        if(tries==2){
            cout<<"------------------------------------------"<<endl;
            cout<<"|          Hangman is in Danger          |"<<endl;
            cout<<"------------------------------------------"<<endl;
            cout<<"|                  |     ahh             |"<<endl;
            cout<<"|                  O  aAAhHH             |"<<endl;
            cout<<"|                 /|\\                    |"<<endl;
            cout<<"|                  |                     |"<<endl;
            cout<<"|                 / \\                    |"<<endl;
            cout<<"|                                        |"<<endl;
            cout<<"|                                        |"<<endl;
            cout<<"------------------------------------------"<<endl;
            cout<<"Please enter the right letter"<<endl;
        }
        if(tries==1){
            cout<<"############## GAME OVER #################"<<endl;
            cout<<"------------------------------------------"<<endl;
            cout<<"|             Hangman is Died            |"<<endl;
            cout<<"------------------------------------------"<<endl;
            cout<<"|                  |   ~                 |"<<endl;
            cout<<"|                  O ~                    |"<<endl;
            cout<<"|                 /|\\                    |"<<endl;
            cout<<"|                  |                     |"<<endl;
            cout<<"|                 / \\                    |"<<endl;
            cout<<"|                                        |"<<endl;
            cout<<"|                                        |"<<endl;
            cout<<"------------------------------------------"<<endl;
            cout<<endl; cout<<endl; cout<<endl;
            menuworking();
        }
    }
    
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    
//if 4 letter done
    if(hidelet==    obtainword1[4]){
        cout<<"=================== HangMan Game ==================="<<endl;
        cout<<"----------------------------------------------------"<<endl;
        cout<<"|                      Hangman                      |"<<endl;
        cout<<"----------------------------------------------------"<<endl;
        cout<<"|                         |                         |"<<endl;
        cout<<"|                         |                         |"<<endl;
        cout<<"|                         |                         |"<<endl;
        cout<<"|                         O                         |"<<endl;
        cout<<"|                        /|\\                        |"<<endl;
        cout<<"|                         |                         |"<<endl;
        cout<<"|                        / \\                        |"<<endl;
        cout<<"----------------------------------------------------"<<endl;
        cout<<"---------------- Select and Type One ---------------"<<endl;
        cout<<"                      ";
        cout<<static_cast<char>(toupper(    obtainword1[7]))<<" ";
        cout<<static_cast<char>(toupper(    obtainword1[9]))<<" ";
        cout<<endl;
        cout<<"----------------------------------------------------"<<endl;
        cout<<"|                                                   |"<<endl;
        cout<<"                    ";
        for(int i = 0 ; i<=strlen(word1) ; i++){
            if(i==4){
                word1[i]=hidelet;
            }
            if(i==7){
                word1[i]='-';
            }
            if(i==9){
                word1[i]='-';
            }
            cout<<word1[i]<<" ";
        }
        cout<<endl;
        cout<<"|                                                   |"<<endl;
        cout<<"----------------------------------------------------"<<endl;
    }
    tries = 4;
    cout<<"Enter the hidden word "<<endl;
    while(true){
        tries--;
        cin>>hidelet;
        if(hidelet==    obtainword1[7]){
            break;
        }
        if(tries==3){
            cout<<"------------------------------------------"<<endl;
            cout<<"|            Hangman is Hanged           |"<<endl;
            cout<<"------------------------------------------"<<endl;
            cout<<"|                  |                     |"<<endl;
            cout<<"|                  |    uhHH             |"<<endl;
            cout<<"|                  O                     |"<<endl;
            cout<<"|                 /|\\                    |"<<endl;
            cout<<"|                  |                     |"<<endl;
            cout<<"|                 / \\                    |"<<endl;
            cout<<"|                                        |"<<endl;
            cout<<"------------------------------------------"<<endl;
            cout<<"Please enter the right letter"<<endl;
        }
        if(tries==2){
            cout<<"------------------------------------------"<<endl;
            cout<<"|          Hangman is in Danger          |"<<endl;
            cout<<"------------------------------------------"<<endl;
            cout<<"|                  |     ahh             |"<<endl;
            cout<<"|                  O  aAAhHH             |"<<endl;
            cout<<"|                 /|\\                    |"<<endl;
            cout<<"|                  |                     |"<<endl;
            cout<<"|                 / \\                    |"<<endl;
            cout<<"|                                        |"<<endl;
            cout<<"|                                        |"<<endl;
            cout<<"------------------------------------------"<<endl;
            cout<<"Please enter the right letter"<<endl;
        }
        if(tries==1){
            cout<<"############## GAME OVER #################"<<endl;
            cout<<"------------------------------------------"<<endl;
            cout<<"|             Hangman is Died            |"<<endl;
            cout<<"------------------------------------------"<<endl;
            cout<<"|                  |   ~                 |"<<endl;
            cout<<"|                  O ~                    |"<<endl;
            cout<<"|                 /|\\                    |"<<endl;
            cout<<"|                  |                     |"<<endl;
            cout<<"|                 / \\                    |"<<endl;
            cout<<"|                                        |"<<endl;
            cout<<"|                                        |"<<endl;
            cout<<"------------------------------------------"<<endl;
            cout<<endl; cout<<endl; cout<<endl;
            menuworking();
        }
    }
    
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    
//if 7 letter done
    if(hidelet==    obtainword1[7]){
        cout<<"=================== HangMan Game ==================="<<endl;
        cout<<"----------------------------------------------------"<<endl;
        cout<<"|                      Hangman                      |"<<endl;
        cout<<"----------------------------------------------------"<<endl;
        cout<<"|                         |                         |"<<endl;
        cout<<"|                         |                         |"<<endl;
        cout<<"|                         |                         |"<<endl;
        cout<<"|                         O                         |"<<endl;
        cout<<"|                        /|\\                        |"<<endl;
        cout<<"|                         |                         |"<<endl;
        cout<<"|                        / \\                        |"<<endl;
        cout<<"----------------------------------------------------"<<endl;
        cout<<"---------------- Select and Type One ---------------"<<endl;
        cout<<"                      ";
        cout<<static_cast<char>(toupper(    obtainword1[1]))<<" ";
        cout<<static_cast<char>(toupper(    obtainword1[9]))<<" ";
        cout<<endl;
        cout<<"----------------------------------------------------"<<endl;
        cout<<"|                                                   |"<<endl;
        cout<<"                    ";
        for(int i = 0 ; i<=strlen(word1) ; i++){
            if(i==7){
                word1[i]=hidelet;
            }
            if(i==9){
                word1[i]='-';
            }
            cout<<word1[i]<<" ";
        }
        cout<<endl;
        cout<<"|                                                   |"<<endl;
        cout<<"----------------------------------------------------"<<endl;
    }
    tries = 4;
    cout<<"Enter the hidden word "<<endl;
    while(true){
        tries--;
        cin>>hidelet;
        if(hidelet==    obtainword1[9]){
            break;
        }
        if(tries==3){
            cout<<"------------------------------------------"<<endl;
            cout<<"|            Hangman is Hanged           |"<<endl;
            cout<<"------------------------------------------"<<endl;
            cout<<"|                  |                     |"<<endl;
            cout<<"|                  |    uhHH             |"<<endl;
            cout<<"|                  O                     |"<<endl;
            cout<<"|                 /|\\                    |"<<endl;
            cout<<"|                  |                     |"<<endl;
            cout<<"|                 / \\                    |"<<endl;
            cout<<"|                                        |"<<endl;
            cout<<"------------------------------------------"<<endl;
            cout<<"Please enter the right letter"<<endl;
        }
        if(tries==2){
            cout<<"------------------------------------------"<<endl;
            cout<<"|          Hangman is in Danger          |"<<endl;
            cout<<"------------------------------------------"<<endl;
            cout<<"|                  |     ahh             |"<<endl;
            cout<<"|                  O  aAAhHH             |"<<endl;
            cout<<"|                 /|\\                    |"<<endl;
            cout<<"|                  |                     |"<<endl;
            cout<<"|                 / \\                    |"<<endl;
            cout<<"|                                        |"<<endl;
            cout<<"|                                        |"<<endl;
            cout<<"------------------------------------------"<<endl;
            cout<<"Please enter the right letter"<<endl;
        }
        if(tries==1){
            cout<<"############## GAME OVER #################"<<endl;
            cout<<"------------------------------------------"<<endl;
            cout<<"|             Hangman is Died            |"<<endl;
            cout<<"------------------------------------------"<<endl;
            cout<<"|                  |   ~                 |"<<endl;
            cout<<"|                  O ~                    |"<<endl;
            cout<<"|                 /|\\                    |"<<endl;
            cout<<"|                  |                     |"<<endl;
            cout<<"|                 / \\                    |"<<endl;
            cout<<"|                                        |"<<endl;
            cout<<"|                                        |"<<endl;
            cout<<"------------------------------------------"<<endl;
            cout<<endl; cout<<endl; cout<<endl;
            menuworking();
        }
    }
    
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    
//if letter 9 done
    if(hidelet==    obtainword1[9]){
        file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Hangman Game/Hangman Game/assets/name.txt",ios::out|ios::trunc);
        file.close();
        cout<<"#            \\/  --- | |  \\  /\\  / | |\\ |          #"<<endl;
        cout<<"#             |  |_| |_|   \\/  \\/  | | \\|          #"<<endl;
        cout<<"=================== HangMan Game ==================="<<endl;
        cout<<"----------------------------------------------------"<<endl;
        cout<<"|                      Hangman                      |"<<endl;
        cout<<"----------------------------------------------------"<<endl;
        cout<<"|                         |                         |"<<endl;
        cout<<"|                         |                         |"<<endl;
        cout<<"|                         |                         |"<<endl;
        cout<<"|                         O                         |"<<endl;
        cout<<"|                        /|\\                        |"<<endl;
        cout<<"|                         |                         |"<<endl;
        cout<<"|                        / \\                        |"<<endl;
        cout<<"----------------------------------------------------"<<endl;
        cout<<"---------------- Select and Type One ---------------"<<endl;
        cout<<"                      ";
        cout<<endl;
        cout<<"----------------------------------------------------"<<endl;
        cout<<"|                                                   |"<<endl;
        cout<<"                    ";
        for(int i = 0 ; i<=strlen(word1) ; i++){
            if(i==9){
                word1[i]=hidelet;
            }
            cout<<word1[i]<<" ";
        }
        cout<<endl;
        cout<<"|                                                   |"<<endl;
        cout<<"----------------------------------------------------"<<endl;
        cout<<endl; cout<<endl; cout<<endl;
        menuworking();
    }
}

void newgamemedium(string w){
    char word2[9],
        obtainword2[9];
    class data word;
    w = word.getwordmedium();
    for(int i = 0 ; i < w.size() ; i++){
            obtainword2[i]=word2[i]=w.at(i);
    }
    file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Hangman Game/Hangman Game/assets/name.txt",ios::out|ios::trunc);
    file.close();
    file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Hangman Game/Hangman Game/assets/name.txt",ios::out);
    file<<w;
    file.close();
//Start
    cout<<endl;
    cout<<"=================== HangMan Game ==================="<<endl;
    cout<<"----------------------------------------------------"<<endl;
    cout<<"|                      Hangman                      |"<<endl;
    cout<<"----------------------------------------------------"<<endl;
    cout<<"|                         |                         |"<<endl;
    cout<<"|                         |                         |"<<endl;
    cout<<"|                         |                         |"<<endl;
    cout<<"|                         O                         |"<<endl;
    cout<<"|                        /|\\                        |"<<endl;
    cout<<"|                         |                         |"<<endl;
    cout<<"|                        / \\                        |"<<endl;
    cout<<"----------------------------------------------------"<<endl;
    cout<<"---------------- Select and Type One ---------------"<<endl;
    cout<<"                      ";
    cout<<static_cast<char>(toupper(    obtainword2[1]))<<" ";
    cout<<static_cast<char>(toupper(    obtainword2[7]))<<" ";
    cout<<static_cast<char>(toupper(    obtainword2[3]))<<" ";
    cout<<static_cast<char>(toupper(    obtainword2[4]))<<" ";
    cout<<endl;
    cout<<"----------------------------------------------------"<<endl;
    cout<<"|                                                   |"<<endl;
    cout<<"                 ";
    for(int i = 0 ; i<=strlen(word2) ; i++){
        if(i==1){
            word2[i]='-';
        }
        if(i==3){
            word2[i]='-';
        }
        if(i==4){
            word2[i]='-';
        }
        if(i==7){
            word2[i]='-';
        }
        cout<<word2[i]<<" ";
    }
    cout<<endl;
    cout<<"|                                                   |"<<endl;
    cout<<"----------------------------------------------------"<<endl;
    cout<<"Enter the hidden word "<<endl;
    while(true){
        tries--;
        cin>>hidelet;
        if(hidelet==    obtainword2[1]){
            break;
        }
        if(tries==3){
            cout<<"------------------------------------------"<<endl;
            cout<<"|            Hangman is Hanged           |"<<endl;
            cout<<"------------------------------------------"<<endl;
            cout<<"|                  |                     |"<<endl;
            cout<<"|                  |    uhHH             |"<<endl;
            cout<<"|                  O                     |"<<endl;
            cout<<"|                 /|\\                    |"<<endl;
            cout<<"|                  |                     |"<<endl;
            cout<<"|                 / \\                    |"<<endl;
            cout<<"|                                        |"<<endl;
            cout<<"------------------------------------------"<<endl;
            cout<<"Please enter the right letter"<<endl;
        }
        if(tries==2){
            cout<<"------------------------------------------"<<endl;
            cout<<"|          Hangman is in Danger          |"<<endl;
            cout<<"------------------------------------------"<<endl;
            cout<<"|                  |     ahh             |"<<endl;
            cout<<"|                  O  aAAhHH             |"<<endl;
            cout<<"|                 /|\\                    |"<<endl;
            cout<<"|                  |                     |"<<endl;
            cout<<"|                 / \\                    |"<<endl;
            cout<<"|                                        |"<<endl;
            cout<<"|                                        |"<<endl;
            cout<<"------------------------------------------"<<endl;
            cout<<"Please enter the right letter"<<endl;
        }
        if(tries==1){
            cout<<"############## GAME OVER #################"<<endl;
            cout<<"------------------------------------------"<<endl;
            cout<<"|             Hangman is Died            |"<<endl;
            cout<<"------------------------------------------"<<endl;
            cout<<"|                  |   ~                 |"<<endl;
            cout<<"|                  O ~                    |"<<endl;
            cout<<"|                 /|\\                    |"<<endl;
            cout<<"|                  |                     |"<<endl;
            cout<<"|                 / \\                    |"<<endl;
            cout<<"|                                        |"<<endl;
            cout<<"|                                        |"<<endl;
            cout<<"------------------------------------------"<<endl;
            cout<<endl; cout<<endl; cout<<endl;
            menuworking();
        }
    }
    
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    
//if 1 letter done
    if(hidelet==    obtainword2[1]){
        cout<<"=================== HangMan Game ==================="<<endl;
        cout<<"----------------------------------------------------"<<endl;
        cout<<"|                      Hangman                      |"<<endl;
        cout<<"----------------------------------------------------"<<endl;
        cout<<"|                         |                         |"<<endl;
        cout<<"|                         |                         |"<<endl;
        cout<<"|                         |                         |"<<endl;
        cout<<"|                         O                         |"<<endl;
        cout<<"|                        /|\\                        |"<<endl;
        cout<<"|                         |                         |"<<endl;
        cout<<"|                        / \\                        |"<<endl;
        cout<<"----------------------------------------------------"<<endl;
        cout<<"---------------- Select and Type One ---------------"<<endl;
        cout<<"                      ";
        cout<<static_cast<char>(toupper(    obtainword2[7]))<<" ";
        cout<<static_cast<char>(toupper(    obtainword2[3]))<<" ";
        cout<<static_cast<char>(toupper(    obtainword2[4]))<<" ";
        cout<<endl;
        cout<<"----------------------------------------------------"<<endl;
        cout<<"|                                                   |"<<endl;
        cout<<"                    ";
        for(int i = 0 ; i<=strlen(word2) ; i++){
            if(i==1){
                word2[i]=hidelet;
            }
            if(i==3){
                word2[i]='-';
            }
            if(i==4){
                word2[i]='-';
            }
            if(i==7){
                word2[i]='-';
            }
            cout<<word2[i]<<" ";
        }
        cout<<endl;
        cout<<"|                                                   |"<<endl;
        cout<<"----------------------------------------------------"<<endl;
    }
    tries = 4;
    cout<<"Enter the hidden word "<<endl;
    while(true){
        tries--;
        cin>>hidelet;
        if(hidelet==    obtainword2[3]){
            break;
        }
        if(tries==3){
            cout<<"------------------------------------------"<<endl;
            cout<<"|            Hangman is Hanged           |"<<endl;
            cout<<"------------------------------------------"<<endl;
            cout<<"|                  |                     |"<<endl;
            cout<<"|                  |    uhHH             |"<<endl;
            cout<<"|                  O                     |"<<endl;
            cout<<"|                 /|\\                    |"<<endl;
            cout<<"|                  |                     |"<<endl;
            cout<<"|                 / \\                    |"<<endl;
            cout<<"|                                        |"<<endl;
            cout<<"------------------------------------------"<<endl;
            cout<<"Please enter the right letter"<<endl;
        }
        if(tries==2){
            cout<<"------------------------------------------"<<endl;
            cout<<"|          Hangman is in Danger          |"<<endl;
            cout<<"------------------------------------------"<<endl;
            cout<<"|                  |     ahh             |"<<endl;
            cout<<"|                  O  aAAhHH             |"<<endl;
            cout<<"|                 /|\\                    |"<<endl;
            cout<<"|                  |                     |"<<endl;
            cout<<"|                 / \\                    |"<<endl;
            cout<<"|                                        |"<<endl;
            cout<<"|                                        |"<<endl;
            cout<<"------------------------------------------"<<endl;
            cout<<"Please enter the right letter"<<endl;
        }
        if(tries==1){
            cout<<"############## GAME OVER #################"<<endl;
            cout<<"------------------------------------------"<<endl;
            cout<<"|             Hangman is Died            |"<<endl;
            cout<<"------------------------------------------"<<endl;
            cout<<"|                  |   ~                 |"<<endl;
            cout<<"|                  O ~                    |"<<endl;
            cout<<"|                 /|\\                    |"<<endl;
            cout<<"|                  |                     |"<<endl;
            cout<<"|                 / \\                    |"<<endl;
            cout<<"|                                        |"<<endl;
            cout<<"|                                        |"<<endl;
            cout<<"------------------------------------------"<<endl;
            cout<<endl; cout<<endl; cout<<endl;
            menuworking();
        }
    }
    
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    
//if 3 letter done
    if(hidelet==    obtainword2[3]){
        cout<<"=================== HangMan Game ==================="<<endl;
        cout<<"----------------------------------------------------"<<endl;
        cout<<"|                      Hangman                      |"<<endl;
        cout<<"----------------------------------------------------"<<endl;
        cout<<"|                         |                         |"<<endl;
        cout<<"|                         |                         |"<<endl;
        cout<<"|                         |                         |"<<endl;
        cout<<"|                         O                         |"<<endl;
        cout<<"|                        /|\\                        |"<<endl;
        cout<<"|                         |                         |"<<endl;
        cout<<"|                        / \\                        |"<<endl;
        cout<<"----------------------------------------------------"<<endl;
        cout<<"---------------- Select and Type One ---------------"<<endl;
        cout<<"                      ";
        cout<<static_cast<char>(toupper(    obtainword2[7]))<<" ";
        cout<<static_cast<char>(toupper(    obtainword2[4]))<<" ";
        cout<<endl;
        cout<<"----------------------------------------------------"<<endl;
        cout<<"|                                                   |"<<endl;
        cout<<"                    ";
        for(int i = 0 ; i<=strlen(word2) ; i++){
            if(i==3){
                word2[i]=hidelet;
            }
            if(i==4){
                word2[i]='-';
            }
            if(i==7){
                word2[i]='-';
            }
            cout<<word2[i]<<" ";
        }
        cout<<endl;
        cout<<"|                                                   |"<<endl;
        cout<<"----------------------------------------------------"<<endl;
    }
    tries = 4;
    cout<<"Enter the hidden word "<<endl;
    while(true){
        tries--;
        cin>>hidelet;
        if(hidelet==    obtainword2[4]){
            break;
        }
        if(tries==3){
            cout<<"------------------------------------------"<<endl;
            cout<<"|            Hangman is Hanged           |"<<endl;
            cout<<"------------------------------------------"<<endl;
            cout<<"|                  |                     |"<<endl;
            cout<<"|                  |    uhHH             |"<<endl;
            cout<<"|                  O                     |"<<endl;
            cout<<"|                 /|\\                    |"<<endl;
            cout<<"|                  |                     |"<<endl;
            cout<<"|                 / \\                    |"<<endl;
            cout<<"|                                        |"<<endl;
            cout<<"------------------------------------------"<<endl;
            cout<<"Please enter the right letter"<<endl;
        }
        if(tries==2){
            cout<<"------------------------------------------"<<endl;
            cout<<"|          Hangman is in Danger          |"<<endl;
            cout<<"------------------------------------------"<<endl;
            cout<<"|                  |     ahh             |"<<endl;
            cout<<"|                  O  aAAhHH             |"<<endl;
            cout<<"|                 /|\\                    |"<<endl;
            cout<<"|                  |                     |"<<endl;
            cout<<"|                 / \\                    |"<<endl;
            cout<<"|                                        |"<<endl;
            cout<<"|                                        |"<<endl;
            cout<<"------------------------------------------"<<endl;
            cout<<"Please enter the right letter"<<endl;
        }
        if(tries==1){
            cout<<"############## GAME OVER #################"<<endl;
            cout<<"------------------------------------------"<<endl;
            cout<<"|             Hangman is Died            |"<<endl;
            cout<<"------------------------------------------"<<endl;
            cout<<"|                  |   ~                 |"<<endl;
            cout<<"|                  O ~                    |"<<endl;
            cout<<"|                 /|\\                    |"<<endl;
            cout<<"|                  |                     |"<<endl;
            cout<<"|                 / \\                    |"<<endl;
            cout<<"|                                        |"<<endl;
            cout<<"|                                        |"<<endl;
            cout<<"------------------------------------------"<<endl;
            cout<<endl; cout<<endl; cout<<endl;
            menuworking();
        }
    }
    
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    
//if 4 letter done
    if(hidelet==    obtainword2[4]){
        cout<<"=================== HangMan Game ==================="<<endl;
        cout<<"----------------------------------------------------"<<endl;
        cout<<"|                      Hangman                      |"<<endl;
        cout<<"----------------------------------------------------"<<endl;
        cout<<"|                         |                         |"<<endl;
        cout<<"|                         |                         |"<<endl;
        cout<<"|                         |                         |"<<endl;
        cout<<"|                         O                         |"<<endl;
        cout<<"|                        /|\\                        |"<<endl;
        cout<<"|                         |                         |"<<endl;
        cout<<"|                        / \\                        |"<<endl;
        cout<<"----------------------------------------------------"<<endl;
        cout<<"---------------- Select and Type One ---------------"<<endl;
        cout<<"                      ";
        cout<<static_cast<char>(toupper(    obtainword2[7]))<<" ";
        cout<<static_cast<char>(toupper(    obtainword2[4]))<<" ";
        cout<<endl;
        cout<<"----------------------------------------------------"<<endl;
        cout<<"|                                                   |"<<endl;
        cout<<"                    ";
        for(int i = 0 ; i<=strlen(word2) ; i++){
            if(i==4){
                word2[i]=hidelet;
            }
            if(i==7){
                word2[i]='-';
            }
            cout<<word2[i]<<" ";
        }
        cout<<endl;
        cout<<"|                                                   |"<<endl;
        cout<<"----------------------------------------------------"<<endl;
    }
    tries = 4;
    cout<<"Enter the hidden word "<<endl;
    while(true){
        tries--;
        cin>>hidelet;
        if(hidelet==    obtainword2[7]){
            break;
        }
        if(tries==3){
            cout<<"------------------------------------------"<<endl;
            cout<<"|            Hangman is Hanged           |"<<endl;
            cout<<"------------------------------------------"<<endl;
            cout<<"|                  |                     |"<<endl;
            cout<<"|                  |    uhHH             |"<<endl;
            cout<<"|                  O                     |"<<endl;
            cout<<"|                 /|\\                    |"<<endl;
            cout<<"|                  |                     |"<<endl;
            cout<<"|                 / \\                    |"<<endl;
            cout<<"|                                        |"<<endl;
            cout<<"------------------------------------------"<<endl;
            cout<<"Please enter the right letter"<<endl;
        }
        if(tries==2){
            cout<<"------------------------------------------"<<endl;
            cout<<"|          Hangman is in Danger          |"<<endl;
            cout<<"------------------------------------------"<<endl;
            cout<<"|                  |     ahh             |"<<endl;
            cout<<"|                  O  aAAhHH             |"<<endl;
            cout<<"|                 /|\\                    |"<<endl;
            cout<<"|                  |                     |"<<endl;
            cout<<"|                 / \\                    |"<<endl;
            cout<<"|                                        |"<<endl;
            cout<<"|                                        |"<<endl;
            cout<<"------------------------------------------"<<endl;
            cout<<"Please enter the right letter"<<endl;
        }
        if(tries==1){
            cout<<"############## GAME OVER #################"<<endl;
            cout<<"------------------------------------------"<<endl;
            cout<<"|             Hangman is Died            |"<<endl;
            cout<<"------------------------------------------"<<endl;
            cout<<"|                  |   ~                 |"<<endl;
            cout<<"|                  O ~                    |"<<endl;
            cout<<"|                 /|\\                    |"<<endl;
            cout<<"|                  |                     |"<<endl;
            cout<<"|                 / \\                    |"<<endl;
            cout<<"|                                        |"<<endl;
            cout<<"|                                        |"<<endl;
            cout<<"------------------------------------------"<<endl;
            cout<<endl; cout<<endl; cout<<endl;
            menuworking();
        }
    }
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    
//if letter 7 done
    if(hidelet==obtainword2[7]){
        file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Hangman Game/Hangman Game/assets/name.txt",ios::out|ios::trunc);
        file.close();
        cout<<"#            \\/  --- | |  \\  /\\  / | |\\ |          #"<<endl;
        cout<<"#             |  |_| |_|   \\/  \\/  | | \\|          #"<<endl;
        cout<<"=================== HangMan Game ==================="<<endl;
        cout<<"----------------------------------------------------"<<endl;
        cout<<"|                      Hangman                      |"<<endl;
        cout<<"----------------------------------------------------"<<endl;
        cout<<"|                         |                         |"<<endl;
        cout<<"|                         |                         |"<<endl;
        cout<<"|                         |                         |"<<endl;
        cout<<"|                         O                         |"<<endl;
        cout<<"|                        /|\\                        |"<<endl;
        cout<<"|                         |                         |"<<endl;
        cout<<"|                        / \\                        |"<<endl;
        cout<<"----------------------------------------------------"<<endl;
        cout<<"---------------- Select and Type One ---------------"<<endl;
        cout<<"                      ";
        cout<<endl;
        cout<<"----------------------------------------------------"<<endl;
        cout<<"|                                                   |"<<endl;
        cout<<"                    ";
        for(int i = 0 ; i<=strlen(word2) ; i++){
            if(i==7){
                word2[i]=hidelet;
            }
            cout<<word2[i]<<" ";
        }
        cout<<endl;
        cout<<"|                                                   |"<<endl;
        cout<<"----------------------------------------------------"<<endl;
        cout<<endl; cout<<endl; cout<<endl;
        menuworking();
    }
}

void newgameeasy(string w){
    char word3[8],
    obtainword3[8];
    class data word1;
    w=word1.getwordeasy();
    for(int i = 0 ; i < w.size() ; i++){
        obtainword3[i]=word3[i]=w.at(i);
    }
    file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Hangman Game/Hangman Game/assets/name.txt",ios::out|ios::trunc);
    file.close();
    file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Hangman Game/Hangman Game/assets/name.txt",ios::out);
    file<<w;
    file.close();
//Start
    cout<<endl;
    cout<<"=================== HangMan Game ==================="<<endl;
    cout<<"----------------------------------------------------"<<endl;
    cout<<"|                      Hangman                      |"<<endl;
    cout<<"----------------------------------------------------"<<endl;
    cout<<"|                         |                         |"<<endl;
    cout<<"|                         |                         |"<<endl;
    cout<<"|                         |                         |"<<endl;
    cout<<"|                         O                         |"<<endl;
    cout<<"|                        /|\\                        |"<<endl;
    cout<<"|                         |                         |"<<endl;
    cout<<"|                        / \\                        |"<<endl;
    cout<<"----------------------------------------------------"<<endl;
    cout<<"---------------- Select and Type One ---------------"<<endl;
    cout<<"                      ";
    cout<<static_cast<char>(toupper(obtainword3[1]))<<" ";
    cout<<static_cast<char>(toupper(obtainword3[3]))<<" ";
    cout<<static_cast<char>(toupper(obtainword3[4]))<<" ";
    cout<<endl;
    cout<<"----------------------------------------------------"<<endl;
    cout<<"|                                                   |"<<endl;
    cout<<"                  ";
    for(int i = 0 ; i <= strlen(word3) ; i++){
        if(i==1){
            word3[i]='-';
        }
        if(i==3){
            word3[i]='-';
        }
        if(i==4){
            word3[i]='-';
        }
        cout<<word3[i]<<" ";
    }
    cout<<endl;
    cout<<"|                                                   |"<<endl;
    cout<<"----------------------------------------------------"<<endl;
    cout<<"Enter the hidden word "<<endl;
    while(true){
        tries--;
        cin>>hidelet;
        if(hidelet==obtainword3[1]){
            break;
        }
        if(tries==3){
            cout<<"------------------------------------------"<<endl;
            cout<<"|            Hangman is Hanged           |"<<endl;
            cout<<"------------------------------------------"<<endl;
            cout<<"|                  |                     |"<<endl;
            cout<<"|                  |    uhHH             |"<<endl;
            cout<<"|                  O                     |"<<endl;
            cout<<"|                 /|\\                    |"<<endl;
            cout<<"|                  |                     |"<<endl;
            cout<<"|                 / \\                    |"<<endl;
            cout<<"|                                        |"<<endl;
            cout<<"------------------------------------------"<<endl;
            cout<<"Please enter the right letter"<<endl;
        }
        if(tries==2){
            cout<<"------------------------------------------"<<endl;
            cout<<"|          Hangman is in Danger          |"<<endl;
            cout<<"------------------------------------------"<<endl;
            cout<<"|                  |     ahh             |"<<endl;
            cout<<"|                  O  aAAhHH             |"<<endl;
            cout<<"|                 /|\\                    |"<<endl;
            cout<<"|                  |                     |"<<endl;
            cout<<"|                 / \\                    |"<<endl;
            cout<<"|                                        |"<<endl;
            cout<<"|                                        |"<<endl;
            cout<<"------------------------------------------"<<endl;
            cout<<"Please enter the right letter"<<endl;
        }
        if(tries==1){
            cout<<"############## GAME OVER #################"<<endl;
            cout<<"------------------------------------------"<<endl;
            cout<<"|             Hangman is Died            |"<<endl;
            cout<<"------------------------------------------"<<endl;
            cout<<"|                  |   ~                 |"<<endl;
            cout<<"|                  O ~                    |"<<endl;
            cout<<"|                 /|\\                    |"<<endl;
            cout<<"|                  |                     |"<<endl;
            cout<<"|                 / \\                    |"<<endl;
            cout<<"|                                        |"<<endl;
            cout<<"|                                        |"<<endl;
            cout<<"------------------------------------------"<<endl;
            menuworking();
        }
    }
    
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    
//if 1 letter done
    if(hidelet==obtainword3[1]){
        cout<<"=================== HangMan Game ==================="<<endl;
        cout<<"----------------------------------------------------"<<endl;
        cout<<"|                      Hangman                      |"<<endl;
        cout<<"----------------------------------------------------"<<endl;
        cout<<"|                         |                         |"<<endl;
        cout<<"|                         |                         |"<<endl;
        cout<<"|                         |                         |"<<endl;
        cout<<"|                         O                         |"<<endl;
        cout<<"|                        /|\\                        |"<<endl;
        cout<<"|                         |                         |"<<endl;
        cout<<"|                        / \\                        |"<<endl;
        cout<<"----------------------------------------------------"<<endl;
        cout<<"---------------- Select and Type One ---------------"<<endl;
        cout<<"                      ";
        cout<<static_cast<char>(toupper(obtainword3[3]))<<" ";
        cout<<static_cast<char>(toupper(obtainword3[4]))<<" ";
        cout<<endl;
        cout<<"----------------------------------------------------"<<endl;
        cout<<"|                                                   |"<<endl;
        cout<<"                    ";
        for(int i = 0 ; i<=strlen(word3) ; i++){
            if(i==1){
                word3[i]=hidelet;
            }
            if(i==3){
                word3[i]='-';
            }
            if(i==4){
                word3[i]='-';
            }
            cout<<word3[i]<<" ";
        }
        cout<<endl;
        cout<<"|                                                   |"<<endl;
        cout<<"----------------------------------------------------"<<endl;
    }
    tries = 4;
    cout<<"Enter the hidden word "<<endl;
    while(true){
        tries--;
        cin>>hidelet;
        if(hidelet==obtainword3[3]){
            break;
        }
        if(tries==3){
            cout<<"------------------------------------------"<<endl;
            cout<<"|            Hangman is Hanged           |"<<endl;
            cout<<"------------------------------------------"<<endl;
            cout<<"|                  |                     |"<<endl;
            cout<<"|                  |    uhHH             |"<<endl;
            cout<<"|                  O                     |"<<endl;
            cout<<"|                 /|\\                    |"<<endl;
            cout<<"|                  |                     |"<<endl;
            cout<<"|                 / \\                    |"<<endl;
            cout<<"|                                        |"<<endl;
            cout<<"------------------------------------------"<<endl;
            cout<<"Please enter the right letter"<<endl;
        }
        if(tries==2){
            cout<<"------------------------------------------"<<endl;
            cout<<"|          Hangman is in Danger          |"<<endl;
            cout<<"------------------------------------------"<<endl;
            cout<<"|                  |     ahh             |"<<endl;
            cout<<"|                  O  aAAhHH             |"<<endl;
            cout<<"|                 /|\\                    |"<<endl;
            cout<<"|                  |                     |"<<endl;
            cout<<"|                 / \\                    |"<<endl;
            cout<<"|                                        |"<<endl;
            cout<<"|                                        |"<<endl;
            cout<<"------------------------------------------"<<endl;
            cout<<"Please enter the right letter"<<endl;
        }
        if(tries==1){
            cout<<"############## GAME OVER #################"<<endl;
            cout<<"------------------------------------------"<<endl;
            cout<<"|             Hangman is Died            |"<<endl;
            cout<<"------------------------------------------"<<endl;
            cout<<"|                  |   ~                 |"<<endl;
            cout<<"|                  O ~                    |"<<endl;
            cout<<"|                 /|\\                    |"<<endl;
            cout<<"|                  |                     |"<<endl;
            cout<<"|                 / \\                    |"<<endl;
            cout<<"|                                        |"<<endl;
            cout<<"|                                        |"<<endl;
            cout<<"------------------------------------------"<<endl;
            menuworking();
        }
    }
    
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    
//if 3 letter done
    if(hidelet==obtainword3[3]){
        cout<<"=================== HangMan Game ==================="<<endl;
        cout<<"----------------------------------------------------"<<endl;
        cout<<"|                      Hangman                      |"<<endl;
        cout<<"----------------------------------------------------"<<endl;
        cout<<"|                         |                         |"<<endl;
        cout<<"|                         |                         |"<<endl;
        cout<<"|                         |                         |"<<endl;
        cout<<"|                         O                         |"<<endl;
        cout<<"|                        /|\\                        |"<<endl;
        cout<<"|                         |                         |"<<endl;
        cout<<"|                        / \\                        |"<<endl;
        cout<<"----------------------------------------------------"<<endl;
        cout<<"---------------- Select and Type One ---------------"<<endl;
        cout<<"                      ";
        cout<<static_cast<char>(toupper(obtainword3[4]))<<" ";
        cout<<static_cast<char>(toupper(obtainword3[3]))<<" ";
        cout<<endl;
        cout<<"----------------------------------------------------"<<endl;
        cout<<"|                                                   |"<<endl;
        cout<<"                    ";
        for(int i = 0 ; i<=strlen(word3) ; i++){
            if(i==3){
                word3[i]=hidelet;
            }
            if(i==4){
                word3[i]='-';
            }
            cout<<word3[i]<<" ";
        }
        cout<<endl;
        cout<<"|                                                   |"<<endl;
        cout<<"----------------------------------------------------"<<endl;
    }
    tries = 4;
    cout<<"Enter the hidden word "<<endl;
    while(true){
        tries--;
        cin>>hidelet;
        if(hidelet==obtainword3[4]){
            break;
        }
        if(tries==3){
            cout<<"------------------------------------------"<<endl;
            cout<<"|            Hangman is Hanged           |"<<endl;
            cout<<"------------------------------------------"<<endl;
            cout<<"|                  |                     |"<<endl;
            cout<<"|                  |    uhHH             |"<<endl;
            cout<<"|                  O                     |"<<endl;
            cout<<"|                 /|\\                    |"<<endl;
            cout<<"|                  |                     |"<<endl;
            cout<<"|                 / \\                    |"<<endl;
            cout<<"|                                        |"<<endl;
            cout<<"------------------------------------------"<<endl;
            cout<<"Please enter the right letter"<<endl;
        }
        if(tries==2){
            cout<<"------------------------------------------"<<endl;
            cout<<"|          Hangman is in Danger          |"<<endl;
            cout<<"------------------------------------------"<<endl;
            cout<<"|                  |     ahh             |"<<endl;
            cout<<"|                  O  aAAhHH             |"<<endl;
            cout<<"|                 /|\\                    |"<<endl;
            cout<<"|                  |                     |"<<endl;
            cout<<"|                 / \\                    |"<<endl;
            cout<<"|                                        |"<<endl;
            cout<<"|                                        |"<<endl;
            cout<<"------------------------------------------"<<endl;
            cout<<"Please enter the right letter"<<endl;
        }
        if(tries==1){
            cout<<"############## GAME OVER #################"<<endl;
            cout<<"------------------------------------------"<<endl;
            cout<<"|             Hangman is Died            |"<<endl;
            cout<<"------------------------------------------"<<endl;
            cout<<"|                  |   ~                 |"<<endl;
            cout<<"|                  O ~                    |"<<endl;
            cout<<"|                 /|\\                    |"<<endl;
            cout<<"|                  |                     |"<<endl;
            cout<<"|                 / \\                    |"<<endl;
            cout<<"|                                        |"<<endl;
            cout<<"|                                        |"<<endl;
            cout<<"------------------------------------------"<<endl;
            menuworking();
        }
    }
    
    
//if letter 9 done
    if(hidelet==obtainword3[4]){
        file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Hangman Game/Hangman Game/assets/name.txt",ios::out|ios::trunc);
        file.close();
        cout<<"#            \\/  --- | |  \\  /\\  / | |\\ |          #"<<endl;
        cout<<"#             |  |_| |_|   \\/  \\/  | | \\|          #"<<endl;
        cout<<"=================== HangMan Game ==================="<<endl;
        cout<<"----------------------------------------------------"<<endl;
        cout<<"|                      Hangman                      |"<<endl;
        cout<<"----------------------------------------------------"<<endl;
        cout<<"|                         |                         |"<<endl;
        cout<<"|                         |                         |"<<endl;
        cout<<"|                         |                         |"<<endl;
        cout<<"|                         O                         |"<<endl;
        cout<<"|                        /|\\                        |"<<endl;
        cout<<"|                         |                         |"<<endl;
        cout<<"|                        / \\                        |"<<endl;
        cout<<"----------------------------------------------------"<<endl;
        cout<<"---------------- Select and Type One ---------------"<<endl;
        cout<<"                      ";
        cout<<endl;
        cout<<"----------------------------------------------------"<<endl;
        cout<<"|                                                   |"<<endl;
        cout<<"                    ";
        for(int i = 0 ; i<=strlen(word3) ; i++){
            if(i==4){
                word3[i]=hidelet;
            }
            cout<<word3[i]<<" ";
        }
        cout<<endl;
        cout<<"|                                                   |"<<endl;
        cout<<"----------------------------------------------------"<<endl;
        menuworking();
    }
}

void contioneogame(){
    string w;
    file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Hangman Game/Hangman Game/assets/name.txt",ios::in);
    while(file){
        getline(file,w);
    }
    long n = w.size();
    file.close();
    if(n==10){
        char word1[11],
            obtainword1[11];
        for(int i = 0 ; i < w.size() ; i++){
                obtainword1[i]=word1[i]=w.at(i);
        }
    //Start
        cout<<endl;
        cout<<"=================== HangMan Game ==================="<<endl;
        cout<<"----------------------------------------------------"<<endl;
        cout<<"|                      Hangman                      |"<<endl;
        cout<<"----------------------------------------------------"<<endl;
        cout<<"|                         |                         |"<<endl;
        cout<<"|                         |                         |"<<endl;
        cout<<"|                         |                         |"<<endl;
        cout<<"|                         O                         |"<<endl;
        cout<<"|                        /|\\                        |"<<endl;
        cout<<"|                         |                         |"<<endl;
        cout<<"|                        / \\                        |"<<endl;
        cout<<"----------------------------------------------------"<<endl;
        cout<<"---------------- Select and Type One ---------------"<<endl;
        cout<<"                      ";
        cout<<static_cast<char>(toupper(    obtainword1[1]))<<" ";
        cout<<static_cast<char>(toupper(    obtainword1[7]))<<" ";
        cout<<static_cast<char>(toupper(    obtainword1[3]))<<" ";
        cout<<static_cast<char>(toupper(    obtainword1[4]))<<" ";
        cout<<static_cast<char>(toupper(    obtainword1[9]))<<" ";
        cout<<endl;
        cout<<"----------------------------------------------------"<<endl;
        cout<<"|                                                   |"<<endl;
        cout<<"                 ";
        for(int i = 0 ; i<=strlen(word1) ; i++){
            if(i==1){
                word1[i]='-';
            }
            if(i==3){
                word1[i]='-';
            }
            if(i==4){
                word1[i]='-';
            }
            if(i==7){
                word1[i]='-';
            }
            if(i==9){
                word1[i]='-';
            }
            cout<<word1[i]<<" ";
        }
        cout<<endl;
        cout<<"|                                                   |"<<endl;
        cout<<"----------------------------------------------------"<<endl;
        cout<<"Enter the hidden word "<<endl;
        while(true){
            tries--;
            cin>>hidelet;
            if(hidelet==    obtainword1[1]){
                break;
            }
            if(tries==3){
                cout<<"------------------------------------------"<<endl;
                cout<<"|            Hangman is Hanged           |"<<endl;
                cout<<"------------------------------------------"<<endl;
                cout<<"|                  |                     |"<<endl;
                cout<<"|                  |    uhHH             |"<<endl;
                cout<<"|                  O                     |"<<endl;
                cout<<"|                 /|\\                    |"<<endl;
                cout<<"|                  |                     |"<<endl;
                cout<<"|                 / \\                    |"<<endl;
                cout<<"|                                        |"<<endl;
                cout<<"------------------------------------------"<<endl;
                cout<<"Please enter the right letter"<<endl;
            }
            if(tries==2){
                cout<<"------------------------------------------"<<endl;
                cout<<"|          Hangman is in Danger          |"<<endl;
                cout<<"------------------------------------------"<<endl;
                cout<<"|                  |     ahh             |"<<endl;
                cout<<"|                  O  aAAhHH             |"<<endl;
                cout<<"|                 /|\\                    |"<<endl;
                cout<<"|                  |                     |"<<endl;
                cout<<"|                 / \\                    |"<<endl;
                cout<<"|                                        |"<<endl;
                cout<<"|                                        |"<<endl;
                cout<<"------------------------------------------"<<endl;
                cout<<"Please enter the right letter"<<endl;
            }
            if(tries==1){
                cout<<"############## GAME OVER #################"<<endl;
                cout<<"------------------------------------------"<<endl;
                cout<<"|             Hangman is Died            |"<<endl;
                cout<<"------------------------------------------"<<endl;
                cout<<"|                  |   ~                 |"<<endl;
                cout<<"|                  O ~                    |"<<endl;
                cout<<"|                 /|\\                    |"<<endl;
                cout<<"|                  |                     |"<<endl;
                cout<<"|                 / \\                    |"<<endl;
                cout<<"|                                        |"<<endl;
                cout<<"|                                        |"<<endl;
                cout<<"------------------------------------------"<<endl;
                cout<<endl; cout<<endl; cout<<endl;
                menuworking();
            }
        }
        
        cout<<endl;
        cout<<endl;
        cout<<endl;
        cout<<endl;
        
    //if 1 letter done
        if(hidelet==    obtainword1[1]){
            cout<<"=================== HangMan Game ==================="<<endl;
            cout<<"----------------------------------------------------"<<endl;
            cout<<"|                      Hangman                      |"<<endl;
            cout<<"----------------------------------------------------"<<endl;
            cout<<"|                         |                         |"<<endl;
            cout<<"|                         |                         |"<<endl;
            cout<<"|                         |                         |"<<endl;
            cout<<"|                         O                         |"<<endl;
            cout<<"|                        /|\\                        |"<<endl;
            cout<<"|                         |                         |"<<endl;
            cout<<"|                        / \\                        |"<<endl;
            cout<<"----------------------------------------------------"<<endl;
            cout<<"---------------- Select and Type One ---------------"<<endl;
            cout<<"                      ";
            cout<<static_cast<char>(toupper(    obtainword1[7]))<<" ";
            cout<<static_cast<char>(toupper(    obtainword1[3]))<<" ";
            cout<<static_cast<char>(toupper(    obtainword1[4]))<<" ";
            cout<<static_cast<char>(toupper(    obtainword1[9]))<<" ";
            cout<<endl;
            cout<<"----------------------------------------------------"<<endl;
            cout<<"|                                                   |"<<endl;
            cout<<"                    ";
            for(int i = 0 ; i<=strlen(word1) ; i++){
                if(i==1){
                    word1[i]=hidelet;
                }
                if(i==3){
                    word1[i]='-';
                }
                if(i==4){
                    word1[i]='-';
                }
                if(i==7){
                    word1[i]='-';
                }
                if(i==9){
                    word1[i]='-';
                }
                cout<<word1[i]<<" ";
            }
            cout<<endl;
            cout<<"|                                                   |"<<endl;
            cout<<"----------------------------------------------------"<<endl;
        }
        tries = 4;
        cout<<"Enter the hidden word "<<endl;
        while(true){
            tries--;
            cin>>hidelet;
            if(hidelet==    obtainword1[3]){
                break;
            }
            if(tries==3){
                cout<<"------------------------------------------"<<endl;
                cout<<"|            Hangman is Hanged           |"<<endl;
                cout<<"------------------------------------------"<<endl;
                cout<<"|                  |                     |"<<endl;
                cout<<"|                  |    uhHH             |"<<endl;
                cout<<"|                  O                     |"<<endl;
                cout<<"|                 /|\\                    |"<<endl;
                cout<<"|                  |                     |"<<endl;
                cout<<"|                 / \\                    |"<<endl;
                cout<<"|                                        |"<<endl;
                cout<<"------------------------------------------"<<endl;
                cout<<"Please enter the right letter"<<endl;
            }
            if(tries==2){
                cout<<"------------------------------------------"<<endl;
                cout<<"|          Hangman is in Danger          |"<<endl;
                cout<<"------------------------------------------"<<endl;
                cout<<"|                  |     ahh             |"<<endl;
                cout<<"|                  O  aAAhHH             |"<<endl;
                cout<<"|                 /|\\                    |"<<endl;
                cout<<"|                  |                     |"<<endl;
                cout<<"|                 / \\                    |"<<endl;
                cout<<"|                                        |"<<endl;
                cout<<"|                                        |"<<endl;
                cout<<"------------------------------------------"<<endl;
                cout<<"Please enter the right letter"<<endl;
            }
            if(tries==1){
                cout<<"############## GAME OVER #################"<<endl;
                cout<<"------------------------------------------"<<endl;
                cout<<"|             Hangman is Died            |"<<endl;
                cout<<"------------------------------------------"<<endl;
                cout<<"|                  |   ~                 |"<<endl;
                cout<<"|                  O ~                    |"<<endl;
                cout<<"|                 /|\\                    |"<<endl;
                cout<<"|                  |                     |"<<endl;
                cout<<"|                 / \\                    |"<<endl;
                cout<<"|                                        |"<<endl;
                cout<<"|                                        |"<<endl;
                cout<<"------------------------------------------"<<endl;
                cout<<endl; cout<<endl; cout<<endl;
                menuworking();
            }
        }
        
        cout<<endl;
        cout<<endl;
        cout<<endl;
        cout<<endl;
        
    //if 3 letter done
        if(hidelet==    obtainword1[3]){
            cout<<"=================== HangMan Game ==================="<<endl;
            cout<<"----------------------------------------------------"<<endl;
            cout<<"|                      Hangman                      |"<<endl;
            cout<<"----------------------------------------------------"<<endl;
            cout<<"|                         |                         |"<<endl;
            cout<<"|                         |                         |"<<endl;
            cout<<"|                         |                         |"<<endl;
            cout<<"|                         O                         |"<<endl;
            cout<<"|                        /|\\                        |"<<endl;
            cout<<"|                         |                         |"<<endl;
            cout<<"|                        / \\                        |"<<endl;
            cout<<"----------------------------------------------------"<<endl;
            cout<<"---------------- Select and Type One ---------------"<<endl;
            cout<<"                      ";
            cout<<static_cast<char>(toupper(    obtainword1[7]))<<" ";
            cout<<static_cast<char>(toupper(    obtainword1[4]))<<" ";
            cout<<static_cast<char>(toupper(    obtainword1[9]))<<" ";
            cout<<endl;
            cout<<"----------------------------------------------------"<<endl;
            cout<<"|                                                   |"<<endl;
            cout<<"                    ";
            for(int i = 0 ; i<=strlen(word1) ; i++){
                if(i==3){
                    word1[i]=hidelet;
                }
                if(i==4){
                    word1[i]='-';
                }
                if(i==7){
                    word1[i]='-';
                }
                if(i==9){
                    word1[i]='-';
                }
                cout<<word1[i]<<" ";
            }
            cout<<endl;
            cout<<"|                                                   |"<<endl;
            cout<<"----------------------------------------------------"<<endl;
        }
        tries = 4;
        cout<<"Enter the hidden word "<<endl;
        while(true){
            tries--;
            cin>>hidelet;
            if(hidelet==    obtainword1[4]){
                break;
            }
            if(tries==3){
                cout<<"------------------------------------------"<<endl;
                cout<<"|            Hangman is Hanged           |"<<endl;
                cout<<"------------------------------------------"<<endl;
                cout<<"|                  |                     |"<<endl;
                cout<<"|                  |    uhHH             |"<<endl;
                cout<<"|                  O                     |"<<endl;
                cout<<"|                 /|\\                    |"<<endl;
                cout<<"|                  |                     |"<<endl;
                cout<<"|                 / \\                    |"<<endl;
                cout<<"|                                        |"<<endl;
                cout<<"------------------------------------------"<<endl;
                cout<<"Please enter the right letter"<<endl;
            }
            if(tries==2){
                cout<<"------------------------------------------"<<endl;
                cout<<"|          Hangman is in Danger          |"<<endl;
                cout<<"------------------------------------------"<<endl;
                cout<<"|                  |     ahh             |"<<endl;
                cout<<"|                  O  aAAhHH             |"<<endl;
                cout<<"|                 /|\\                    |"<<endl;
                cout<<"|                  |                     |"<<endl;
                cout<<"|                 / \\                    |"<<endl;
                cout<<"|                                        |"<<endl;
                cout<<"|                                        |"<<endl;
                cout<<"------------------------------------------"<<endl;
                cout<<"Please enter the right letter"<<endl;
            }
            if(tries==1){
                cout<<"############## GAME OVER #################"<<endl;
                cout<<"------------------------------------------"<<endl;
                cout<<"|             Hangman is Died            |"<<endl;
                cout<<"------------------------------------------"<<endl;
                cout<<"|                  |   ~                 |"<<endl;
                cout<<"|                  O ~                    |"<<endl;
                cout<<"|                 /|\\                    |"<<endl;
                cout<<"|                  |                     |"<<endl;
                cout<<"|                 / \\                    |"<<endl;
                cout<<"|                                        |"<<endl;
                cout<<"|                                        |"<<endl;
                cout<<"------------------------------------------"<<endl;
                cout<<endl; cout<<endl; cout<<endl;
                menuworking();
            }
        }
        
        cout<<endl;
        cout<<endl;
        cout<<endl;
        cout<<endl;
        
    //if 4 letter done
        if(hidelet==    obtainword1[4]){
            cout<<"=================== HangMan Game ==================="<<endl;
            cout<<"----------------------------------------------------"<<endl;
            cout<<"|                      Hangman                      |"<<endl;
            cout<<"----------------------------------------------------"<<endl;
            cout<<"|                         |                         |"<<endl;
            cout<<"|                         |                         |"<<endl;
            cout<<"|                         |                         |"<<endl;
            cout<<"|                         O                         |"<<endl;
            cout<<"|                        /|\\                        |"<<endl;
            cout<<"|                         |                         |"<<endl;
            cout<<"|                        / \\                        |"<<endl;
            cout<<"----------------------------------------------------"<<endl;
            cout<<"---------------- Select and Type One ---------------"<<endl;
            cout<<"                      ";
            cout<<static_cast<char>(toupper(    obtainword1[7]))<<" ";
            cout<<static_cast<char>(toupper(    obtainword1[9]))<<" ";
            cout<<endl;
            cout<<"----------------------------------------------------"<<endl;
            cout<<"|                                                   |"<<endl;
            cout<<"                    ";
            for(int i = 0 ; i<=strlen(word1) ; i++){
                if(i==4){
                    word1[i]=hidelet;
                }
                if(i==7){
                    word1[i]='-';
                }
                if(i==9){
                    word1[i]='-';
                }
                cout<<word1[i]<<" ";
            }
            cout<<endl;
            cout<<"|                                                   |"<<endl;
            cout<<"----------------------------------------------------"<<endl;
        }
        tries = 4;
        cout<<"Enter the hidden word "<<endl;
        while(true){
            tries--;
            cin>>hidelet;
            if(hidelet==    obtainword1[7]){
                break;
            }
            if(tries==3){
                cout<<"------------------------------------------"<<endl;
                cout<<"|            Hangman is Hanged           |"<<endl;
                cout<<"------------------------------------------"<<endl;
                cout<<"|                  |                     |"<<endl;
                cout<<"|                  |    uhHH             |"<<endl;
                cout<<"|                  O                     |"<<endl;
                cout<<"|                 /|\\                    |"<<endl;
                cout<<"|                  |                     |"<<endl;
                cout<<"|                 / \\                    |"<<endl;
                cout<<"|                                        |"<<endl;
                cout<<"------------------------------------------"<<endl;
                cout<<"Please enter the right letter"<<endl;
            }
            if(tries==2){
                cout<<"------------------------------------------"<<endl;
                cout<<"|          Hangman is in Danger          |"<<endl;
                cout<<"------------------------------------------"<<endl;
                cout<<"|                  |     ahh             |"<<endl;
                cout<<"|                  O  aAAhHH             |"<<endl;
                cout<<"|                 /|\\                    |"<<endl;
                cout<<"|                  |                     |"<<endl;
                cout<<"|                 / \\                    |"<<endl;
                cout<<"|                                        |"<<endl;
                cout<<"|                                        |"<<endl;
                cout<<"------------------------------------------"<<endl;
                cout<<"Please enter the right letter"<<endl;
            }
            if(tries==1){
                cout<<"############## GAME OVER #################"<<endl;
                cout<<"------------------------------------------"<<endl;
                cout<<"|             Hangman is Died            |"<<endl;
                cout<<"------------------------------------------"<<endl;
                cout<<"|                  |   ~                 |"<<endl;
                cout<<"|                  O ~                    |"<<endl;
                cout<<"|                 /|\\                    |"<<endl;
                cout<<"|                  |                     |"<<endl;
                cout<<"|                 / \\                    |"<<endl;
                cout<<"|                                        |"<<endl;
                cout<<"|                                        |"<<endl;
                cout<<"------------------------------------------"<<endl;
                cout<<endl; cout<<endl; cout<<endl;
                menuworking();
            }
        }
        
        cout<<endl;
        cout<<endl;
        cout<<endl;
        cout<<endl;
        
    //if 7 letter done
        if(hidelet==    obtainword1[7]){
            cout<<"=================== HangMan Game ==================="<<endl;
            cout<<"----------------------------------------------------"<<endl;
            cout<<"|                      Hangman                      |"<<endl;
            cout<<"----------------------------------------------------"<<endl;
            cout<<"|                         |                         |"<<endl;
            cout<<"|                         |                         |"<<endl;
            cout<<"|                         |                         |"<<endl;
            cout<<"|                         O                         |"<<endl;
            cout<<"|                        /|\\                        |"<<endl;
            cout<<"|                         |                         |"<<endl;
            cout<<"|                        / \\                        |"<<endl;
            cout<<"----------------------------------------------------"<<endl;
            cout<<"---------------- Select and Type One ---------------"<<endl;
            cout<<"                      ";
            cout<<static_cast<char>(toupper(    obtainword1[1]))<<" ";
            cout<<static_cast<char>(toupper(    obtainword1[9]))<<" ";
            cout<<endl;
            cout<<"----------------------------------------------------"<<endl;
            cout<<"|                                                   |"<<endl;
            cout<<"                    ";
            for(int i = 0 ; i<=strlen(word1) ; i++){
                if(i==7){
                    word1[i]=hidelet;
                }
                if(i==9){
                    word1[i]='-';
                }
                cout<<word1[i]<<" ";
            }
            cout<<endl;
            cout<<"|                                                   |"<<endl;
            cout<<"----------------------------------------------------"<<endl;
        }
        tries = 4;
        cout<<"Enter the hidden word "<<endl;
        while(true){
            tries--;
            cin>>hidelet;
            if(hidelet==    obtainword1[9]){
                break;
            }
            if(tries==3){
                cout<<"------------------------------------------"<<endl;
                cout<<"|            Hangman is Hanged           |"<<endl;
                cout<<"------------------------------------------"<<endl;
                cout<<"|                  |                     |"<<endl;
                cout<<"|                  |    uhHH             |"<<endl;
                cout<<"|                  O                     |"<<endl;
                cout<<"|                 /|\\                    |"<<endl;
                cout<<"|                  |                     |"<<endl;
                cout<<"|                 / \\                    |"<<endl;
                cout<<"|                                        |"<<endl;
                cout<<"------------------------------------------"<<endl;
                cout<<"Please enter the right letter"<<endl;
            }
            if(tries==2){
                cout<<"------------------------------------------"<<endl;
                cout<<"|          Hangman is in Danger          |"<<endl;
                cout<<"------------------------------------------"<<endl;
                cout<<"|                  |     ahh             |"<<endl;
                cout<<"|                  O  aAAhHH             |"<<endl;
                cout<<"|                 /|\\                    |"<<endl;
                cout<<"|                  |                     |"<<endl;
                cout<<"|                 / \\                    |"<<endl;
                cout<<"|                                        |"<<endl;
                cout<<"|                                        |"<<endl;
                cout<<"------------------------------------------"<<endl;
                cout<<"Please enter the right letter"<<endl;
            }
            if(tries==1){
                cout<<"############## GAME OVER #################"<<endl;
                cout<<"------------------------------------------"<<endl;
                cout<<"|             Hangman is Died            |"<<endl;
                cout<<"------------------------------------------"<<endl;
                cout<<"|                  |   ~                 |"<<endl;
                cout<<"|                  O ~                    |"<<endl;
                cout<<"|                 /|\\                    |"<<endl;
                cout<<"|                  |                     |"<<endl;
                cout<<"|                 / \\                    |"<<endl;
                cout<<"|                                        |"<<endl;
                cout<<"|                                        |"<<endl;
                cout<<"------------------------------------------"<<endl;
                cout<<endl; cout<<endl; cout<<endl;
                menuworking();
            }
        }
        
        cout<<endl;
        cout<<endl;
        cout<<endl;
        cout<<endl;
        
    //if letter 9 done
        if(hidelet==    obtainword1[9]){
            file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Hangman Game/Hangman Game/assets/name.txt",ios::out|ios::trunc);
            file.close();
            cout<<"#            \\/  --- | |  \\  /\\  / | |\\ |          #"<<endl;
            cout<<"#             |  |_| |_|   \\/  \\/  | | \\|          #"<<endl;
            cout<<"=================== HangMan Game ==================="<<endl;
            cout<<"----------------------------------------------------"<<endl;
            cout<<"|                      Hangman                      |"<<endl;
            cout<<"----------------------------------------------------"<<endl;
            cout<<"|                         |                         |"<<endl;
            cout<<"|                         |                         |"<<endl;
            cout<<"|                         |                         |"<<endl;
            cout<<"|                         O                         |"<<endl;
            cout<<"|                        /|\\                        |"<<endl;
            cout<<"|                         |                         |"<<endl;
            cout<<"|                        / \\                        |"<<endl;
            cout<<"----------------------------------------------------"<<endl;
            cout<<"---------------- Select and Type One ---------------"<<endl;
            cout<<"                      ";
            cout<<endl;
            cout<<"----------------------------------------------------"<<endl;
            cout<<"|                                                   |"<<endl;
            cout<<"                    ";
            for(int i = 0 ; i<=strlen(word1) ; i++){
                if(i==9){
                    word1[i]=hidelet;
                }
                cout<<word1[i]<<" ";
            }
            cout<<endl;
            cout<<"|                                                   |"<<endl;
            cout<<"----------------------------------------------------"<<endl;
            cout<<endl; cout<<endl; cout<<endl;
            menuworking();
        }
    }
    
    if(n==8){
        char word2[9],
            obtainword2[9];
        for(int i = 0 ; i < w.size() ; i++){
                obtainword2[i]=word2[i]=w.at(i);
        }
        cout<<endl;
        cout<<"=================== HangMan Game ==================="<<endl;
        cout<<"----------------------------------------------------"<<endl;
        cout<<"|                      Hangman                      |"<<endl;
        cout<<"----------------------------------------------------"<<endl;
        cout<<"|                         |                         |"<<endl;
        cout<<"|                         |                         |"<<endl;
        cout<<"|                         |                         |"<<endl;
        cout<<"|                         O                         |"<<endl;
        cout<<"|                        /|\\                        |"<<endl;
        cout<<"|                         |                         |"<<endl;
        cout<<"|                        / \\                        |"<<endl;
        cout<<"----------------------------------------------------"<<endl;
        cout<<"---------------- Select and Type One ---------------"<<endl;
        cout<<"                      ";
        cout<<static_cast<char>(toupper(    obtainword2[1]))<<" ";
        cout<<static_cast<char>(toupper(    obtainword2[7]))<<" ";
        cout<<static_cast<char>(toupper(    obtainword2[3]))<<" ";
        cout<<static_cast<char>(toupper(    obtainword2[4]))<<" ";
        cout<<endl;
        cout<<"----------------------------------------------------"<<endl;
        cout<<"|                                                   |"<<endl;
        cout<<"                 ";
        for(int i = 0 ; i<=strlen(word2) ; i++){
            if(i==1){
                word2[i]='-';
            }
            if(i==3){
                word2[i]='-';
            }
            if(i==4){
                word2[i]='-';
            }
            if(i==7){
                word2[i]='-';
            }
            cout<<word2[i]<<" ";
        }
        cout<<endl;
        cout<<"|                                                   |"<<endl;
        cout<<"----------------------------------------------------"<<endl;
        cout<<"Enter the hidden word "<<endl;
        while(true){
            tries--;
            cin>>hidelet;
            if(hidelet==    obtainword2[1]){
                break;
            }
            if(tries==3){
                cout<<"------------------------------------------"<<endl;
                cout<<"|            Hangman is Hanged           |"<<endl;
                cout<<"------------------------------------------"<<endl;
                cout<<"|                  |                     |"<<endl;
                cout<<"|                  |    uhHH             |"<<endl;
                cout<<"|                  O                     |"<<endl;
                cout<<"|                 /|\\                    |"<<endl;
                cout<<"|                  |                     |"<<endl;
                cout<<"|                 / \\                    |"<<endl;
                cout<<"|                                        |"<<endl;
                cout<<"------------------------------------------"<<endl;
                cout<<"Please enter the right letter"<<endl;
            }
            if(tries==2){
                cout<<"------------------------------------------"<<endl;
                cout<<"|          Hangman is in Danger          |"<<endl;
                cout<<"------------------------------------------"<<endl;
                cout<<"|                  |     ahh             |"<<endl;
                cout<<"|                  O  aAAhHH             |"<<endl;
                cout<<"|                 /|\\                    |"<<endl;
                cout<<"|                  |                     |"<<endl;
                cout<<"|                 / \\                    |"<<endl;
                cout<<"|                                        |"<<endl;
                cout<<"|                                        |"<<endl;
                cout<<"------------------------------------------"<<endl;
                cout<<"Please enter the right letter"<<endl;
            }
            if(tries==1){
                cout<<"############## GAME OVER #################"<<endl;
                cout<<"------------------------------------------"<<endl;
                cout<<"|             Hangman is Died            |"<<endl;
                cout<<"------------------------------------------"<<endl;
                cout<<"|                  |   ~                 |"<<endl;
                cout<<"|                  O ~                    |"<<endl;
                cout<<"|                 /|\\                    |"<<endl;
                cout<<"|                  |                     |"<<endl;
                cout<<"|                 / \\                    |"<<endl;
                cout<<"|                                        |"<<endl;
                cout<<"|                                        |"<<endl;
                cout<<"------------------------------------------"<<endl;
                cout<<endl; cout<<endl; cout<<endl;
                menuworking();
            }
        }
        
        cout<<endl;
        cout<<endl;
        cout<<endl;
        cout<<endl;
        
    //if 1 letter done
        if(hidelet==    obtainword2[1]){
            cout<<"=================== HangMan Game ==================="<<endl;
            cout<<"----------------------------------------------------"<<endl;
            cout<<"|                      Hangman                      |"<<endl;
            cout<<"----------------------------------------------------"<<endl;
            cout<<"|                         |                         |"<<endl;
            cout<<"|                         |                         |"<<endl;
            cout<<"|                         |                         |"<<endl;
            cout<<"|                         O                         |"<<endl;
            cout<<"|                        /|\\                        |"<<endl;
            cout<<"|                         |                         |"<<endl;
            cout<<"|                        / \\                        |"<<endl;
            cout<<"----------------------------------------------------"<<endl;
            cout<<"---------------- Select and Type One ---------------"<<endl;
            cout<<"                      ";
            cout<<static_cast<char>(toupper(    obtainword2[7]))<<" ";
            cout<<static_cast<char>(toupper(    obtainword2[3]))<<" ";
            cout<<static_cast<char>(toupper(    obtainword2[4]))<<" ";
            cout<<endl;
            cout<<"----------------------------------------------------"<<endl;
            cout<<"|                                                   |"<<endl;
            cout<<"                    ";
            for(int i = 0 ; i<=strlen(word2) ; i++){
                if(i==1){
                    word2[i]=hidelet;
                }
                if(i==3){
                    word2[i]='-';
                }
                if(i==4){
                    word2[i]='-';
                }
                if(i==7){
                    word2[i]='-';
                }
                cout<<word2[i]<<" ";
            }
            cout<<endl;
            cout<<"|                                                   |"<<endl;
            cout<<"----------------------------------------------------"<<endl;
        }
        tries = 4;
        cout<<"Enter the hidden word "<<endl;
        while(true){
            tries--;
            cin>>hidelet;
            if(hidelet==    obtainword2[3]){
                break;
            }
            if(tries==3){
                cout<<"------------------------------------------"<<endl;
                cout<<"|            Hangman is Hanged           |"<<endl;
                cout<<"------------------------------------------"<<endl;
                cout<<"|                  |                     |"<<endl;
                cout<<"|                  |    uhHH             |"<<endl;
                cout<<"|                  O                     |"<<endl;
                cout<<"|                 /|\\                    |"<<endl;
                cout<<"|                  |                     |"<<endl;
                cout<<"|                 / \\                    |"<<endl;
                cout<<"|                                        |"<<endl;
                cout<<"------------------------------------------"<<endl;
                cout<<"Please enter the right letter"<<endl;
            }
            if(tries==2){
                cout<<"------------------------------------------"<<endl;
                cout<<"|          Hangman is in Danger          |"<<endl;
                cout<<"------------------------------------------"<<endl;
                cout<<"|                  |     ahh             |"<<endl;
                cout<<"|                  O  aAAhHH             |"<<endl;
                cout<<"|                 /|\\                    |"<<endl;
                cout<<"|                  |                     |"<<endl;
                cout<<"|                 / \\                    |"<<endl;
                cout<<"|                                        |"<<endl;
                cout<<"|                                        |"<<endl;
                cout<<"------------------------------------------"<<endl;
                cout<<"Please enter the right letter"<<endl;
            }
            if(tries==1){
                cout<<"############## GAME OVER #################"<<endl;
                cout<<"------------------------------------------"<<endl;
                cout<<"|             Hangman is Died            |"<<endl;
                cout<<"------------------------------------------"<<endl;
                cout<<"|                  |   ~                 |"<<endl;
                cout<<"|                  O ~                    |"<<endl;
                cout<<"|                 /|\\                    |"<<endl;
                cout<<"|                  |                     |"<<endl;
                cout<<"|                 / \\                    |"<<endl;
                cout<<"|                                        |"<<endl;
                cout<<"|                                        |"<<endl;
                cout<<"------------------------------------------"<<endl;
                cout<<endl; cout<<endl; cout<<endl;
                menuworking();
            }
        }
        
        cout<<endl;
        cout<<endl;
        cout<<endl;
        cout<<endl;
        
    //if 3 letter done
        if(hidelet==    obtainword2[3]){
            cout<<"=================== HangMan Game ==================="<<endl;
            cout<<"----------------------------------------------------"<<endl;
            cout<<"|                      Hangman                      |"<<endl;
            cout<<"----------------------------------------------------"<<endl;
            cout<<"|                         |                         |"<<endl;
            cout<<"|                         |                         |"<<endl;
            cout<<"|                         |                         |"<<endl;
            cout<<"|                         O                         |"<<endl;
            cout<<"|                        /|\\                        |"<<endl;
            cout<<"|                         |                         |"<<endl;
            cout<<"|                        / \\                        |"<<endl;
            cout<<"----------------------------------------------------"<<endl;
            cout<<"---------------- Select and Type One ---------------"<<endl;
            cout<<"                      ";
            cout<<static_cast<char>(toupper(    obtainword2[7]))<<" ";
            cout<<static_cast<char>(toupper(    obtainword2[4]))<<" ";
            cout<<endl;
            cout<<"----------------------------------------------------"<<endl;
            cout<<"|                                                   |"<<endl;
            cout<<"                    ";
            for(int i = 0 ; i<=strlen(word2) ; i++){
                if(i==3){
                    word2[i]=hidelet;
                }
                if(i==4){
                    word2[i]='-';
                }
                if(i==7){
                    word2[i]='-';
                }
                cout<<word2[i]<<" ";
            }
            cout<<endl;
            cout<<"|                                                   |"<<endl;
            cout<<"----------------------------------------------------"<<endl;
        }
        tries = 4;
        cout<<"Enter the hidden word "<<endl;
        while(true){
            tries--;
            cin>>hidelet;
            if(hidelet==    obtainword2[4]){
                break;
            }
            if(tries==3){
                cout<<"------------------------------------------"<<endl;
                cout<<"|            Hangman is Hanged           |"<<endl;
                cout<<"------------------------------------------"<<endl;
                cout<<"|                  |                     |"<<endl;
                cout<<"|                  |    uhHH             |"<<endl;
                cout<<"|                  O                     |"<<endl;
                cout<<"|                 /|\\                    |"<<endl;
                cout<<"|                  |                     |"<<endl;
                cout<<"|                 / \\                    |"<<endl;
                cout<<"|                                        |"<<endl;
                cout<<"------------------------------------------"<<endl;
                cout<<"Please enter the right letter"<<endl;
            }
            if(tries==2){
                cout<<"------------------------------------------"<<endl;
                cout<<"|          Hangman is in Danger          |"<<endl;
                cout<<"------------------------------------------"<<endl;
                cout<<"|                  |     ahh             |"<<endl;
                cout<<"|                  O  aAAhHH             |"<<endl;
                cout<<"|                 /|\\                    |"<<endl;
                cout<<"|                  |                     |"<<endl;
                cout<<"|                 / \\                    |"<<endl;
                cout<<"|                                        |"<<endl;
                cout<<"|                                        |"<<endl;
                cout<<"------------------------------------------"<<endl;
                cout<<"Please enter the right letter"<<endl;
            }
            if(tries==1){
                cout<<"############## GAME OVER #################"<<endl;
                cout<<"------------------------------------------"<<endl;
                cout<<"|             Hangman is Died            |"<<endl;
                cout<<"------------------------------------------"<<endl;
                cout<<"|                  |   ~                 |"<<endl;
                cout<<"|                  O ~                    |"<<endl;
                cout<<"|                 /|\\                    |"<<endl;
                cout<<"|                  |                     |"<<endl;
                cout<<"|                 / \\                    |"<<endl;
                cout<<"|                                        |"<<endl;
                cout<<"|                                        |"<<endl;
                cout<<"------------------------------------------"<<endl;
                cout<<endl; cout<<endl; cout<<endl;
                menuworking();
            }
        }
        
        cout<<endl;
        cout<<endl;
        cout<<endl;
        cout<<endl;
        
    //if 4 letter done
        if(hidelet==    obtainword2[4]){
            cout<<"=================== HangMan Game ==================="<<endl;
            cout<<"----------------------------------------------------"<<endl;
            cout<<"|                      Hangman                      |"<<endl;
            cout<<"----------------------------------------------------"<<endl;
            cout<<"|                         |                         |"<<endl;
            cout<<"|                         |                         |"<<endl;
            cout<<"|                         |                         |"<<endl;
            cout<<"|                         O                         |"<<endl;
            cout<<"|                        /|\\                        |"<<endl;
            cout<<"|                         |                         |"<<endl;
            cout<<"|                        / \\                        |"<<endl;
            cout<<"----------------------------------------------------"<<endl;
            cout<<"---------------- Select and Type One ---------------"<<endl;
            cout<<"                      ";
            cout<<static_cast<char>(toupper(    obtainword2[7]))<<" ";
            cout<<static_cast<char>(toupper(    obtainword2[4]))<<" ";
            cout<<endl;
            cout<<"----------------------------------------------------"<<endl;
            cout<<"|                                                   |"<<endl;
            cout<<"                    ";
            for(int i = 0 ; i<=strlen(word2) ; i++){
                if(i==4){
                    word2[i]=hidelet;
                }
                if(i==7){
                    word2[i]='-';
                }
                cout<<word2[i]<<" ";
            }
            cout<<endl;
            cout<<"|                                                   |"<<endl;
            cout<<"----------------------------------------------------"<<endl;
        }
        tries = 4;
        cout<<"Enter the hidden word "<<endl;
        while(true){
            tries--;
            cin>>hidelet;
            if(hidelet==    obtainword2[7]){
                break;
            }
            if(tries==3){
                cout<<"------------------------------------------"<<endl;
                cout<<"|            Hangman is Hanged           |"<<endl;
                cout<<"------------------------------------------"<<endl;
                cout<<"|                  |                     |"<<endl;
                cout<<"|                  |    uhHH             |"<<endl;
                cout<<"|                  O                     |"<<endl;
                cout<<"|                 /|\\                    |"<<endl;
                cout<<"|                  |                     |"<<endl;
                cout<<"|                 / \\                    |"<<endl;
                cout<<"|                                        |"<<endl;
                cout<<"------------------------------------------"<<endl;
                cout<<"Please enter the right letter"<<endl;
            }
            if(tries==2){
                cout<<"------------------------------------------"<<endl;
                cout<<"|          Hangman is in Danger          |"<<endl;
                cout<<"------------------------------------------"<<endl;
                cout<<"|                  |     ahh             |"<<endl;
                cout<<"|                  O  aAAhHH             |"<<endl;
                cout<<"|                 /|\\                    |"<<endl;
                cout<<"|                  |                     |"<<endl;
                cout<<"|                 / \\                    |"<<endl;
                cout<<"|                                        |"<<endl;
                cout<<"|                                        |"<<endl;
                cout<<"------------------------------------------"<<endl;
                cout<<"Please enter the right letter"<<endl;
            }
            if(tries==1){
                cout<<"############## GAME OVER #################"<<endl;
                cout<<"------------------------------------------"<<endl;
                cout<<"|             Hangman is Died            |"<<endl;
                cout<<"------------------------------------------"<<endl;
                cout<<"|                  |   ~                 |"<<endl;
                cout<<"|                  O ~                    |"<<endl;
                cout<<"|                 /|\\                    |"<<endl;
                cout<<"|                  |                     |"<<endl;
                cout<<"|                 / \\                    |"<<endl;
                cout<<"|                                        |"<<endl;
                cout<<"|                                        |"<<endl;
                cout<<"------------------------------------------"<<endl;
                cout<<endl; cout<<endl; cout<<endl;
                menuworking();
            }
        }
        cout<<endl;
        cout<<endl;
        cout<<endl;
        cout<<endl;
        
    //if letter 7 done
        if(hidelet==obtainword2[7]){
            file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Hangman Game/Hangman Game/assets/name.txt",ios::out|ios::trunc);
            file.close();
            cout<<"#            \\/  --- | |  \\  /\\  / | |\\ |          #"<<endl;
            cout<<"#             |  |_| |_|   \\/  \\/  | | \\|          #"<<endl;
            cout<<"=================== HangMan Game ==================="<<endl;
            cout<<"----------------------------------------------------"<<endl;
            cout<<"|                      Hangman                      |"<<endl;
            cout<<"----------------------------------------------------"<<endl;
            cout<<"|                         |                         |"<<endl;
            cout<<"|                         |                         |"<<endl;
            cout<<"|                         |                         |"<<endl;
            cout<<"|                         O                         |"<<endl;
            cout<<"|                        /|\\                        |"<<endl;
            cout<<"|                         |                         |"<<endl;
            cout<<"|                        / \\                        |"<<endl;
            cout<<"----------------------------------------------------"<<endl;
            cout<<"---------------- Select and Type One ---------------"<<endl;
            cout<<"                      ";
            cout<<endl;
            cout<<"----------------------------------------------------"<<endl;
            cout<<"|                                                   |"<<endl;
            cout<<"                    ";
            for(int i = 0 ; i<=strlen(word2) ; i++){
                if(i==7){
                    word2[i]=hidelet;
                }
                cout<<word2[i]<<" ";
            }
            cout<<endl;
            cout<<"|                                                   |"<<endl;
            cout<<"----------------------------------------------------"<<endl;
            cout<<endl; cout<<endl; cout<<endl;
            menuworking();
        }
    }
    
    if(n==7){
        char word3[8],
        obtainword3[8];
        for(int i = 0 ; i < w.size() ; i++){
            obtainword3[i]=word3[i]=w.at(i);
        }
        cout<<endl;
        cout<<"=================== HangMan Game ==================="<<endl;
        cout<<"----------------------------------------------------"<<endl;
        cout<<"|                      Hangman                      |"<<endl;
        cout<<"----------------------------------------------------"<<endl;
        cout<<"|                         |                         |"<<endl;
        cout<<"|                         |                         |"<<endl;
        cout<<"|                         |                         |"<<endl;
        cout<<"|                         O                         |"<<endl;
        cout<<"|                        /|\\                        |"<<endl;
        cout<<"|                         |                         |"<<endl;
        cout<<"|                        / \\                        |"<<endl;
        cout<<"----------------------------------------------------"<<endl;
        cout<<"---------------- Select and Type One ---------------"<<endl;
        cout<<"                      ";
        cout<<static_cast<char>(toupper(obtainword3[1]))<<" ";
        cout<<static_cast<char>(toupper(obtainword3[3]))<<" ";
        cout<<static_cast<char>(toupper(obtainword3[4]))<<" ";
        cout<<endl;
        cout<<"----------------------------------------------------"<<endl;
        cout<<"|                                                   |"<<endl;
        cout<<"                  ";
        for(int i = 0 ; i <= strlen(word3) ; i++){
            if(i==1){
                word3[i]='-';
            }
            if(i==3){
                word3[i]='-';
            }
            if(i==4){
                word3[i]='-';
            }
            cout<<word3[i]<<" ";
        }
        cout<<endl;
        cout<<"|                                                   |"<<endl;
        cout<<"----------------------------------------------------"<<endl;
        cout<<"Enter the hidden word "<<endl;
        while(true){
            tries--;
            cin>>hidelet;
            if(hidelet==obtainword3[1]){
                break;
            }
            if(tries==3){
                cout<<"------------------------------------------"<<endl;
                cout<<"|            Hangman is Hanged           |"<<endl;
                cout<<"------------------------------------------"<<endl;
                cout<<"|                  |                     |"<<endl;
                cout<<"|                  |    uhHH             |"<<endl;
                cout<<"|                  O                     |"<<endl;
                cout<<"|                 /|\\                    |"<<endl;
                cout<<"|                  |                     |"<<endl;
                cout<<"|                 / \\                    |"<<endl;
                cout<<"|                                        |"<<endl;
                cout<<"------------------------------------------"<<endl;
                cout<<"Please enter the right letter"<<endl;
            }
            if(tries==2){
                cout<<"------------------------------------------"<<endl;
                cout<<"|          Hangman is in Danger          |"<<endl;
                cout<<"------------------------------------------"<<endl;
                cout<<"|                  |     ahh             |"<<endl;
                cout<<"|                  O  aAAhHH             |"<<endl;
                cout<<"|                 /|\\                    |"<<endl;
                cout<<"|                  |                     |"<<endl;
                cout<<"|                 / \\                    |"<<endl;
                cout<<"|                                        |"<<endl;
                cout<<"|                                        |"<<endl;
                cout<<"------------------------------------------"<<endl;
                cout<<"Please enter the right letter"<<endl;
            }
            if(tries==1){
                cout<<"############## GAME OVER #################"<<endl;
                cout<<"------------------------------------------"<<endl;
                cout<<"|             Hangman is Died            |"<<endl;
                cout<<"------------------------------------------"<<endl;
                cout<<"|                  |   ~                 |"<<endl;
                cout<<"|                  O ~                    |"<<endl;
                cout<<"|                 /|\\                    |"<<endl;
                cout<<"|                  |                     |"<<endl;
                cout<<"|                 / \\                    |"<<endl;
                cout<<"|                                        |"<<endl;
                cout<<"|                                        |"<<endl;
                cout<<"------------------------------------------"<<endl;
                menuworking();
            }
        }
        
        cout<<endl;
        cout<<endl;
        cout<<endl;
        cout<<endl;
        
    //if 1 letter done
        if(hidelet==obtainword3[1]){
            cout<<"=================== HangMan Game ==================="<<endl;
            cout<<"----------------------------------------------------"<<endl;
            cout<<"|                      Hangman                      |"<<endl;
            cout<<"----------------------------------------------------"<<endl;
            cout<<"|                         |                         |"<<endl;
            cout<<"|                         |                         |"<<endl;
            cout<<"|                         |                         |"<<endl;
            cout<<"|                         O                         |"<<endl;
            cout<<"|                        /|\\                        |"<<endl;
            cout<<"|                         |                         |"<<endl;
            cout<<"|                        / \\                        |"<<endl;
            cout<<"----------------------------------------------------"<<endl;
            cout<<"---------------- Select and Type One ---------------"<<endl;
            cout<<"                      ";
            cout<<static_cast<char>(toupper(obtainword3[3]))<<" ";
            cout<<static_cast<char>(toupper(obtainword3[4]))<<" ";
            cout<<endl;
            cout<<"----------------------------------------------------"<<endl;
            cout<<"|                                                   |"<<endl;
            cout<<"                    ";
            for(int i = 0 ; i<=strlen(word3) ; i++){
                if(i==1){
                    word3[i]=hidelet;
                }
                if(i==3){
                    word3[i]='-';
                }
                if(i==4){
                    word3[i]='-';
                }
                cout<<word3[i]<<" ";
            }
            cout<<endl;
            cout<<"|                                                   |"<<endl;
            cout<<"----------------------------------------------------"<<endl;
        }
        tries = 4;
        cout<<"Enter the hidden word "<<endl;
        while(true){
            tries--;
            cin>>hidelet;
            if(hidelet==obtainword3[3]){
                break;
            }
            if(tries==3){
                cout<<"------------------------------------------"<<endl;
                cout<<"|            Hangman is Hanged           |"<<endl;
                cout<<"------------------------------------------"<<endl;
                cout<<"|                  |                     |"<<endl;
                cout<<"|                  |    uhHH             |"<<endl;
                cout<<"|                  O                     |"<<endl;
                cout<<"|                 /|\\                    |"<<endl;
                cout<<"|                  |                     |"<<endl;
                cout<<"|                 / \\                    |"<<endl;
                cout<<"|                                        |"<<endl;
                cout<<"------------------------------------------"<<endl;
                cout<<"Please enter the right letter"<<endl;
            }
            if(tries==2){
                cout<<"------------------------------------------"<<endl;
                cout<<"|          Hangman is in Danger          |"<<endl;
                cout<<"------------------------------------------"<<endl;
                cout<<"|                  |     ahh             |"<<endl;
                cout<<"|                  O  aAAhHH             |"<<endl;
                cout<<"|                 /|\\                    |"<<endl;
                cout<<"|                  |                     |"<<endl;
                cout<<"|                 / \\                    |"<<endl;
                cout<<"|                                        |"<<endl;
                cout<<"|                                        |"<<endl;
                cout<<"------------------------------------------"<<endl;
                cout<<"Please enter the right letter"<<endl;
            }
            if(tries==1){
                cout<<"############## GAME OVER #################"<<endl;
                cout<<"------------------------------------------"<<endl;
                cout<<"|             Hangman is Died            |"<<endl;
                cout<<"------------------------------------------"<<endl;
                cout<<"|                  |   ~                 |"<<endl;
                cout<<"|                  O ~                    |"<<endl;
                cout<<"|                 /|\\                    |"<<endl;
                cout<<"|                  |                     |"<<endl;
                cout<<"|                 / \\                    |"<<endl;
                cout<<"|                                        |"<<endl;
                cout<<"|                                        |"<<endl;
                cout<<"------------------------------------------"<<endl;
                menuworking();
            }
        }
        
        cout<<endl;
        cout<<endl;
        cout<<endl;
        cout<<endl;
        
    //if 3 letter done
        if(hidelet==obtainword3[3]){
            cout<<"=================== HangMan Game ==================="<<endl;
            cout<<"----------------------------------------------------"<<endl;
            cout<<"|                      Hangman                      |"<<endl;
            cout<<"----------------------------------------------------"<<endl;
            cout<<"|                         |                         |"<<endl;
            cout<<"|                         |                         |"<<endl;
            cout<<"|                         |                         |"<<endl;
            cout<<"|                         O                         |"<<endl;
            cout<<"|                        /|\\                        |"<<endl;
            cout<<"|                         |                         |"<<endl;
            cout<<"|                        / \\                        |"<<endl;
            cout<<"----------------------------------------------------"<<endl;
            cout<<"---------------- Select and Type One ---------------"<<endl;
            cout<<"                      ";
            cout<<static_cast<char>(toupper(obtainword3[4]))<<" ";
            cout<<static_cast<char>(toupper(obtainword3[3]))<<" ";
            cout<<endl;
            cout<<"----------------------------------------------------"<<endl;
            cout<<"|                                                   |"<<endl;
            cout<<"                    ";
            for(int i = 0 ; i<=strlen(word3) ; i++){
                if(i==3){
                    word3[i]=hidelet;
                }
                if(i==4){
                    word3[i]='-';
                }
                cout<<word3[i]<<" ";
            }
            cout<<endl;
            cout<<"|                                                   |"<<endl;
            cout<<"----------------------------------------------------"<<endl;
        }
        tries = 4;
        cout<<"Enter the hidden word "<<endl;
        while(true){
            tries--;
            cin>>hidelet;
            if(hidelet==obtainword3[4]){
                break;
            }
            if(tries==3){
                cout<<"------------------------------------------"<<endl;
                cout<<"|            Hangman is Hanged           |"<<endl;
                cout<<"------------------------------------------"<<endl;
                cout<<"|                  |                     |"<<endl;
                cout<<"|                  |    uhHH             |"<<endl;
                cout<<"|                  O                     |"<<endl;
                cout<<"|                 /|\\                    |"<<endl;
                cout<<"|                  |                     |"<<endl;
                cout<<"|                 / \\                    |"<<endl;
                cout<<"|                                        |"<<endl;
                cout<<"------------------------------------------"<<endl;
                cout<<"Please enter the right letter"<<endl;
            }
            if(tries==2){
                cout<<"------------------------------------------"<<endl;
                cout<<"|          Hangman is in Danger          |"<<endl;
                cout<<"------------------------------------------"<<endl;
                cout<<"|                  |     ahh             |"<<endl;
                cout<<"|                  O  aAAhHH             |"<<endl;
                cout<<"|                 /|\\                    |"<<endl;
                cout<<"|                  |                     |"<<endl;
                cout<<"|                 / \\                    |"<<endl;
                cout<<"|                                        |"<<endl;
                cout<<"|                                        |"<<endl;
                cout<<"------------------------------------------"<<endl;
                cout<<"Please enter the right letter"<<endl;
            }
            if(tries==1){
                cout<<"############## GAME OVER #################"<<endl;
                cout<<"------------------------------------------"<<endl;
                cout<<"|             Hangman is Died            |"<<endl;
                cout<<"------------------------------------------"<<endl;
                cout<<"|                  |   ~                 |"<<endl;
                cout<<"|                  O ~                    |"<<endl;
                cout<<"|                 /|\\                    |"<<endl;
                cout<<"|                  |                     |"<<endl;
                cout<<"|                 / \\                    |"<<endl;
                cout<<"|                                        |"<<endl;
                cout<<"|                                        |"<<endl;
                cout<<"------------------------------------------"<<endl;
                menuworking();
            }
        }
        
        
    //if letter 9 done
        if(hidelet==obtainword3[4]){
            file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Hangman Game/Hangman Game/assets/name.txt",ios::out|ios::trunc);
            file.close();
            cout<<"#            \\/  --- | |  \\  /\\  / | |\\ |          #"<<endl;
            cout<<"#             |  |_| |_|   \\/  \\/  | | \\|          #"<<endl;
            cout<<"=================== HangMan Game ==================="<<endl;
            cout<<"----------------------------------------------------"<<endl;
            cout<<"|                      Hangman                      |"<<endl;
            cout<<"----------------------------------------------------"<<endl;
            cout<<"|                         |                         |"<<endl;
            cout<<"|                         |                         |"<<endl;
            cout<<"|                         |                         |"<<endl;
            cout<<"|                         O                         |"<<endl;
            cout<<"|                        /|\\                        |"<<endl;
            cout<<"|                         |                         |"<<endl;
            cout<<"|                        / \\                        |"<<endl;
            cout<<"----------------------------------------------------"<<endl;
            cout<<"---------------- Select and Type One ---------------"<<endl;
            cout<<"                      ";
            cout<<endl;
            cout<<"----------------------------------------------------"<<endl;
            cout<<"|                                                   |"<<endl;
            cout<<"                    ";
            for(int i = 0 ; i<=strlen(word3) ; i++){
                if(i==4){
                    word3[i]=hidelet;
                }
                cout<<word3[i]<<" ";
            }
            cout<<endl;
            cout<<"|                                                   |"<<endl;
            cout<<"----------------------------------------------------"<<endl;
            menuworking();
        }
    }
}

#endif /* main_hpp */
