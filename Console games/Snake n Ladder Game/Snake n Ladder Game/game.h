#ifndef game_h
#define game_h
#include <iostream>
#include <string>
#include <fstream>
#include <ctime>
#include <cstdlib>
#include "func.hpp"
using namespace std;

                                   const int x = 36 ;
                                   const int y = 36 ;
                                          int level = 0,
                                              set[x];
static string sec1[x] {"\0","\0","\0","\0","\0","\0",
                       "\0","\0","\0","\0","\0","\0",
                       "\0","\0","\0","\0","\0","\0",
                       "\0","\0","\0","\0","\0","\0",
                       "\0","\0","\0","\0","\0","\0",
                       "\0","\0","\0","\0","\0","\0"},
              sec2[y] {"\0","\0","\0","\0","\0","\0",
                       "\0","\0","\0","\0","\0","\0",
                       "\0","\0","\0","\0","\0","\0",
                       "\0","\0","\0","\0","\0","\0",
                       "\0","\0","\0","\0","\0","\0",
                       "\0","\0","\0","\0","\0","\0"};
                        fstream file , file1 , file2 ;

void hardlevel(string,string);
void mediumlevel(string,string);
void easylevel(string,string);

void leveleasyplayer2turn(string playname1,string  playname2){
                        srand((unsigned) time(NULL));
                                string play2 = "\0" ;
                                        int die = 0 ;
    //2
    {
        cout<<"Player "<<playname2<<" turn enter 1 to start rolling die : ";
        while(true){
            cin>>play2;
            if(play2=="1"){
                break;
            }
            if(play2!="1"){
                cout<<"Wrong Input !!"<<endl;
                continue;
            }
        }
        if(play2=="1"){
            die=rand()%6;
            if(die==0){
                die=1;
            }
        }
        cout<<endl;
        cout<<endl;
        cout<<endl;
        cout<<"You get : "<<die<<" points from die rolling !"<<endl;
        cout<<"The score board is :-"<<endl;
        cout<<endl;
        for(int i = 0 ; i < die ; i++){
            if(sec2[35]=="X"){
                file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Snake n Ladder Game/Snake n Ladder Game/assets/contineo1.txt",ios::out|ios::trunc);
                file.close();
                file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Snake n Ladder Game/Snake n Ladder Game/assets/contineo2.txt",ios::out|ios::trunc);
                file.close();
                file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Snake n Ladder Game/Snake n Ladder Game/assets/winners.txt",ios::out|ios::app);
                file<<playname2;
                file<<" won from ";
                file<<playname1;
                file<<"\n";
                file.close();
                for(int i = 0 ; i<36 ; i++){
                    if(((sec1[i]==" ")||(sec1[i]=="O"))&&((sec2[i]==" ")||(sec2[i]=="X"))){
                        set[i]=0;
                    }
                    if((sec1[i]=="\0")&&(sec2[i]=="\0")){
                        set[i]=2;
                    }
                    if((sec1[i]=="\0")&&((sec2[i]==" ")||(sec2[i]=="X"))){
                        set[i]=2;
                    }
                    if(((sec1[i]==" ")||(sec1[i]=="O"))&&(sec2[i]=="\0")){
                        set[i]=2;
                    }
                }
                cout<<"------------------------------------------"<<endl;
                cout<<"|              Snake n LADDER            |"<<endl;
                cout<<"------------------------------------------"<<endl;
                cout<<"------------------------------------------"<<endl;
                cout<<"|  "<<setw(set[30])<<sec1[30]<<sec2[30]<<"  |  "<<setw(set[31])<<sec1[31]<<sec2[31]<<"  |  "<<setw(set[32])<<sec1[32]<<sec2[32]<<"  |  "<<setw(set[33])<<sec1[33]<<sec2[33]<<"  |  "<<setw(set[34])<<sec1[34]<<sec2[34]<<"  |  "<<setw(set[35])<<sec1[35]<<sec2[35]<<" |"<<endl;
                cout<<"--------..--------------------------------"<<endl;
                cout<<"|  "<<setw(set[24])<<sec1[24]<<sec2[24]<<"  |  "<<setw(set[25])<<sec1[25]<<sec2[25]<<"  |  "<<setw(set[26])<<sec1[26]<<sec2[26]<<"  |  "<<setw(set[27])<<sec1[27]<<sec2[27]<<"  |  "<<setw(set[28])<<sec1[28]<<sec2[28]<<"  |  "<<setw(set[29])<<sec1[29]<<sec2[29]<<" |"<<endl;
                cout<<"------------------------------------------"<<endl;
                cout<<"|  "<<setw(set[18])<<sec1[18]<<sec2[18]<<"  |  "<<setw(set[19])<<sec1[19]<<sec2[19]<<"  |  "<<setw(set[20])<<sec1[20]<<sec2[20]<<"  |  "<<setw(set[21])<<sec1[21]<<sec2[21]<<"  |  "<<setw(set[22])<<sec1[22]<<sec2[22]<<"  |  "<<setw(set[23])<<sec1[23]<<sec2[23]<<" |"<<endl;
                cout<<"-.---------------------------,,-----------"<<endl;
                cout<<"|  "<<setw(set[12])<<sec1[12]<<sec2[12]<<"  |  "<<setw(set[13])<<sec1[13]<<sec2[13]<<"  |  "<<setw(set[14])<<sec1[14]<<sec2[14]<<"  |  "<<setw(set[15])<<sec1[15]<<sec2[15]<<"  |  "<<setw(set[16])<<sec1[16]<<sec2[16]<<"  |  "<<setw(set[17])<<sec1[17]<<sec2[17]<<" |"<<endl;
                cout<<"---------------..-------------------------"<<endl;
                cout<<"|  "<<setw(set[6])<<sec1[6]<<sec2[6]<<"  |  "<<setw(set[7])<<sec1[7]<<sec2[7]<<"  |  "<<setw(set[8])<<sec1[8]<<sec2[8]<<"  |  "<<setw(set[9])<<sec1[9]<<sec2[9]<<"  |  "<<setw(set[10])<<sec1[10]<<sec2[10]<<"  |  "<<setw(set[11])<<sec1[11]<<sec2[11]<<" |"<<endl;
                cout<<"-,----------------------------------------"<<endl;
                cout<<"|  "<<setw(set[0])<<sec1[0]<<sec2[0]<<"  |  "<<setw(set[1])<<sec1[1]<<sec2[1]<<"  |  "<<setw(set[2])<<sec1[2]<<sec2[2]<<"  |  "<<setw(set[3])<<sec1[3]<<sec2[3]<<"  |  "<<setw(set[4])<<sec1[4]<<sec2[4]<<"  |  "<<setw(set[5])<<sec1[5]<<sec2[5]<<" |"<<endl;
                cout<<"------------------------------------------"<<endl;
                cout<<endl;
                cout<<"Player "<<playname2<<" WON !!"<<endl;
                exit(0);
            }
            if(sec2[i]==" "||sec2[i]=="X"){
                die++;
                continue;
            }
            if(i==36){
                break;
            }
            if(sec2[i]=="\0"){
                sec2[i]="X";
                if(i>=1){
                    sec2[i-1]=(" ");
                }
            }
        }
        if(sec2[6]=="X"&&sec2[7]=="\0"){
            sec2[6]="\0";
            sec2[5]="X";
            cout<<"DECREMENTED i.e YOU ARE demoted 1 box"<<endl;
        }
        if(sec2[14]=="X"&&sec2[15]=="\0"){
            sec2[16]="X";
            sec2[14]=" ";
            sec2[15]=" ";
            cout<<"INCREMENTED i.e promoted 2 box"<<endl;
        }
        if(sec2[18]=="X"&&sec2[19]=="\0"){
            sec2[19]="X";
            sec2[18]=" ";
            cout<<"INCREMENTED i.e promoted 1 box"<<endl;
        }
        if(sec2[22]=="X"&&sec2[23]=="\0"){
            sec2[21]="\0";
            sec2[22]="\0";
            sec2[20]="X";
            cout<<"DECREMENTED i.e demoted 2 box"<<endl;
        }
        if(sec1[31]=="O"&&sec1[32]=="\0"){
            sec1[31]=" ";
            sec1[32]=" ";
            sec1[33]="O";
            cout<<"INCREMENTED i.e promoted 2 box"<<endl;
        }
        file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Snake n Ladder Game/Snake n Ladder Game/assets/turn.txt",ios::out|ios::trunc);
        file.close();
        file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Snake n Ladder Game/Snake n Ladder Game/assets/turn.txt",ios::out);
        file<<1;
        file.close();
        file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Snake n Ladder Game/Snake n Ladder Game/assets/contineo1.txt",ios::out|ios::trunc);
        file.close();
        file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Snake n Ladder Game/Snake n Ladder Game/assets/contineo2.txt",ios::out|ios::trunc);
        file.close();
        file1.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Snake n Ladder Game/Snake n Ladder Game/assets/contineo1.txt",ios::out);
        file2.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Snake n Ladder Game/Snake n Ladder Game/assets/contineo2.txt",ios::out);
        for(int i = 0 ; i<35 ; i++){
            if(sec1[i]=="O"){
                file1<<i;
            }
            if(sec2[i]=="X"){
                file2<<i;
            }
        }
        file1.close();
        file2.close();
        for(int i = 0 ; i<36 ; i++){
            if(((sec1[i]==" ")||(sec1[i]=="O"))&&((sec2[i]==" ")||(sec2[i]=="X"))){
                set[i]=0;
            }
            if((sec1[i]=="\0")&&(sec2[i]=="\0")){
                set[i]=2;
            }
            if((sec1[i]=="\0")&&((sec2[i]==" ")||(sec2[i]=="X"))){
                set[i]=2;
            }
            if(((sec1[i]==" ")||(sec1[i]=="O"))&&(sec2[i]=="\0")){
                set[i]=2;
            }
        }
        cout<<"------------------------------------------"<<endl;
        cout<<"|              Snake n LADDER            |"<<endl;
        cout<<"------------------------------------------"<<endl;
        cout<<"------------------------------------------"<<endl;
        cout<<"|  "<<setw(set[30])<<sec1[30]<<sec2[30]<<"  |  "<<setw(set[31])<<sec1[31]<<sec2[31]<<"  |  "<<setw(set[32])<<sec1[32]<<sec2[32]<<"  |  "<<setw(set[33])<<sec1[33]<<sec2[33]<<"  |  "<<setw(set[34])<<sec1[34]<<sec2[34]<<"  |  "<<setw(set[35])<<sec1[35]<<sec2[35]<<" |"<<endl;
        cout<<"--------..--------------------------------"<<endl;
        cout<<"|  "<<setw(set[24])<<sec1[24]<<sec2[24]<<"  |  "<<setw(set[25])<<sec1[25]<<sec2[25]<<"  |  "<<setw(set[26])<<sec1[26]<<sec2[26]<<"  |  "<<setw(set[27])<<sec1[27]<<sec2[27]<<"  |  "<<setw(set[28])<<sec1[28]<<sec2[28]<<"  |  "<<setw(set[29])<<sec1[29]<<sec2[29]<<" |"<<endl;
        cout<<"------------------------------------------"<<endl;
        cout<<"|  "<<setw(set[18])<<sec1[18]<<sec2[18]<<"  |  "<<setw(set[19])<<sec1[19]<<sec2[19]<<"  |  "<<setw(set[20])<<sec1[20]<<sec2[20]<<"  |  "<<setw(set[21])<<sec1[21]<<sec2[21]<<"  |  "<<setw(set[22])<<sec1[22]<<sec2[22]<<"  |  "<<setw(set[23])<<sec1[23]<<sec2[23]<<" |"<<endl;
        cout<<"-.---------------------------,,-----------"<<endl;
        cout<<"|  "<<setw(set[12])<<sec1[12]<<sec2[12]<<"  |  "<<setw(set[13])<<sec1[13]<<sec2[13]<<"  |  "<<setw(set[14])<<sec1[14]<<sec2[14]<<"  |  "<<setw(set[15])<<sec1[15]<<sec2[15]<<"  |  "<<setw(set[16])<<sec1[16]<<sec2[16]<<"  |  "<<setw(set[17])<<sec1[17]<<sec2[17]<<" |"<<endl;
        cout<<"---------------..-------------------------"<<endl;
        cout<<"|  "<<setw(set[6])<<sec1[6]<<sec2[6]<<"  |  "<<setw(set[7])<<sec1[7]<<sec2[7]<<"  |  "<<setw(set[8])<<sec1[8]<<sec2[8]<<"  |  "<<setw(set[9])<<sec1[9]<<sec2[9]<<"  |  "<<setw(set[10])<<sec1[10]<<sec2[10]<<"  |  "<<setw(set[11])<<sec1[11]<<sec2[11]<<" |"<<endl;
        cout<<"-,----------------------------------------"<<endl;
        cout<<"|  "<<setw(set[0])<<sec1[0]<<sec2[0]<<"  |  "<<setw(set[1])<<sec1[1]<<sec2[1]<<"  |  "<<setw(set[2])<<sec1[2]<<sec2[2]<<"  |  "<<setw(set[3])<<sec1[3]<<sec2[3]<<"  |  "<<setw(set[4])<<sec1[4]<<sec2[4]<<"  |  "<<setw(set[5])<<sec1[5]<<sec2[5]<<" |"<<endl;
        cout<<"------------------------------------------"<<endl;
        cout<<endl;
    }
    easylevel(playname1, playname2);
}

void levelmediumplayer2turn(string playname1,string  playname2){
                            srand((unsigned) time(NULL));
                                     string play2 = "\0";
                                            int die = 0 ;
    //2
    {
        cout<<"Player "<<playname2<<" turn enter 1 to start rolling die : ";
        while(true){
            cin>>play2;
            if(play2=="1"){
                break;
            }
            if(play2!="1"){
                cout<<"Wrong Input !!"<<endl;
                continue;
            }
        }
        if(play2=="1"){
            die=rand()%6;
            if(die==0){
                die=1;
            }
        }
        cout<<endl;
        cout<<endl;
        cout<<endl;
        cout<<"You get : "<<die<<" points from die rolling !"<<endl;
        cout<<"The score board is :-"<<endl;
        cout<<endl;
        for(int i = 0 ; i < die ; i++){
            if(sec2[35]=="X"){
                file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Snake n Ladder Game/Snake n Ladder Game/assets/contineo1.txt",ios::out|ios::trunc);
                file.close();
                file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Snake n Ladder Game/Snake n Ladder Game/assets/contineo2.txt",ios::out|ios::trunc);
                file.close();
                file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Snake n Ladder Game/Snake n Ladder Game/assets/winners.txt",ios::out|ios::app);
                file<<playname2;
                file<<" won from ";
                file<<playname1;
                file<<"\n";
                file.close();
                for(int i = 0 ; i<36 ; i++){
                    if(((sec1[i]==" ")||(sec1[i]=="O"))&&((sec2[i]==" ")||(sec2[i]=="X"))){
                        set[i]=0;
                    }
                    if((sec1[i]=="\0")&&(sec2[i]=="\0")){
                        set[i]=2;
                    }
                    if((sec1[i]=="\0")&&((sec2[i]==" ")||(sec2[i]=="X"))){
                        set[i]=2;
                    }
                    if(((sec1[i]==" ")||(sec1[i]=="O"))&&(sec2[i]=="\0")){
                        set[i]=2;
                    }
                }
                cout<<"------------------------------------------"<<endl;
                cout<<"|              Snake n LADDER            |"<<endl;
                cout<<"------------------------------------------"<<endl;
                cout<<"------------------------------------------"<<endl;
                cout<<"|  "<<setw(set[30])<<sec1[30]<<sec2[30]<<"  |  "<<setw(set[31])<<sec1[31]<<sec2[31]<<"  |  "<<setw(set[32])<<sec1[32]<<sec2[32]<<"  |  "<<setw(set[33])<<sec1[33]<<sec2[33]<<"  |  "<<setw(set[34])<<sec1[34]<<sec2[34]<<"  |  "<<setw(set[35])<<sec1[35]<<sec2[35]<<" |"<<endl;
                cout<<"--------,,--------------------------------"<<endl;
                cout<<"|  "<<setw(set[24])<<sec1[24]<<sec2[24]<<"  |  "<<setw(set[25])<<sec1[25]<<sec2[25]<<"  |  "<<setw(set[26])<<sec1[26]<<sec2[26]<<"  |  "<<setw(set[27])<<sec1[27]<<sec2[27]<<"  |  "<<setw(set[28])<<sec1[28]<<sec2[28]<<"  |  "<<setw(set[29])<<sec1[29]<<sec2[29]<<" |"<<endl;
                cout<<"------------------------------------------"<<endl;
                cout<<"|  "<<setw(set[18])<<sec1[18]<<sec2[18]<<"  |  "<<setw(set[19])<<sec1[19]<<sec2[19]<<"  |  "<<setw(set[20])<<sec1[20]<<sec2[20]<<"  |  "<<setw(set[21])<<sec1[21]<<sec2[21]<<"  |  "<<setw(set[22])<<sec1[22]<<sec2[22]<<"  |  "<<setw(set[23])<<sec1[23]<<sec2[23]<<" |"<<endl;
                cout<<"-.---------------------------,,-----------"<<endl;
                cout<<"|  "<<setw(set[12])<<sec1[12]<<sec2[12]<<"  |  "<<setw(set[13])<<sec1[13]<<sec2[13]<<"  |  "<<setw(set[14])<<sec1[14]<<sec2[14]<<"  |  "<<setw(set[15])<<sec1[15]<<sec2[15]<<"  |  "<<setw(set[16])<<sec1[16]<<sec2[16]<<"  |  "<<setw(set[17])<<sec1[17]<<sec2[17]<<" |"<<endl;
                cout<<"---------------..-------------------------"<<endl;
                cout<<"|  "<<setw(set[6])<<sec1[6]<<sec2[6]<<"  |  "<<setw(set[7])<<sec1[7]<<sec2[7]<<"  |  "<<setw(set[8])<<sec1[8]<<sec2[8]<<"  |  "<<setw(set[9])<<sec1[9]<<sec2[9]<<"  |  "<<setw(set[10])<<sec1[10]<<sec2[10]<<"  |  "<<setw(set[11])<<sec1[11]<<sec2[11]<<" |"<<endl;
                cout<<"-,----------------------------------------"<<endl;
                cout<<"|  "<<setw(set[0])<<sec1[0]<<sec2[0]<<"  |  "<<setw(set[1])<<sec1[1]<<sec2[1]<<"  |  "<<setw(set[2])<<sec1[2]<<sec2[2]<<"  |  "<<setw(set[3])<<sec1[3]<<sec2[3]<<"  |  "<<setw(set[4])<<sec1[4]<<sec2[4]<<"  |  "<<setw(set[5])<<sec1[5]<<sec2[5]<<" |"<<endl;
                cout<<"------------------------------------------"<<endl;
                cout<<endl;
                cout<<"Player "<<playname2<<" WON !!"<<endl;
                exit(0);
            }
            if(sec2[i]==" "||sec2[i]=="X"){
                die++;
                continue;
            }
            if(i==36){
                break;
            }
            if(sec2[i]=="\0"){
                sec2[i]="X";
                if(i>=1){
                    sec2[i-1]=(" ");
                }
            }
        }
        if(sec2[6]=="X"&&sec2[7]=="\0"){
            sec2[6]="\0";
            sec2[5]="X";
            cout<<"DECREMENTED i.e YOU ARE demoted 1 box"<<endl;
        }
        if(sec2[14]=="X"&&sec2[15]=="\0"){
            sec2[16]="X";
            sec2[14]=" ";
            sec2[15]=" ";
            cout<<"INCREMENTED i.e promoted 2 box"<<endl;
        }
        if(sec2[18]=="X"&&sec2[19]=="\0"){
            sec2[19]="X";
            sec2[18]=" ";
            cout<<"INCREMENTED i.e promoted 1 box"<<endl;
        }
        if(sec2[22]=="X"&&sec2[23]=="\0"){
            sec2[21]="\0";
            sec2[22]="\0";
            sec2[20]="X";
            cout<<"DECREMENTED i.e demoted 2 box"<<endl;
        }
        if(sec2[31]=="X"&&sec2[32]=="\0"){
            sec2[31]="\0";
            sec2[30]="\0";
            sec2[29]="X";
            cout<<"DECREMENTED i.e demoted 2 box"<<endl;
        }
        file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Snake n Ladder Game/Snake n Ladder Game/assets/turn.txt",ios::out|ios::trunc);
        file.close();
        file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Snake n Ladder Game/Snake n Ladder Game/assets/turn.txt",ios::out);
        file<<1;
        file.close();
        file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Snake n Ladder Game/Snake n Ladder Game/assets/contineo1.txt",ios::out|ios::trunc);
        file.close();
        file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Snake n Ladder Game/Snake n Ladder Game/assets/contineo2.txt",ios::out|ios::trunc);
        file.close();
        file1.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Snake n Ladder Game/Snake n Ladder Game/assets/contineo1.txt",ios::out);
        file2.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Snake n Ladder Game/Snake n Ladder Game/assets/contineo2.txt",ios::out);
        for(int i = 0 ; i<35 ; i++){
            if(sec1[i]=="O"){
                file1<<i;
            }
            if(sec2[i]=="X"){
                file2<<i;
            }
        }
        file1.close();
        file2.close();
        for(int i = 0 ; i<36 ; i++){
            if(((sec1[i]==" ")||(sec1[i]=="O"))&&((sec2[i]==" ")||(sec2[i]=="X"))){
                set[i]=0;
            }
            if((sec1[i]=="\0")&&(sec2[i]=="\0")){
                set[i]=2;
            }
            if((sec1[i]=="\0")&&((sec2[i]==" ")||(sec2[i]=="X"))){
                set[i]=2;
            }
            if(((sec1[i]==" ")||(sec1[i]=="O"))&&(sec2[i]=="\0")){
                set[i]=2;
            }
        }
        cout<<"------------------------------------------"<<endl;
        cout<<"|              Snake n LADDER            |"<<endl;
        cout<<"------------------------------------------"<<endl;
        cout<<"------------------------------------------"<<endl;
        cout<<"|  "<<setw(set[30])<<sec1[30]<<sec2[30]<<"  |  "<<setw(set[31])<<sec1[31]<<sec2[31]<<"  |  "<<setw(set[32])<<sec1[32]<<sec2[32]<<"  |  "<<setw(set[33])<<sec1[33]<<sec2[33]<<"  |  "<<setw(set[34])<<sec1[34]<<sec2[34]<<"  |  "<<setw(set[35])<<sec1[35]<<sec2[35]<<" |"<<endl;
        cout<<"--------,,--------------------------------"<<endl;
        cout<<"|  "<<setw(set[24])<<sec1[24]<<sec2[24]<<"  |  "<<setw(set[25])<<sec1[25]<<sec2[25]<<"  |  "<<setw(set[26])<<sec1[26]<<sec2[26]<<"  |  "<<setw(set[27])<<sec1[27]<<sec2[27]<<"  |  "<<setw(set[28])<<sec1[28]<<sec2[28]<<"  |  "<<setw(set[29])<<sec1[29]<<sec2[29]<<" |"<<endl;
        cout<<"------------------------------------------"<<endl;
        cout<<"|  "<<setw(set[18])<<sec1[18]<<sec2[18]<<"  |  "<<setw(set[19])<<sec1[19]<<sec2[19]<<"  |  "<<setw(set[20])<<sec1[20]<<sec2[20]<<"  |  "<<setw(set[21])<<sec1[21]<<sec2[21]<<"  |  "<<setw(set[22])<<sec1[22]<<sec2[22]<<"  |  "<<setw(set[23])<<sec1[23]<<sec2[23]<<" |"<<endl;
        cout<<"-.---------------------------,,-----------"<<endl;
        cout<<"|  "<<setw(set[12])<<sec1[12]<<sec2[12]<<"  |  "<<setw(set[13])<<sec1[13]<<sec2[13]<<"  |  "<<setw(set[14])<<sec1[14]<<sec2[14]<<"  |  "<<setw(set[15])<<sec1[15]<<sec2[15]<<"  |  "<<setw(set[16])<<sec1[16]<<sec2[16]<<"  |  "<<setw(set[17])<<sec1[17]<<sec2[17]<<" |"<<endl;
        cout<<"---------------..-------------------------"<<endl;
        cout<<"|  "<<setw(set[6])<<sec1[6]<<sec2[6]<<"  |  "<<setw(set[7])<<sec1[7]<<sec2[7]<<"  |  "<<setw(set[8])<<sec1[8]<<sec2[8]<<"  |  "<<setw(set[9])<<sec1[9]<<sec2[9]<<"  |  "<<setw(set[10])<<sec1[10]<<sec2[10]<<"  |  "<<setw(set[11])<<sec1[11]<<sec2[11]<<" |"<<endl;
        cout<<"-,----------------------------------------"<<endl;
        cout<<"|  "<<setw(set[0])<<sec1[0]<<sec2[0]<<"  |  "<<setw(set[1])<<sec1[1]<<sec2[1]<<"  |  "<<setw(set[2])<<sec1[2]<<sec2[2]<<"  |  "<<setw(set[3])<<sec1[3]<<sec2[3]<<"  |  "<<setw(set[4])<<sec1[4]<<sec2[4]<<"  |  "<<setw(set[5])<<sec1[5]<<sec2[5]<<" |"<<endl;
        cout<<"------------------------------------------"<<endl;
        cout<<endl;
    }
    mediumlevel(playname1, playname2);
}

void levelhardplayer2turn(string playname1,string  playname2){
                        srand((unsigned) time(NULL));
                                string play2 = "\0" ;
                                        int die = 0 ;
    //2
    {
        cout<<"Player "<<playname2<<" turn enter 1 to start rolling die : ";
        while(true){
            cin>>play2;
            if(play2=="1"){
                break;
            }
            if(play2!="1"){
                cout<<"Wrong Input !!"<<endl;
                continue;
            }
        }
        if(play2=="1"){
            die=rand()%6;
            if(die==0){
                die=1;
            }
        }
        cout<<endl;
        cout<<endl;
        cout<<endl;
        cout<<"You get : "<<die<<" points from die rolling !"<<endl;
        cout<<"The score board is :-"<<endl;
        cout<<endl;
        for(int i = 0 ; i < die ; i++){
            if(sec2[35]=="X"){
                file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Snake n Ladder Game/Snake n Ladder Game/assets/contineo1.txt",ios::out|ios::trunc);
                file.close();
                file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Snake n Ladder Game/Snake n Ladder Game/assets/contineo2.txt",ios::out|ios::trunc);
                file.close();
                file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Snake n Ladder Game/Snake n Ladder Game/assets/winners.txt",ios::out|ios::app);
                file<<playname2;
                file<<" won from ";
                file<<playname1;
                file<<"\n";
                file.close();
                for(int i = 0 ; i<36 ; i++){
                    if(((sec1[i]==" ")||(sec1[i]=="O"))&&((sec2[i]==" ")||(sec2[i]=="X"))){
                        set[i]=0;
                    }
                    if((sec1[i]=="\0")&&(sec2[i]=="\0")){
                        set[i]=2;
                    }
                    if((sec1[i]=="\0")&&((sec2[i]==" ")||(sec2[i]=="X"))){
                        set[i]=2;
                    }
                    if(((sec1[i]==" ")||(sec1[i]=="O"))&&(sec2[i]=="\0")){
                        set[i]=2;
                    }
                }
                cout<<"------------------------------------------"<<endl;
                cout<<"|              Snake n LADDER            |"<<endl;
                cout<<"------------------------------------------"<<endl;
                cout<<"------------------------------------------"<<endl;
                cout<<"|  "<<setw(set[30])<<sec1[30]<<sec2[30]<<"  |  "<<setw(set[31])<<sec1[31]<<sec2[31]<<"  |  "<<setw(set[32])<<sec1[32]<<sec2[32]<<"  |  "<<setw(set[33])<<sec1[33]<<sec2[33]<<"  |  "<<setw(set[34])<<sec1[34]<<sec2[34]<<"  |  "<<setw(set[35])<<sec1[35]<<sec2[35]<<" |"<<endl;
                cout<<"--------,,--------------------------------"<<endl;
                cout<<"|  "<<setw(set[24])<<sec1[24]<<sec2[24]<<"  |  "<<setw(set[25])<<sec1[25]<<sec2[25]<<"  |  "<<setw(set[26])<<sec1[26]<<sec2[26]<<"  |  "<<setw(set[27])<<sec1[27]<<sec2[27]<<"  |  "<<setw(set[28])<<sec1[28]<<sec2[28]<<"  |  "<<setw(set[29])<<sec1[29]<<sec2[29]<<" |"<<endl;
                cout<<"-----------------------------,,,----------"<<endl;
                cout<<"|  "<<setw(set[18])<<sec1[18]<<sec2[18]<<"  |  "<<setw(set[19])<<sec1[19]<<sec2[19]<<"  |  "<<setw(set[20])<<sec1[20]<<sec2[20]<<"  |  "<<setw(set[21])<<sec1[21]<<sec2[21]<<"  |  "<<setw(set[22])<<sec1[22]<<sec2[22]<<"  |  "<<setw(set[23])<<sec1[23]<<sec2[23]<<" |"<<endl;
                cout<<"-.-------,,------------------,,-----------"<<endl;
                cout<<"|  "<<setw(set[12])<<sec1[12]<<sec2[12]<<"  |  "<<setw(set[13])<<sec1[13]<<sec2[13]<<"  |  "<<setw(set[14])<<sec1[14]<<sec2[14]<<"  |  "<<setw(set[15])<<sec1[15]<<sec2[15]<<"  |  "<<setw(set[16])<<sec1[16]<<sec2[16]<<"  |  "<<setw(set[17])<<sec1[17]<<sec2[17]<<" |"<<endl;
                cout<<"---------------..-------------------------"<<endl;
                cout<<"|  "<<setw(set[6])<<sec1[6]<<sec2[6]<<"  |  "<<setw(set[7])<<sec1[7]<<sec2[7]<<"  |  "<<setw(set[8])<<sec1[8]<<sec2[8]<<"  |  "<<setw(set[9])<<sec1[9]<<sec2[9]<<"  |  "<<setw(set[10])<<sec1[10]<<sec2[10]<<"  |  "<<setw(set[11])<<sec1[11]<<sec2[11]<<" |"<<endl;
                cout<<"-,----------------------------------------"<<endl;
                cout<<"|  "<<setw(set[0])<<sec1[0]<<sec2[0]<<"  |  "<<setw(set[1])<<sec1[1]<<sec2[1]<<"  |  "<<setw(set[2])<<sec1[2]<<sec2[2]<<"  |  "<<setw(set[3])<<sec1[3]<<sec2[3]<<"  |  "<<setw(set[4])<<sec1[4]<<sec2[4]<<"  |  "<<setw(set[5])<<sec1[5]<<sec2[5]<<" |"<<endl;
                cout<<"------------------------------------------"<<endl;
                cout<<endl;
                cout<<"Player "<<playname2<<" WON !!"<<endl;
                exit(0);
            }
            if(sec2[i]==" "||sec2[i]=="X"){
                die++;
                continue;
            }
            if(i==36){
                break;
            }
            if(sec2[i]=="\0"){
                sec2[i]="X";
                if(i>=1){
                    sec2[i-1]=(" ");
                }
            }
        }
        if(sec2[6]=="X"&&sec2[7]=="\0"){
            sec2[6]="\0";
            sec2[5]="X";
            cout<<"DECREMENTED i.e YOU ARE demoted 1 box"<<endl;
        }
        if(sec2[14]=="X"&&sec2[15]=="\0"){
            sec2[16]="X";
            sec2[14]=" ";
            sec2[15]=" ";
            cout<<"INCREMENTED i.e promoted 2 box"<<endl;
        }
        if(sec2[18]=="X"&&sec2[19]=="\0"){
            sec2[19]="X";
            sec2[18]=" ";
            cout<<"INCREMENTED i.e promoted 1 box"<<endl;
        }
        if(sec2[19]=="X"&&sec2[20]=="\0"){
            sec2[19]="\0";
            sec2[18]="\0";
            sec2[17]="X";
            cout<<"DECREMENTED i.e demoted 2 box"<<endl;
        }
        if(sec2[22]=="X"&&sec2[23]=="\0"){
            sec2[21]="\0";
            sec2[22]="\0";
            sec2[20]="X";
            cout<<"DECREMENTED i.e demoted 2 box"<<endl;
        }
        if(sec2[28]=="X"&&sec2[29]=="\0"){
            sec2[28]="\0";
            sec2[27]="\0";
            sec2[26]="\0";
            sec2[25]="X";
            cout<<"DECREMENTED i.e demoted 3 box"<<endl;
        }
        if(sec2[31]=="X"&&sec2[32]=="\0"){
            sec2[31]="\0";
            sec2[30]="\0";
            sec2[29]="X";
            cout<<"DECREMENTED i.e demoted 2 box"<<endl;
        }
        file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Snake n Ladder Game/Snake n Ladder Game/assets/turn.txt",ios::out|ios::trunc);
        file.close();
        file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Snake n Ladder Game/Snake n Ladder Game/assets/turn.txt",ios::out);
        file<<1;
        file.close();
        file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Snake n Ladder Game/Snake n Ladder Game/assets/contineo1.txt",ios::out|ios::trunc);
        file.close();
        file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Snake n Ladder Game/Snake n Ladder Game/assets/contineo2.txt",ios::out|ios::trunc);
        file.close();
        file1.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Snake n Ladder Game/Snake n Ladder Game/assets/contineo1.txt",ios::out);
        file2.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Snake n Ladder Game/Snake n Ladder Game/assets/contineo2.txt",ios::out);
        for(int i = 0 ; i<35 ; i++){
            if(sec1[i]=="O"){
                file1<<i;
            }
            if(sec2[i]=="X"){
                file2<<i;
            }
        }
        file1.close();
        file2.close();
        for(int i = 0 ; i<36 ; i++){
            if(((sec1[i]==" ")||(sec1[i]=="O"))&&((sec2[i]==" ")||(sec2[i]=="X"))){
                set[i]=0;
            }
            if((sec1[i]=="\0")&&(sec2[i]=="\0")){
                set[i]=2;
            }
            if((sec1[i]=="\0")&&((sec2[i]==" ")||(sec2[i]=="X"))){
                set[i]=2;
            }
            if(((sec1[i]==" ")||(sec1[i]=="O"))&&(sec2[i]=="\0")){
                set[i]=2;
            }
        }
        cout<<"------------------------------------------"<<endl;
        cout<<"|              Snake n LADDER            |"<<endl;
        cout<<"------------------------------------------"<<endl;
        cout<<"------------------------------------------"<<endl;
        cout<<"|  "<<setw(set[30])<<sec1[30]<<sec2[30]<<"  |  "<<setw(set[31])<<sec1[31]<<sec2[31]<<"  |  "<<setw(set[32])<<sec1[32]<<sec2[32]<<"  |  "<<setw(set[33])<<sec1[33]<<sec2[33]<<"  |  "<<setw(set[34])<<sec1[34]<<sec2[34]<<"  |  "<<setw(set[35])<<sec1[35]<<sec2[35]<<" |"<<endl;
        cout<<"--------,,--------------------------------"<<endl;
        cout<<"|  "<<setw(set[24])<<sec1[24]<<sec2[24]<<"  |  "<<setw(set[25])<<sec1[25]<<sec2[25]<<"  |  "<<setw(set[26])<<sec1[26]<<sec2[26]<<"  |  "<<setw(set[27])<<sec1[27]<<sec2[27]<<"  |  "<<setw(set[28])<<sec1[28]<<sec2[28]<<"  |  "<<setw(set[29])<<sec1[29]<<sec2[29]<<" |"<<endl;
        cout<<"-----------------------------,,,----------"<<endl;
        cout<<"|  "<<setw(set[18])<<sec1[18]<<sec2[18]<<"  |  "<<setw(set[19])<<sec1[19]<<sec2[19]<<"  |  "<<setw(set[20])<<sec1[20]<<sec2[20]<<"  |  "<<setw(set[21])<<sec1[21]<<sec2[21]<<"  |  "<<setw(set[22])<<sec1[22]<<sec2[22]<<"  |  "<<setw(set[23])<<sec1[23]<<sec2[23]<<" |"<<endl;
        cout<<"-.-------,,------------------,,-----------"<<endl;
        cout<<"|  "<<setw(set[12])<<sec1[12]<<sec2[12]<<"  |  "<<setw(set[13])<<sec1[13]<<sec2[13]<<"  |  "<<setw(set[14])<<sec1[14]<<sec2[14]<<"  |  "<<setw(set[15])<<sec1[15]<<sec2[15]<<"  |  "<<setw(set[16])<<sec1[16]<<sec2[16]<<"  |  "<<setw(set[17])<<sec1[17]<<sec2[17]<<" |"<<endl;
        cout<<"---------------..-------------------------"<<endl;
        cout<<"|  "<<setw(set[6])<<sec1[6]<<sec2[6]<<"  |  "<<setw(set[7])<<sec1[7]<<sec2[7]<<"  |  "<<setw(set[8])<<sec1[8]<<sec2[8]<<"  |  "<<setw(set[9])<<sec1[9]<<sec2[9]<<"  |  "<<setw(set[10])<<sec1[10]<<sec2[10]<<"  |  "<<setw(set[11])<<sec1[11]<<sec2[11]<<" |"<<endl;
        cout<<"-,----------------------------------------"<<endl;
        cout<<"|  "<<setw(set[0])<<sec1[0]<<sec2[0]<<"  |  "<<setw(set[1])<<sec1[1]<<sec2[1]<<"  |  "<<setw(set[2])<<sec1[2]<<sec2[2]<<"  |  "<<setw(set[3])<<sec1[3]<<sec2[3]<<"  |  "<<setw(set[4])<<sec1[4]<<sec2[4]<<"  |  "<<setw(set[5])<<sec1[5]<<sec2[5]<<" |"<<endl;
        cout<<"------------------------------------------"<<endl;
        cout<<endl;
    }
    hardlevel(playname1, playname2);
}

void hardlevel(string playname1,string  playname2){
                        srand((unsigned) time(NULL));
                                string play1 = "\0" ,
                                       play2 = "\0" ;
                                        int die = 0 ;
    //1
    {
        cout<<"Player "<<playname1<<" turn enter 1 to start rolling die : ";
        while(true){
            cin>>play1;
            if(play1=="1"){
                break;
            }
            if(play1!="1"){
                cout<<"Wrong Input !!"<<endl;
                continue;
            }
        }
        if(play1=="1"){
            die=rand()%6;
            if(die==0){
                die=1;
            }
        }
        cout<<endl;
        cout<<endl;
        cout<<endl;
        cout<<"You get : "<<die<<" points from die rolling !"<<endl;
        cout<<"The score board is :-"<<endl;
        cout<<endl;
        for(int i = 0 ; i<die; i++){
            if(sec1[35]=="O"){
                file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Snake n Ladder Game/Snake n Ladder Game/assets/contineo1.txt",ios::out|ios::trunc);
                file.close();
                file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Snake n Ladder Game/Snake n Ladder Game/assets/contineo2.txt",ios::out|ios::trunc);
                file.close();
                file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Snake n Ladder Game/Snake n Ladder Game/assets/winners.txt",ios::out|ios::app);
                file<<playname1;
                file<<" won from ";
                file<<playname2;
                file<<"\n";
                file.close();
                for(int i = 0 ; i<36 ; i++){
                    if(((sec1[i]==" ")||(sec1[i]=="O"))&&((sec2[i]==" ")||(sec2[i]=="X"))){
                        set[i]=0;
                    }
                    if((sec1[i]=="\0")&&(sec2[i]=="\0")){
                        set[i]=2;
                    }
                    if((sec1[i]=="\0")&&((sec2[i]==" ")||(sec2[i]=="X"))){
                        set[i]=2;
                    }
                    if(((sec1[i]==" ")||(sec1[i]=="O"))&&(sec2[i]=="\0")){
                        set[i]=2;
                    }
                }
                cout<<"------------------------------------------"<<endl;
                cout<<"|              Snake n LADDER            |"<<endl;
                cout<<"------------------------------------------"<<endl;
                cout<<"------------------------------------------"<<endl;
                cout<<"|  "<<setw(set[30])<<sec1[30]<<sec2[30]<<"  |  "<<setw(set[31])<<sec1[31]<<sec2[31]<<"  |  "<<setw(set[32])<<sec1[32]<<sec2[32]<<"  |  "<<setw(set[33])<<sec1[33]<<sec2[33]<<"  |  "<<setw(set[34])<<sec1[34]<<sec2[34]<<"  |  "<<setw(set[35])<<sec1[35]<<sec2[35]<<" |"<<endl;
                cout<<"--------,,--------------------------------"<<endl;
                cout<<"|  "<<setw(set[24])<<sec1[24]<<sec2[24]<<"  |  "<<setw(set[25])<<sec1[25]<<sec2[25]<<"  |  "<<setw(set[26])<<sec1[26]<<sec2[26]<<"  |  "<<setw(set[27])<<sec1[27]<<sec2[27]<<"  |  "<<setw(set[28])<<sec1[28]<<sec2[28]<<"  |  "<<setw(set[29])<<sec1[29]<<sec2[29]<<" |"<<endl;
                cout<<"-----------------------------,,,----------"<<endl;
                cout<<"|  "<<setw(set[18])<<sec1[18]<<sec2[18]<<"  |  "<<setw(set[19])<<sec1[19]<<sec2[19]<<"  |  "<<setw(set[20])<<sec1[20]<<sec2[20]<<"  |  "<<setw(set[21])<<sec1[21]<<sec2[21]<<"  |  "<<setw(set[22])<<sec1[22]<<sec2[22]<<"  |  "<<setw(set[23])<<sec1[23]<<sec2[23]<<" |"<<endl;
                cout<<"-.-------,,------------------,,-----------"<<endl;
                cout<<"|  "<<setw(set[12])<<sec1[12]<<sec2[12]<<"  |  "<<setw(set[13])<<sec1[13]<<sec2[13]<<"  |  "<<setw(set[14])<<sec1[14]<<sec2[14]<<"  |  "<<setw(set[15])<<sec1[15]<<sec2[15]<<"  |  "<<setw(set[16])<<sec1[16]<<sec2[16]<<"  |  "<<setw(set[17])<<sec1[17]<<sec2[17]<<" |"<<endl;
                cout<<"---------------..-------------------------"<<endl;
                cout<<"|  "<<setw(set[6])<<sec1[6]<<sec2[6]<<"  |  "<<setw(set[7])<<sec1[7]<<sec2[7]<<"  |  "<<setw(set[8])<<sec1[8]<<sec2[8]<<"  |  "<<setw(set[9])<<sec1[9]<<sec2[9]<<"  |  "<<setw(set[10])<<sec1[10]<<sec2[10]<<"  |  "<<setw(set[11])<<sec1[11]<<sec2[11]<<" |"<<endl;
                cout<<"-,----------------------------------------"<<endl;
                cout<<"|  "<<setw(set[0])<<sec1[0]<<sec2[0]<<"  |  "<<setw(set[1])<<sec1[1]<<sec2[1]<<"  |  "<<setw(set[2])<<sec1[2]<<sec2[2]<<"  |  "<<setw(set[3])<<sec1[3]<<sec2[3]<<"  |  "<<setw(set[4])<<sec1[4]<<sec2[4]<<"  |  "<<setw(set[5])<<sec1[5]<<sec2[5]<<" |"<<endl;
                cout<<"------------------------------------------"<<endl;
                cout<<endl;
                cout<<"Player "<<playname1<<" WON !!"<<endl;
                exit(0);
            }
            if(sec1[i]==" "||sec1[i]=="O"){
                die++;
                continue;
            }
            if(i==36){
                break;
            }
            if(sec1[i]=="\0"){
                sec1[i]=("O");
                if(i>=1){
                    sec1[i-1]=(" ");
                }
            }
        }
        if(sec1[6]=="O"&&sec1[7]=="\0"){
            sec1[6]="\0";
            sec1[5]="O";
            cout<<"DECREMENTED i.e YOU ARE demoted 1 box"<<endl;
        }
        if(sec1[14]=="O"&&sec1[15]=="\0"){
            sec1[16]="O";
            sec1[14]=" ";
            sec1[15]=" ";
            cout<<"INCREMENTED i.e promoted 2 box"<<endl;
        }
        if(sec1[18]=="O"&&sec1[19]=="\0"){
            sec1[19]="O";
            sec1[18]=" ";
            cout<<"INCREMENTED i.e promoted 1 box"<<endl;
        }
        if(sec1[19]=="O"&&sec1[20]=="\0"){
            sec1[19]="\0";
            sec1[18]="\0";
            sec1[17]="O";
            cout<<"DECREMENTED i.e demoted 2 box"<<endl;
        }
        if(sec1[22]=="O"&&sec1[23]=="\0"){
            sec1[21]="\0";
            sec1[22]="\0";
            sec1[20]="O";
            cout<<"DECREMENTED i.e demoted 2 box"<<endl;
        }
        if(sec1[28]=="X"&&sec1[29]=="\0"){
            sec1[28]="\0";
            sec1[27]="\0";
            sec1[26]="\0";
            sec1[25]="X";
            cout<<"DECREMENTED i.e demoted 3 box"<<endl;
        }
        if(sec1[31]=="O"&&sec1[32]=="\0"){
            sec1[31]="\0";
            sec1[30]="\0";
            sec1[29]="O";
            cout<<"DECREMENTED i.e demoted 2 box"<<endl;
        }
        file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Snake n Ladder Game/Snake n Ladder Game/assets/turn.txt",ios::out|ios::trunc);
        file.close();
        file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Snake n Ladder Game/Snake n Ladder Game/assets/turn.txt",ios::out);
        file<<0;
        file.close();
        file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Snake n Ladder Game/Snake n Ladder Game/assets/contineo1.txt",ios::out|ios::trunc);
        file.close();
        file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Snake n Ladder Game/Snake n Ladder Game/assets/contineo2.txt",ios::out|ios::trunc);
        file.close();
        file1.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Snake n Ladder Game/Snake n Ladder Game/assets/contineo1.txt",ios::out);
        file2.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Snake n Ladder Game/Snake n Ladder Game/assets/contineo2.txt",ios::out);
        for(int i = 0 ; i<35 ; i++){
            if(sec1[i]=="O"){
                file1<<i;
            }
            if(sec2[i]=="X"){
                file2<<i;
            }
        }
        file1.close();
        file2.close();
        for(int i = 0 ; i<36 ; i++){
            if(((sec1[i]==" ")||(sec1[i]=="O"))&&((sec2[i]==" ")||(sec2[i]=="X"))){
                set[i]=0;
            }
            if((sec1[i]=="\0")&&(sec2[i]=="\0")){
                set[i]=2;
            }
            if((sec1[i]=="\0")&&((sec2[i]==" ")||(sec2[i]=="X"))){
                set[i]=2;
            }
            if(((sec1[i]==" ")||(sec1[i]=="O"))&&(sec2[i]=="\0")){
                set[i]=2;
            }
        }
        cout<<"------------------------------------------"<<endl;
        cout<<"|              Snake n LADDER            |"<<endl;
        cout<<"------------------------------------------"<<endl;
        cout<<"------------------------------------------"<<endl;
        cout<<"|  "<<setw(set[30])<<sec1[30]<<sec2[30]<<"  |  "<<setw(set[31])<<sec1[31]<<sec2[31]<<"  |  "<<setw(set[32])<<sec1[32]<<sec2[32]<<"  |  "<<setw(set[33])<<sec1[33]<<sec2[33]<<"  |  "<<setw(set[34])<<sec1[34]<<sec2[34]<<"  |  "<<setw(set[35])<<sec1[35]<<sec2[35]<<" |"<<endl;
        cout<<"--------,,--------------------------------"<<endl;
        cout<<"|  "<<setw(set[24])<<sec1[24]<<sec2[24]<<"  |  "<<setw(set[25])<<sec1[25]<<sec2[25]<<"  |  "<<setw(set[26])<<sec1[26]<<sec2[26]<<"  |  "<<setw(set[27])<<sec1[27]<<sec2[27]<<"  |  "<<setw(set[28])<<sec1[28]<<sec2[28]<<"  |  "<<setw(set[29])<<sec1[29]<<sec2[29]<<" |"<<endl;
        cout<<"-----------------------------,,,----------"<<endl;
        cout<<"|  "<<setw(set[18])<<sec1[18]<<sec2[18]<<"  |  "<<setw(set[19])<<sec1[19]<<sec2[19]<<"  |  "<<setw(set[20])<<sec1[20]<<sec2[20]<<"  |  "<<setw(set[21])<<sec1[21]<<sec2[21]<<"  |  "<<setw(set[22])<<sec1[22]<<sec2[22]<<"  |  "<<setw(set[23])<<sec1[23]<<sec2[23]<<" |"<<endl;
        cout<<"-.-------,,------------------,,-----------"<<endl;
        cout<<"|  "<<setw(set[12])<<sec1[12]<<sec2[12]<<"  |  "<<setw(set[13])<<sec1[13]<<sec2[13]<<"  |  "<<setw(set[14])<<sec1[14]<<sec2[14]<<"  |  "<<setw(set[15])<<sec1[15]<<sec2[15]<<"  |  "<<setw(set[16])<<sec1[16]<<sec2[16]<<"  |  "<<setw(set[17])<<sec1[17]<<sec2[17]<<" |"<<endl;
        cout<<"---------------..-------------------------"<<endl;
        cout<<"|  "<<setw(set[6])<<sec1[6]<<sec2[6]<<"  |  "<<setw(set[7])<<sec1[7]<<sec2[7]<<"  |  "<<setw(set[8])<<sec1[8]<<sec2[8]<<"  |  "<<setw(set[9])<<sec1[9]<<sec2[9]<<"  |  "<<setw(set[10])<<sec1[10]<<sec2[10]<<"  |  "<<setw(set[11])<<sec1[11]<<sec2[11]<<" |"<<endl;
        cout<<"-,----------------------------------------"<<endl;
        cout<<"|  "<<setw(set[0])<<sec1[0]<<sec2[0]<<"  |  "<<setw(set[1])<<sec1[1]<<sec2[1]<<"  |  "<<setw(set[2])<<sec1[2]<<sec2[2]<<"  |  "<<setw(set[3])<<sec1[3]<<sec2[3]<<"  |  "<<setw(set[4])<<sec1[4]<<sec2[4]<<"  |  "<<setw(set[5])<<sec1[5]<<sec2[5]<<" |"<<endl;
        cout<<"------------------------------------------"<<endl;
        cout<<endl;
    }
    //2
    {
        cout<<"Player "<<playname2<<" turn enter 1 to start rolling die : ";
        while(true){
            cin>>play2;
            if(play2=="1"){
                break;
            }
            if(play2!="1"){
                cout<<"Wrong Input !!"<<endl;
                continue;
            }
        }
        if(play2=="1"){
            die=rand()%6;
            if(die==0){
                die=1;
            }
        }
        cout<<endl;
        cout<<endl;
        cout<<endl;
        cout<<"You get : "<<die<<" points from die rolling !"<<endl;
        cout<<"The score board is :-"<<endl;
        cout<<endl;
        for(int i = 0 ; i < die ; i++){
            if(sec2[35]=="X"){
                file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Snake n Ladder Game/Snake n Ladder Game/assets/contineo1.txt",ios::out|ios::trunc);
                file.close();
                file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Snake n Ladder Game/Snake n Ladder Game/assets/contineo2.txt",ios::out|ios::trunc);
                file.close();
                file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Snake n Ladder Game/Snake n Ladder Game/assets/winners.txt",ios::out|ios::app);
                file<<playname2;
                file<<" won from ";
                file<<playname1;
                file<<"\n";
                file.close();
                for(int i = 0 ; i<36 ; i++){
                    if(((sec1[i]==" ")||(sec1[i]=="O"))&&((sec2[i]==" ")||(sec2[i]=="X"))){
                        set[i]=0;
                    }
                    if((sec1[i]=="\0")&&(sec2[i]=="\0")){
                        set[i]=2;
                    }
                    if((sec1[i]=="\0")&&((sec2[i]==" ")||(sec2[i]=="X"))){
                        set[i]=2;
                    }
                    if(((sec1[i]==" ")||(sec1[i]=="O"))&&(sec2[i]=="\0")){
                        set[i]=2;
                    }
                }
                cout<<"------------------------------------------"<<endl;
                cout<<"|              Snake n LADDER            |"<<endl;
                cout<<"------------------------------------------"<<endl;
                cout<<"------------------------------------------"<<endl;
                cout<<"|  "<<setw(set[30])<<sec1[30]<<sec2[30]<<"  |  "<<setw(set[31])<<sec1[31]<<sec2[31]<<"  |  "<<setw(set[32])<<sec1[32]<<sec2[32]<<"  |  "<<setw(set[33])<<sec1[33]<<sec2[33]<<"  |  "<<setw(set[34])<<sec1[34]<<sec2[34]<<"  |  "<<setw(set[35])<<sec1[35]<<sec2[35]<<" |"<<endl;
                cout<<"--------,,--------------------------------"<<endl;
                cout<<"|  "<<setw(set[24])<<sec1[24]<<sec2[24]<<"  |  "<<setw(set[25])<<sec1[25]<<sec2[25]<<"  |  "<<setw(set[26])<<sec1[26]<<sec2[26]<<"  |  "<<setw(set[27])<<sec1[27]<<sec2[27]<<"  |  "<<setw(set[28])<<sec1[28]<<sec2[28]<<"  |  "<<setw(set[29])<<sec1[29]<<sec2[29]<<" |"<<endl;
                cout<<"-----------------------------,,,----------"<<endl;
                cout<<"|  "<<setw(set[18])<<sec1[18]<<sec2[18]<<"  |  "<<setw(set[19])<<sec1[19]<<sec2[19]<<"  |  "<<setw(set[20])<<sec1[20]<<sec2[20]<<"  |  "<<setw(set[21])<<sec1[21]<<sec2[21]<<"  |  "<<setw(set[22])<<sec1[22]<<sec2[22]<<"  |  "<<setw(set[23])<<sec1[23]<<sec2[23]<<" |"<<endl;
                cout<<"-.-------,,------------------,,-----------"<<endl;
                cout<<"|  "<<setw(set[12])<<sec1[12]<<sec2[12]<<"  |  "<<setw(set[13])<<sec1[13]<<sec2[13]<<"  |  "<<setw(set[14])<<sec1[14]<<sec2[14]<<"  |  "<<setw(set[15])<<sec1[15]<<sec2[15]<<"  |  "<<setw(set[16])<<sec1[16]<<sec2[16]<<"  |  "<<setw(set[17])<<sec1[17]<<sec2[17]<<" |"<<endl;
                cout<<"---------------..-------------------------"<<endl;
                cout<<"|  "<<setw(set[6])<<sec1[6]<<sec2[6]<<"  |  "<<setw(set[7])<<sec1[7]<<sec2[7]<<"  |  "<<setw(set[8])<<sec1[8]<<sec2[8]<<"  |  "<<setw(set[9])<<sec1[9]<<sec2[9]<<"  |  "<<setw(set[10])<<sec1[10]<<sec2[10]<<"  |  "<<setw(set[11])<<sec1[11]<<sec2[11]<<" |"<<endl;
                cout<<"-,----------------------------------------"<<endl;
                cout<<"|  "<<setw(set[0])<<sec1[0]<<sec2[0]<<"  |  "<<setw(set[1])<<sec1[1]<<sec2[1]<<"  |  "<<setw(set[2])<<sec1[2]<<sec2[2]<<"  |  "<<setw(set[3])<<sec1[3]<<sec2[3]<<"  |  "<<setw(set[4])<<sec1[4]<<sec2[4]<<"  |  "<<setw(set[5])<<sec1[5]<<sec2[5]<<" |"<<endl;
                cout<<"------------------------------------------"<<endl;
                cout<<endl;
                cout<<"Player "<<playname2<<" WON !!"<<endl;
                exit(0);
            }
            if(sec2[i]==" "||sec2[i]=="X"){
                die++;
                continue;
            }
            if(i==36){
                break;
            }
            if(sec2[i]=="\0"){
                sec2[i]="X";
                if(i>=1){
                    sec2[i-1]=(" ");
                }
            }
        }
        if(sec2[6]=="X"&&sec2[7]=="\0"){
            sec2[6]="\0";
            sec2[5]="X";
            cout<<"DECREMENTED i.e YOU ARE demoted 1 box"<<endl;
        }
        if(sec2[14]=="X"&&sec2[15]=="\0"){
            sec2[16]="X";
            sec2[14]=" ";
            sec2[15]=" ";
            cout<<"INCREMENTED i.e promoted 2 box"<<endl;
        }
        if(sec2[18]=="X"&&sec2[19]=="\0"){
            sec2[19]="X";
            sec2[18]=" ";
            cout<<"INCREMENTED i.e promoted 1 box"<<endl;
        }
        if(sec2[19]=="X"&&sec2[20]=="\0"){
            sec2[19]="\0";
            sec2[18]="\0";
            sec2[17]="X";
            cout<<"DECREMENTED i.e demoted 2 box"<<endl;
        }
        if(sec2[22]=="X"&&sec2[23]=="\0"){
            sec2[21]="\0";
            sec2[22]="\0";
            sec2[20]="X";
            cout<<"DECREMENTED i.e demoted 2 box"<<endl;
        }
        if(sec2[28]=="X"&&sec2[29]=="\0"){
            sec2[28]="\0";
            sec2[27]="\0";
            sec2[26]="\0";
            sec2[25]="X";
            cout<<"DECREMENTED i.e demoted 3 box"<<endl;
        }
        if(sec2[31]=="X"&&sec2[32]=="\0"){
            sec2[31]="\0";
            sec2[30]="\0";
            sec2[29]="X";
            cout<<"DECREMENTED i.e demoted 2 box"<<endl;
        }
        file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Snake n Ladder Game/Snake n Ladder Game/assets/turn.txt",ios::out|ios::trunc);
        file.close();
        file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Snake n Ladder Game/Snake n Ladder Game/assets/turn.txt",ios::out);
        file<<1;
        file.close();
        file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Snake n Ladder Game/Snake n Ladder Game/assets/contineo1.txt",ios::out|ios::trunc);
        file.close();
        file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Snake n Ladder Game/Snake n Ladder Game/assets/contineo2.txt",ios::out|ios::trunc);
        file.close();
        file1.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Snake n Ladder Game/Snake n Ladder Game/assets/contineo1.txt",ios::out);
        file2.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Snake n Ladder Game/Snake n Ladder Game/assets/contineo2.txt",ios::out);
        for(int i = 0 ; i<35 ; i++){
            if(sec1[i]=="O"){
                file1<<i;
            }
            if(sec2[i]=="X"){
                file2<<i;
            }
        }
        file1.close();
        file2.close();
        for(int i = 0 ; i<36 ; i++){
            if(((sec1[i]==" ")||(sec1[i]=="O"))&&((sec2[i]==" ")||(sec2[i]=="X"))){
                set[i]=0;
            }
            if((sec1[i]=="\0")&&(sec2[i]=="\0")){
                set[i]=2;
            }
            if((sec1[i]=="\0")&&((sec2[i]==" ")||(sec2[i]=="X"))){
                set[i]=2;
            }
            if(((sec1[i]==" ")||(sec1[i]=="O"))&&(sec2[i]=="\0")){
                set[i]=2;
            }
        }
        cout<<"------------------------------------------"<<endl;
        cout<<"|              Snake n LADDER            |"<<endl;
        cout<<"------------------------------------------"<<endl;
        cout<<"------------------------------------------"<<endl;
        cout<<"|  "<<setw(set[30])<<sec1[30]<<sec2[30]<<"  |  "<<setw(set[31])<<sec1[31]<<sec2[31]<<"  |  "<<setw(set[32])<<sec1[32]<<sec2[32]<<"  |  "<<setw(set[33])<<sec1[33]<<sec2[33]<<"  |  "<<setw(set[34])<<sec1[34]<<sec2[34]<<"  |  "<<setw(set[35])<<sec1[35]<<sec2[35]<<" |"<<endl;
        cout<<"--------,,--------------------------------"<<endl;
        cout<<"|  "<<setw(set[24])<<sec1[24]<<sec2[24]<<"  |  "<<setw(set[25])<<sec1[25]<<sec2[25]<<"  |  "<<setw(set[26])<<sec1[26]<<sec2[26]<<"  |  "<<setw(set[27])<<sec1[27]<<sec2[27]<<"  |  "<<setw(set[28])<<sec1[28]<<sec2[28]<<"  |  "<<setw(set[29])<<sec1[29]<<sec2[29]<<" |"<<endl;
        cout<<"-----------------------------,,,----------"<<endl;
        cout<<"|  "<<setw(set[18])<<sec1[18]<<sec2[18]<<"  |  "<<setw(set[19])<<sec1[19]<<sec2[19]<<"  |  "<<setw(set[20])<<sec1[20]<<sec2[20]<<"  |  "<<setw(set[21])<<sec1[21]<<sec2[21]<<"  |  "<<setw(set[22])<<sec1[22]<<sec2[22]<<"  |  "<<setw(set[23])<<sec1[23]<<sec2[23]<<" |"<<endl;
        cout<<"-.-------,,------------------,,-----------"<<endl;
        cout<<"|  "<<setw(set[12])<<sec1[12]<<sec2[12]<<"  |  "<<setw(set[13])<<sec1[13]<<sec2[13]<<"  |  "<<setw(set[14])<<sec1[14]<<sec2[14]<<"  |  "<<setw(set[15])<<sec1[15]<<sec2[15]<<"  |  "<<setw(set[16])<<sec1[16]<<sec2[16]<<"  |  "<<setw(set[17])<<sec1[17]<<sec2[17]<<" |"<<endl;
        cout<<"---------------..-------------------------"<<endl;
        cout<<"|  "<<setw(set[6])<<sec1[6]<<sec2[6]<<"  |  "<<setw(set[7])<<sec1[7]<<sec2[7]<<"  |  "<<setw(set[8])<<sec1[8]<<sec2[8]<<"  |  "<<setw(set[9])<<sec1[9]<<sec2[9]<<"  |  "<<setw(set[10])<<sec1[10]<<sec2[10]<<"  |  "<<setw(set[11])<<sec1[11]<<sec2[11]<<" |"<<endl;
        cout<<"-,----------------------------------------"<<endl;
        cout<<"|  "<<setw(set[0])<<sec1[0]<<sec2[0]<<"  |  "<<setw(set[1])<<sec1[1]<<sec2[1]<<"  |  "<<setw(set[2])<<sec1[2]<<sec2[2]<<"  |  "<<setw(set[3])<<sec1[3]<<sec2[3]<<"  |  "<<setw(set[4])<<sec1[4]<<sec2[4]<<"  |  "<<setw(set[5])<<sec1[5]<<sec2[5]<<" |"<<endl;
        cout<<"------------------------------------------"<<endl;
        cout<<endl;
    }
    hardlevel(playname1, playname2);
}

void mediumlevel(string playname1,string  playname2){
                        srand((unsigned) time(NULL));
                                string play1 = "\0" ,
                                       play2 = "\0" ;
                                        int die = 0 ;
    //1
    {
        cout<<"Player "<<playname1<<" turn enter 1 to start rolling die : ";
        while(true){
            cin>>play1;
            if(play1=="1"){
                break;
            }
            if(play1!="1"){
                cout<<"Wrong Input !!"<<endl;
                continue;
            }
        }
        if(play1=="1"){
            die=rand()%6;
            if(die==0){
                die=1;
            }
        }
        cout<<endl;
        cout<<endl;
        cout<<endl;
        cout<<"You get : "<<die<<" points from die rolling !"<<endl;
        cout<<"The score board is :-"<<endl;
        cout<<endl;
        for(int i = 0 ; i<die; i++){
            if(sec1[35]=="O"){
                file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Snake n Ladder Game/Snake n Ladder Game/assets/contineo1.txt",ios::out|ios::trunc);
                file.close();
                file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Snake n Ladder Game/Snake n Ladder Game/assets/contineo2.txt",ios::out|ios::trunc);
                file.close();
                file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Snake n Ladder Game/Snake n Ladder Game/assets/winners.txt",ios::out|ios::app);
                file<<playname1;
                file<<" won from ";
                file<<playname2;
                file<<"\n";
                file.close();
                for(int i = 0 ; i<36 ; i++){
                    if(((sec1[i]==" ")||(sec1[i]=="O"))&&((sec2[i]==" ")||(sec2[i]=="X"))){
                        set[i]=0;
                    }
                    if((sec1[i]=="\0")&&(sec2[i]=="\0")){
                        set[i]=2;
                    }
                    if((sec1[i]=="\0")&&((sec2[i]==" ")||(sec2[i]=="X"))){
                        set[i]=2;
                    }
                    if(((sec1[i]==" ")||(sec1[i]=="O"))&&(sec2[i]=="\0")){
                        set[i]=2;
                    }
                }
                cout<<"------------------------------------------"<<endl;
                cout<<"|              Snake n LADDER            |"<<endl;
                cout<<"------------------------------------------"<<endl;
                cout<<"------------------------------------------"<<endl;
                cout<<"|  "<<setw(set[30])<<sec1[30]<<sec2[30]<<"  |  "<<setw(set[31])<<sec1[31]<<sec2[31]<<"  |  "<<setw(set[32])<<sec1[32]<<sec2[32]<<"  |  "<<setw(set[33])<<sec1[33]<<sec2[33]<<"  |  "<<setw(set[34])<<sec1[34]<<sec2[34]<<"  |  "<<setw(set[35])<<sec1[35]<<sec2[35]<<" |"<<endl;
                cout<<"--------,,--------------------------------"<<endl;
                cout<<"|  "<<setw(set[24])<<sec1[24]<<sec2[24]<<"  |  "<<setw(set[25])<<sec1[25]<<sec2[25]<<"  |  "<<setw(set[26])<<sec1[26]<<sec2[26]<<"  |  "<<setw(set[27])<<sec1[27]<<sec2[27]<<"  |  "<<setw(set[28])<<sec1[28]<<sec2[28]<<"  |  "<<setw(set[29])<<sec1[29]<<sec2[29]<<" |"<<endl;
                cout<<"------------------------------------------"<<endl;
                cout<<"|  "<<setw(set[18])<<sec1[18]<<sec2[18]<<"  |  "<<setw(set[19])<<sec1[19]<<sec2[19]<<"  |  "<<setw(set[20])<<sec1[20]<<sec2[20]<<"  |  "<<setw(set[21])<<sec1[21]<<sec2[21]<<"  |  "<<setw(set[22])<<sec1[22]<<sec2[22]<<"  |  "<<setw(set[23])<<sec1[23]<<sec2[23]<<" |"<<endl;
                cout<<"-.-------,,------------------,,-----------"<<endl;
                cout<<"|  "<<setw(set[12])<<sec1[12]<<sec2[12]<<"  |  "<<setw(set[13])<<sec1[13]<<sec2[13]<<"  |  "<<setw(set[14])<<sec1[14]<<sec2[14]<<"  |  "<<setw(set[15])<<sec1[15]<<sec2[15]<<"  |  "<<setw(set[16])<<sec1[16]<<sec2[16]<<"  |  "<<setw(set[17])<<sec1[17]<<sec2[17]<<" |"<<endl;
                cout<<"---------------..-------------------------"<<endl;
                cout<<"|  "<<setw(set[6])<<sec1[6]<<sec2[6]<<"  |  "<<setw(set[7])<<sec1[7]<<sec2[7]<<"  |  "<<setw(set[8])<<sec1[8]<<sec2[8]<<"  |  "<<setw(set[9])<<sec1[9]<<sec2[9]<<"  |  "<<setw(set[10])<<sec1[10]<<sec2[10]<<"  |  "<<setw(set[11])<<sec1[11]<<sec2[11]<<" |"<<endl;
                cout<<"-,----------------------------------------"<<endl;
                cout<<"|  "<<setw(set[0])<<sec1[0]<<sec2[0]<<"  |  "<<setw(set[1])<<sec1[1]<<sec2[1]<<"  |  "<<setw(set[2])<<sec1[2]<<sec2[2]<<"  |  "<<setw(set[3])<<sec1[3]<<sec2[3]<<"  |  "<<setw(set[4])<<sec1[4]<<sec2[4]<<"  |  "<<setw(set[5])<<sec1[5]<<sec2[5]<<" |"<<endl;
                cout<<"------------------------------------------"<<endl;
                cout<<endl;
                cout<<"Player "<<playname1<<" WON !!"<<endl;
                exit(0);
            }
            if(sec1[i]==" "||sec1[i]=="O"){
                die++;
                continue;
            }
            if(i==36){
                break;
            }
            if(sec1[i]=="\0"){
                sec1[i]=("O");
                if(i>=1){
                    sec1[i-1]=(" ");
                }
            }
        }
        if(sec1[6]=="O"&&sec1[7]=="\0"){
            sec1[6]="\0";
            sec1[5]="O";
            cout<<"DECREMENTED i.e YOU ARE demoted 1 box"<<endl;
        }
        if(sec1[14]=="O"&&sec1[15]=="\0"){
            sec1[16]="O";
            sec1[14]=" ";
            sec1[15]=" ";
            cout<<"INCREMENTED i.e promoted 2 box"<<endl;
        }
        if(sec1[18]=="O"&&sec1[19]=="\0"){
            sec1[19]="O";
            sec1[18]=" ";
            cout<<"INCREMENTED i.e promoted 1 box"<<endl;
        }
        if(sec1[22]=="O"&&sec1[23]=="\0"){
            sec1[21]="\0";
            sec1[22]="\0";
            sec1[20]="O";
            cout<<"DECREMENTED i.e demoted 2 box"<<endl;
        }
        if(sec1[31]=="O"&&sec1[32]=="\0"){
            sec1[31]="\0";
            sec1[30]="\0";
            sec1[29]="O";
            cout<<"DECREMENTED i.e demoted 2 box"<<endl;
        }
        file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Snake n Ladder Game/Snake n Ladder Game/assets/turn.txt",ios::out|ios::trunc);
        file.close();
        file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Snake n Ladder Game/Snake n Ladder Game/assets/turn.txt",ios::out);
        file<<0;
        file.close();
        file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Snake n Ladder Game/Snake n Ladder Game/assets/contineo1.txt",ios::out|ios::trunc);
        file.close();
        file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Snake n Ladder Game/Snake n Ladder Game/assets/contineo2.txt",ios::out|ios::trunc);
        file.close();
        file1.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Snake n Ladder Game/Snake n Ladder Game/assets/contineo1.txt",ios::out);
        file2.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Snake n Ladder Game/Snake n Ladder Game/assets/contineo2.txt",ios::out);
        for(int i = 0 ; i<35 ; i++){
            if(sec1[i]=="O"){
                file1<<i;
            }
            if(sec2[i]=="X"){
                file2<<i;
            }
        }
        file1.close();
        file2.close();
        for(int i = 0 ; i<36 ; i++){
            if(((sec1[i]==" ")||(sec1[i]=="O"))&&((sec2[i]==" ")||(sec2[i]=="X"))){
                set[i]=0;
            }
            if((sec1[i]=="\0")&&(sec2[i]=="\0")){
                set[i]=2;
            }
            if((sec1[i]=="\0")&&((sec2[i]==" ")||(sec2[i]=="X"))){
                set[i]=2;
            }
            if(((sec1[i]==" ")||(sec1[i]=="O"))&&(sec2[i]=="\0")){
                set[i]=2;
            }
        }
        cout<<"------------------------------------------"<<endl;
        cout<<"|              Snake n LADDER            |"<<endl;
        cout<<"------------------------------------------"<<endl;
        cout<<"------------------------------------------"<<endl;
        cout<<"|  "<<setw(set[30])<<sec1[30]<<sec2[30]<<"  |  "<<setw(set[31])<<sec1[31]<<sec2[31]<<"  |  "<<setw(set[32])<<sec1[32]<<sec2[32]<<"  |  "<<setw(set[33])<<sec1[33]<<sec2[33]<<"  |  "<<setw(set[34])<<sec1[34]<<sec2[34]<<"  |  "<<setw(set[35])<<sec1[35]<<sec2[35]<<" |"<<endl;
        cout<<"--------,,--------------------------------"<<endl;
        cout<<"|  "<<setw(set[24])<<sec1[24]<<sec2[24]<<"  |  "<<setw(set[25])<<sec1[25]<<sec2[25]<<"  |  "<<setw(set[26])<<sec1[26]<<sec2[26]<<"  |  "<<setw(set[27])<<sec1[27]<<sec2[27]<<"  |  "<<setw(set[28])<<sec1[28]<<sec2[28]<<"  |  "<<setw(set[29])<<sec1[29]<<sec2[29]<<" |"<<endl;
        cout<<"------------------------------------------"<<endl;
        cout<<"|  "<<setw(set[18])<<sec1[18]<<sec2[18]<<"  |  "<<setw(set[19])<<sec1[19]<<sec2[19]<<"  |  "<<setw(set[20])<<sec1[20]<<sec2[20]<<"  |  "<<setw(set[21])<<sec1[21]<<sec2[21]<<"  |  "<<setw(set[22])<<sec1[22]<<sec2[22]<<"  |  "<<setw(set[23])<<sec1[23]<<sec2[23]<<" |"<<endl;
        cout<<"-.-------,,------------------,,-----------"<<endl;
        cout<<"|  "<<setw(set[12])<<sec1[12]<<sec2[12]<<"  |  "<<setw(set[13])<<sec1[13]<<sec2[13]<<"  |  "<<setw(set[14])<<sec1[14]<<sec2[14]<<"  |  "<<setw(set[15])<<sec1[15]<<sec2[15]<<"  |  "<<setw(set[16])<<sec1[16]<<sec2[16]<<"  |  "<<setw(set[17])<<sec1[17]<<sec2[17]<<" |"<<endl;
        cout<<"---------------..-------------------------"<<endl;
        cout<<"|  "<<setw(set[6])<<sec1[6]<<sec2[6]<<"  |  "<<setw(set[7])<<sec1[7]<<sec2[7]<<"  |  "<<setw(set[8])<<sec1[8]<<sec2[8]<<"  |  "<<setw(set[9])<<sec1[9]<<sec2[9]<<"  |  "<<setw(set[10])<<sec1[10]<<sec2[10]<<"  |  "<<setw(set[11])<<sec1[11]<<sec2[11]<<" |"<<endl;
        cout<<"-,----------------------------------------"<<endl;
        cout<<"|  "<<setw(set[0])<<sec1[0]<<sec2[0]<<"  |  "<<setw(set[1])<<sec1[1]<<sec2[1]<<"  |  "<<setw(set[2])<<sec1[2]<<sec2[2]<<"  |  "<<setw(set[3])<<sec1[3]<<sec2[3]<<"  |  "<<setw(set[4])<<sec1[4]<<sec2[4]<<"  |  "<<setw(set[5])<<sec1[5]<<sec2[5]<<" |"<<endl;
        cout<<"------------------------------------------"<<endl;
        cout<<endl;
    }
    //2
    {
        cout<<"Player "<<playname2<<" turn enter 1 to start rolling die : ";
        while(true){
            cin>>play2;
            if(play2=="1"){
                break;
            }
            if(play2!="1"){
                cout<<"Wrong Input !!"<<endl;
                continue;
            }
        }
        if(play2=="1"){
            die=rand()%6;
            if(die==0){
                die=1;
            }
        }
        cout<<endl;
        cout<<endl;
        cout<<endl;
        cout<<"You get : "<<die<<" points from die rolling !"<<endl;
        cout<<"The score board is :-"<<endl;
        cout<<endl;
        for(int i = 0 ; i < die ; i++){
            if(sec2[35]=="X"){
                file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Snake n Ladder Game/Snake n Ladder Game/assets/contineo1.txt",ios::out|ios::trunc);
                file.close();
                file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Snake n Ladder Game/Snake n Ladder Game/assets/contineo2.txt",ios::out|ios::trunc);
                file.close();
                file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Snake n Ladder Game/Snake n Ladder Game/assets/winners.txt",ios::out|ios::app);
                file<<playname2;
                file<<" won from ";
                file<<playname1;
                file<<"\n";
                file.close();
                for(int i = 0 ; i<36 ; i++){
                    if(((sec1[i]==" ")||(sec1[i]=="O"))&&((sec2[i]==" ")||(sec2[i]=="X"))){
                        set[i]=0;
                    }
                    if((sec1[i]=="\0")&&(sec2[i]=="\0")){
                        set[i]=2;
                    }
                    if((sec1[i]=="\0")&&((sec2[i]==" ")||(sec2[i]=="X"))){
                        set[i]=2;
                    }
                    if(((sec1[i]==" ")||(sec1[i]=="O"))&&(sec2[i]=="\0")){
                        set[i]=2;
                    }
                }
                cout<<"------------------------------------------"<<endl;
                cout<<"|              Snake n LADDER            |"<<endl;
                cout<<"------------------------------------------"<<endl;
                cout<<"------------------------------------------"<<endl;
                cout<<"|  "<<setw(set[30])<<sec1[30]<<sec2[30]<<"  |  "<<setw(set[31])<<sec1[31]<<sec2[31]<<"  |  "<<setw(set[32])<<sec1[32]<<sec2[32]<<"  |  "<<setw(set[33])<<sec1[33]<<sec2[33]<<"  |  "<<setw(set[34])<<sec1[34]<<sec2[34]<<"  |  "<<setw(set[35])<<sec1[35]<<sec2[35]<<" |"<<endl;
                cout<<"--------,,--------------------------------"<<endl;
                cout<<"|  "<<setw(set[24])<<sec1[24]<<sec2[24]<<"  |  "<<setw(set[25])<<sec1[25]<<sec2[25]<<"  |  "<<setw(set[26])<<sec1[26]<<sec2[26]<<"  |  "<<setw(set[27])<<sec1[27]<<sec2[27]<<"  |  "<<setw(set[28])<<sec1[28]<<sec2[28]<<"  |  "<<setw(set[29])<<sec1[29]<<sec2[29]<<" |"<<endl;
                cout<<"------------------------------------------"<<endl;
                cout<<"|  "<<setw(set[18])<<sec1[18]<<sec2[18]<<"  |  "<<setw(set[19])<<sec1[19]<<sec2[19]<<"  |  "<<setw(set[20])<<sec1[20]<<sec2[20]<<"  |  "<<setw(set[21])<<sec1[21]<<sec2[21]<<"  |  "<<setw(set[22])<<sec1[22]<<sec2[22]<<"  |  "<<setw(set[23])<<sec1[23]<<sec2[23]<<" |"<<endl;
                cout<<"-.-------,,------------------,,-----------"<<endl;
                cout<<"|  "<<setw(set[12])<<sec1[12]<<sec2[12]<<"  |  "<<setw(set[13])<<sec1[13]<<sec2[13]<<"  |  "<<setw(set[14])<<sec1[14]<<sec2[14]<<"  |  "<<setw(set[15])<<sec1[15]<<sec2[15]<<"  |  "<<setw(set[16])<<sec1[16]<<sec2[16]<<"  |  "<<setw(set[17])<<sec1[17]<<sec2[17]<<" |"<<endl;
                cout<<"---------------..-------------------------"<<endl;
                cout<<"|  "<<setw(set[6])<<sec1[6]<<sec2[6]<<"  |  "<<setw(set[7])<<sec1[7]<<sec2[7]<<"  |  "<<setw(set[8])<<sec1[8]<<sec2[8]<<"  |  "<<setw(set[9])<<sec1[9]<<sec2[9]<<"  |  "<<setw(set[10])<<sec1[10]<<sec2[10]<<"  |  "<<setw(set[11])<<sec1[11]<<sec2[11]<<" |"<<endl;
                cout<<"-,----------------------------------------"<<endl;
                cout<<"|  "<<setw(set[0])<<sec1[0]<<sec2[0]<<"  |  "<<setw(set[1])<<sec1[1]<<sec2[1]<<"  |  "<<setw(set[2])<<sec1[2]<<sec2[2]<<"  |  "<<setw(set[3])<<sec1[3]<<sec2[3]<<"  |  "<<setw(set[4])<<sec1[4]<<sec2[4]<<"  |  "<<setw(set[5])<<sec1[5]<<sec2[5]<<" |"<<endl;
                cout<<"------------------------------------------"<<endl;
                cout<<endl;
                cout<<"Player "<<playname2<<" WON !!"<<endl;
                exit(0);
            }
            if(sec2[i]==" "||sec2[i]=="X"){
                die++;
                continue;
            }
            if(i==36){
                break;
            }
            if(sec2[i]=="\0"){
                sec2[i]="X";
                if(i>=1){
                    sec2[i-1]=(" ");
                }
            }
        }
        if(sec2[6]=="X"&&sec2[7]=="\0"){
            sec2[6]="\0";
            sec2[5]="X";
            cout<<"DECREMENTED i.e YOU ARE demoted 1 box"<<endl;
        }
        if(sec2[14]=="X"&&sec2[15]=="\0"){
            sec2[16]="X";
            sec2[14]=" ";
            sec2[15]=" ";
            cout<<"INCREMENTED i.e promoted 2 box"<<endl;
        }
        if(sec2[18]=="X"&&sec2[19]=="\0"){
            sec2[19]="X";
            sec2[18]=" ";
            cout<<"INCREMENTED i.e promoted 1 box"<<endl;
        }
        if(sec2[22]=="X"&&sec2[23]=="\0"){
            sec2[21]="\0";
            sec2[22]="\0";
            sec2[20]="X";
            cout<<"DECREMENTED i.e demoted 2 box"<<endl;
        }
        if(sec2[31]=="X"&&sec2[32]=="\0"){
            sec2[31]="\0";
            sec2[30]="\0";
            sec2[29]="X";
            cout<<"DECREMENTED i.e demoted 2 box"<<endl;
        }
        file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Snake n Ladder Game/Snake n Ladder Game/assets/turn.txt",ios::out|ios::trunc);
        file.close();
        file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Snake n Ladder Game/Snake n Ladder Game/assets/turn.txt",ios::out);
        file<<1;
        file.close();
        file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Snake n Ladder Game/Snake n Ladder Game/assets/contineo1.txt",ios::out|ios::trunc);
        file.close();
        file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Snake n Ladder Game/Snake n Ladder Game/assets/contineo2.txt",ios::out|ios::trunc);
        file.close();
        file1.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Snake n Ladder Game/Snake n Ladder Game/assets/contineo1.txt",ios::out);
        file2.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Snake n Ladder Game/Snake n Ladder Game/assets/contineo2.txt",ios::out);
        for(int i = 0 ; i<35 ; i++){
            if(sec1[i]=="O"){
                file1<<i;
            }
            if(sec2[i]=="X"){
                file2<<i;
            }
        }
        file1.close();
        file2.close();
        for(int i = 0 ; i<36 ; i++){
            if(((sec1[i]==" ")||(sec1[i]=="O"))&&((sec2[i]==" ")||(sec2[i]=="X"))){
                set[i]=0;
            }
            if((sec1[i]=="\0")&&(sec2[i]=="\0")){
                set[i]=2;
            }
            if((sec1[i]=="\0")&&((sec2[i]==" ")||(sec2[i]=="X"))){
                set[i]=2;
            }
            if(((sec1[i]==" ")||(sec1[i]=="O"))&&(sec2[i]=="\0")){
                set[i]=2;
            }
        }
        cout<<"------------------------------------------"<<endl;
        cout<<"|              Snake n LADDER            |"<<endl;
        cout<<"------------------------------------------"<<endl;
        cout<<"------------------------------------------"<<endl;
        cout<<"|  "<<setw(set[30])<<sec1[30]<<sec2[30]<<"  |  "<<setw(set[31])<<sec1[31]<<sec2[31]<<"  |  "<<setw(set[32])<<sec1[32]<<sec2[32]<<"  |  "<<setw(set[33])<<sec1[33]<<sec2[33]<<"  |  "<<setw(set[34])<<sec1[34]<<sec2[34]<<"  |  "<<setw(set[35])<<sec1[35]<<sec2[35]<<" |"<<endl;
        cout<<"--------,,--------------------------------"<<endl;
        cout<<"|  "<<setw(set[24])<<sec1[24]<<sec2[24]<<"  |  "<<setw(set[25])<<sec1[25]<<sec2[25]<<"  |  "<<setw(set[26])<<sec1[26]<<sec2[26]<<"  |  "<<setw(set[27])<<sec1[27]<<sec2[27]<<"  |  "<<setw(set[28])<<sec1[28]<<sec2[28]<<"  |  "<<setw(set[29])<<sec1[29]<<sec2[29]<<" |"<<endl;
        cout<<"------------------------------------------"<<endl;
        cout<<"|  "<<setw(set[18])<<sec1[18]<<sec2[18]<<"  |  "<<setw(set[19])<<sec1[19]<<sec2[19]<<"  |  "<<setw(set[20])<<sec1[20]<<sec2[20]<<"  |  "<<setw(set[21])<<sec1[21]<<sec2[21]<<"  |  "<<setw(set[22])<<sec1[22]<<sec2[22]<<"  |  "<<setw(set[23])<<sec1[23]<<sec2[23]<<" |"<<endl;
        cout<<"-.-------,,------------------,,-----------"<<endl;
        cout<<"|  "<<setw(set[12])<<sec1[12]<<sec2[12]<<"  |  "<<setw(set[13])<<sec1[13]<<sec2[13]<<"  |  "<<setw(set[14])<<sec1[14]<<sec2[14]<<"  |  "<<setw(set[15])<<sec1[15]<<sec2[15]<<"  |  "<<setw(set[16])<<sec1[16]<<sec2[16]<<"  |  "<<setw(set[17])<<sec1[17]<<sec2[17]<<" |"<<endl;
        cout<<"---------------..-------------------------"<<endl;
        cout<<"|  "<<setw(set[6])<<sec1[6]<<sec2[6]<<"  |  "<<setw(set[7])<<sec1[7]<<sec2[7]<<"  |  "<<setw(set[8])<<sec1[8]<<sec2[8]<<"  |  "<<setw(set[9])<<sec1[9]<<sec2[9]<<"  |  "<<setw(set[10])<<sec1[10]<<sec2[10]<<"  |  "<<setw(set[11])<<sec1[11]<<sec2[11]<<" |"<<endl;
        cout<<"-,----------------------------------------"<<endl;
        cout<<"|  "<<setw(set[0])<<sec1[0]<<sec2[0]<<"  |  "<<setw(set[1])<<sec1[1]<<sec2[1]<<"  |  "<<setw(set[2])<<sec1[2]<<sec2[2]<<"  |  "<<setw(set[3])<<sec1[3]<<sec2[3]<<"  |  "<<setw(set[4])<<sec1[4]<<sec2[4]<<"  |  "<<setw(set[5])<<sec1[5]<<sec2[5]<<" |"<<endl;
        cout<<"------------------------------------------"<<endl;
        cout<<endl;
    }
    mediumlevel(playname1, playname2);
}

void easylevel(string playname1,string  playname2){
                        srand((unsigned) time(NULL));
                                string play1 = "\0" ,
                                       play2 = "\0" ;
                                        int die = 0 ;
    //1
    {
        cout<<"Player "<<playname1<<" turn enter 1 to start rolling die : ";
        while(true){
            cin>>play1;
            if(play1=="1"){
                break;
            }
            if(play1!="1"){
                cout<<"Wrong Input !!"<<endl;
                continue;
            }
        }
        if(play1=="1"){
            die=rand()%6;
            if(die==0){
                die=1;
            }
        }
        cout<<endl;
        cout<<endl;
        cout<<endl;
        cout<<"You get : "<<die<<" points from die rolling !"<<endl;
        cout<<"The score board is :-"<<endl;
        cout<<endl;
        for(int i = 0 ; i<die; i++){
            if(sec1[35]=="O"){
                file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Snake n Ladder Game/Snake n Ladder Game/assets/contineo1.txt",ios::out|ios::trunc);
                file.close();
                file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Snake n Ladder Game/Snake n Ladder Game/assets/contineo2.txt",ios::out|ios::trunc);
                file.close();
                file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Snake n Ladder Game/Snake n Ladder Game/assets/winners.txt",ios::out|ios::app);
                file<<playname1;
                file<<" won from ";
                file<<playname2;
                file<<"\n";
                file.close();
                for(int i = 0 ; i<36 ; i++){
                    if(((sec1[i]==" ")||(sec1[i]=="O"))&&((sec2[i]==" ")||(sec2[i]=="X"))){
                        set[i]=0;
                    }
                    if((sec1[i]=="\0")&&(sec2[i]=="\0")){
                        set[i]=2;
                    }
                    if((sec1[i]=="\0")&&((sec2[i]==" ")||(sec2[i]=="X"))){
                        set[i]=2;
                    }
                    if(((sec1[i]==" ")||(sec1[i]=="O"))&&(sec2[i]=="\0")){
                        set[i]=2;
                    }
                }
                cout<<"------------------------------------------"<<endl;
                cout<<"|              Snake n LADDER            |"<<endl;
                cout<<"------------------------------------------"<<endl;
                cout<<"------------------------------------------"<<endl;
                cout<<"|  "<<setw(set[30])<<sec1[30]<<sec2[30]<<"  |  "<<setw(set[31])<<sec1[31]<<sec2[31]<<"  |  "<<setw(set[32])<<sec1[32]<<sec2[32]<<"  |  "<<setw(set[33])<<sec1[33]<<sec2[33]<<"  |  "<<setw(set[34])<<sec1[34]<<sec2[34]<<"  |  "<<setw(set[35])<<sec1[35]<<sec2[35]<<" |"<<endl;
                cout<<"--------..--------------------------------"<<endl;
                cout<<"|  "<<setw(set[24])<<sec1[24]<<sec2[24]<<"  |  "<<setw(set[25])<<sec1[25]<<sec2[25]<<"  |  "<<setw(set[26])<<sec1[26]<<sec2[26]<<"  |  "<<setw(set[27])<<sec1[27]<<sec2[27]<<"  |  "<<setw(set[28])<<sec1[28]<<sec2[28]<<"  |  "<<setw(set[29])<<sec1[29]<<sec2[29]<<" |"<<endl;
                cout<<"------------------------------------------"<<endl;
                cout<<"|  "<<setw(set[18])<<sec1[18]<<sec2[18]<<"  |  "<<setw(set[19])<<sec1[19]<<sec2[19]<<"  |  "<<setw(set[20])<<sec1[20]<<sec2[20]<<"  |  "<<setw(set[21])<<sec1[21]<<sec2[21]<<"  |  "<<setw(set[22])<<sec1[22]<<sec2[22]<<"  |  "<<setw(set[23])<<sec1[23]<<sec2[23]<<" |"<<endl;
                cout<<"-.---------------------------,,-----------"<<endl;
                cout<<"|  "<<setw(set[12])<<sec1[12]<<sec2[12]<<"  |  "<<setw(set[13])<<sec1[13]<<sec2[13]<<"  |  "<<setw(set[14])<<sec1[14]<<sec2[14]<<"  |  "<<setw(set[15])<<sec1[15]<<sec2[15]<<"  |  "<<setw(set[16])<<sec1[16]<<sec2[16]<<"  |  "<<setw(set[17])<<sec1[17]<<sec2[17]<<" |"<<endl;
                cout<<"---------------..-------------------------"<<endl;
                cout<<"|  "<<setw(set[6])<<sec1[6]<<sec2[6]<<"  |  "<<setw(set[7])<<sec1[7]<<sec2[7]<<"  |  "<<setw(set[8])<<sec1[8]<<sec2[8]<<"  |  "<<setw(set[9])<<sec1[9]<<sec2[9]<<"  |  "<<setw(set[10])<<sec1[10]<<sec2[10]<<"  |  "<<setw(set[11])<<sec1[11]<<sec2[11]<<" |"<<endl;
                cout<<"-,----------------------------------------"<<endl;
                cout<<"|  "<<setw(set[0])<<sec1[0]<<sec2[0]<<"  |  "<<setw(set[1])<<sec1[1]<<sec2[1]<<"  |  "<<setw(set[2])<<sec1[2]<<sec2[2]<<"  |  "<<setw(set[3])<<sec1[3]<<sec2[3]<<"  |  "<<setw(set[4])<<sec1[4]<<sec2[4]<<"  |  "<<setw(set[5])<<sec1[5]<<sec2[5]<<" |"<<endl;
                cout<<"------------------------------------------"<<endl;
                cout<<endl;
                cout<<"Player "<<playname1<<" WON !!"<<endl;
                exit(0);
            }
            if(sec1[i]==" "||sec1[i]=="O"){
                die++;
                continue;
            }
            if(i==36){
                break;
            }
            if(sec1[i]=="\0"){
                sec1[i]=("O");
                if(i>=1){
                    sec1[i-1]=(" ");
                }
            }
        }
        if(sec1[6]=="O"&&sec1[7]=="\0"){
            sec1[6]="\0";
            sec1[5]="O";
            cout<<"DECREMENTED i.e YOU ARE demoted 1 box"<<endl;
        }
        if(sec1[14]=="O"&&sec1[15]=="\0"){
            sec1[16]="O";
            sec1[14]=" ";
            sec1[15]=" ";
            cout<<"INCREMENTED i.e promoted 2 box"<<endl;
        }
        if(sec1[18]=="O"&&sec1[19]=="\0"){
            sec1[19]="O";
            sec1[18]=" ";
            cout<<"INCREMENTED i.e promoted 1 box"<<endl;
        }
        if(sec1[22]=="O"&&sec1[23]=="\0"){
            sec1[21]="\0";
            sec1[22]="\0";
            sec1[20]="O";
            cout<<"DECREMENTED i.e demoted 2 box"<<endl;
        }
        if(sec1[31]=="O"&&sec1[32]=="\0"){
            sec1[31]=" ";
            sec1[32]=" ";
            sec1[33]="O";
            cout<<"INCREMENTED i.e promoted 2 box"<<endl;
        }
        file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Snake n Ladder Game/Snake n Ladder Game/assets/turn.txt",ios::out|ios::trunc);
        file.close();
        file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Snake n Ladder Game/Snake n Ladder Game/assets/turn.txt",ios::out);
        file<<0;
        file.close();
        file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Snake n Ladder Game/Snake n Ladder Game/assets/contineo1.txt",ios::out|ios::trunc);
        file.close();
        file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Snake n Ladder Game/Snake n Ladder Game/assets/contineo2.txt",ios::out|ios::trunc);
        file.close();
        file1.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Snake n Ladder Game/Snake n Ladder Game/assets/contineo1.txt",ios::out);
        file2.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Snake n Ladder Game/Snake n Ladder Game/assets/contineo2.txt",ios::out);
        for(int i = 0 ; i<35 ; i++){
            if(sec1[i]=="O"){
                file1<<i;
            }
            if(sec2[i]=="X"){
                file2<<i;
            }
        }
        file1.close();
        file2.close();
        for(int i = 0 ; i<36 ; i++){
            if(((sec1[i]==" ")||(sec1[i]=="O"))&&((sec2[i]==" ")||(sec2[i]=="X"))){
                set[i]=0;
            }
            if((sec1[i]=="\0")&&(sec2[i]=="\0")){
                set[i]=2;
            }
            if((sec1[i]=="\0")&&((sec2[i]==" ")||(sec2[i]=="X"))){
                set[i]=2;
            }
            if(((sec1[i]==" ")||(sec1[i]=="O"))&&(sec2[i]=="\0")){
                set[i]=2;
            }
        }
        cout<<"------------------------------------------"<<endl;
        cout<<"|              Snake n LADDER            |"<<endl;
        cout<<"------------------------------------------"<<endl;
        cout<<"------------------------------------------"<<endl;
        cout<<"|  "<<setw(set[30])<<sec1[30]<<sec2[30]<<"  |  "<<setw(set[31])<<sec1[31]<<sec2[31]<<"  |  "<<setw(set[32])<<sec1[32]<<sec2[32]<<"  |  "<<setw(set[33])<<sec1[33]<<sec2[33]<<"  |  "<<setw(set[34])<<sec1[34]<<sec2[34]<<"  |  "<<setw(set[35])<<sec1[35]<<sec2[35]<<" |"<<endl;
        cout<<"--------..--------------------------------"<<endl;
        cout<<"|  "<<setw(set[24])<<sec1[24]<<sec2[24]<<"  |  "<<setw(set[25])<<sec1[25]<<sec2[25]<<"  |  "<<setw(set[26])<<sec1[26]<<sec2[26]<<"  |  "<<setw(set[27])<<sec1[27]<<sec2[27]<<"  |  "<<setw(set[28])<<sec1[28]<<sec2[28]<<"  |  "<<setw(set[29])<<sec1[29]<<sec2[29]<<" |"<<endl;
        cout<<"------------------------------------------"<<endl;
        cout<<"|  "<<setw(set[18])<<sec1[18]<<sec2[18]<<"  |  "<<setw(set[19])<<sec1[19]<<sec2[19]<<"  |  "<<setw(set[20])<<sec1[20]<<sec2[20]<<"  |  "<<setw(set[21])<<sec1[21]<<sec2[21]<<"  |  "<<setw(set[22])<<sec1[22]<<sec2[22]<<"  |  "<<setw(set[23])<<sec1[23]<<sec2[23]<<" |"<<endl;
        cout<<"-.---------------------------,,-----------"<<endl;
        cout<<"|  "<<setw(set[12])<<sec1[12]<<sec2[12]<<"  |  "<<setw(set[13])<<sec1[13]<<sec2[13]<<"  |  "<<setw(set[14])<<sec1[14]<<sec2[14]<<"  |  "<<setw(set[15])<<sec1[15]<<sec2[15]<<"  |  "<<setw(set[16])<<sec1[16]<<sec2[16]<<"  |  "<<setw(set[17])<<sec1[17]<<sec2[17]<<" |"<<endl;
        cout<<"---------------..-------------------------"<<endl;
        cout<<"|  "<<setw(set[6])<<sec1[6]<<sec2[6]<<"  |  "<<setw(set[7])<<sec1[7]<<sec2[7]<<"  |  "<<setw(set[8])<<sec1[8]<<sec2[8]<<"  |  "<<setw(set[9])<<sec1[9]<<sec2[9]<<"  |  "<<setw(set[10])<<sec1[10]<<sec2[10]<<"  |  "<<setw(set[11])<<sec1[11]<<sec2[11]<<" |"<<endl;
        cout<<"-,----------------------------------------"<<endl;
        cout<<"|  "<<setw(set[0])<<sec1[0]<<sec2[0]<<"  |  "<<setw(set[1])<<sec1[1]<<sec2[1]<<"  |  "<<setw(set[2])<<sec1[2]<<sec2[2]<<"  |  "<<setw(set[3])<<sec1[3]<<sec2[3]<<"  |  "<<setw(set[4])<<sec1[4]<<sec2[4]<<"  |  "<<setw(set[5])<<sec1[5]<<sec2[5]<<" |"<<endl;
        cout<<"------------------------------------------"<<endl;
        cout<<endl;
    }
    //2
    {
        cout<<"Player "<<playname2<<" turn enter 1 to start rolling die : ";
        while(true){
            cin>>play2;
            if(play2=="1"){
                break;
            }
            if(play2!="1"){
                cout<<"Wrong Input !!"<<endl;
                continue;
            }
        }
        if(play2=="1"){
            die=rand()%6;
            if(die==0){
                die=1;
            }
        }
        cout<<endl;
        cout<<endl;
        cout<<endl;
        cout<<"You get : "<<die<<" points from die rolling !"<<endl;
        cout<<"The score board is :-"<<endl;
        cout<<endl;
        for(int i = 0 ; i < die ; i++){
            if(sec2[35]=="X"){
                file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Snake n Ladder Game/Snake n Ladder Game/assets/contineo1.txt",ios::out|ios::trunc);
                file.close();
                file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Snake n Ladder Game/Snake n Ladder Game/assets/contineo2.txt",ios::out|ios::trunc);
                file.close();
                file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Snake n Ladder Game/Snake n Ladder Game/assets/winners.txt",ios::out|ios::app);
                file<<playname2;
                file<<" won from ";
                file<<playname1;
                file<<"\n";
                file.close();
                for(int i = 0 ; i<36 ; i++){
                    if(((sec1[i]==" ")||(sec1[i]=="O"))&&((sec2[i]==" ")||(sec2[i]=="X"))){
                        set[i]=0;
                    }
                    if((sec1[i]=="\0")&&(sec2[i]=="\0")){
                        set[i]=2;
                    }
                    if((sec1[i]=="\0")&&((sec2[i]==" ")||(sec2[i]=="X"))){
                        set[i]=2;
                    }
                    if(((sec1[i]==" ")||(sec1[i]=="O"))&&(sec2[i]=="\0")){
                        set[i]=2;
                    }
                }
                cout<<"------------------------------------------"<<endl;
                cout<<"|              Snake n LADDER            |"<<endl;
                cout<<"------------------------------------------"<<endl;
                cout<<"------------------------------------------"<<endl;
                cout<<"|  "<<setw(set[30])<<sec1[30]<<sec2[30]<<"  |  "<<setw(set[31])<<sec1[31]<<sec2[31]<<"  |  "<<setw(set[32])<<sec1[32]<<sec2[32]<<"  |  "<<setw(set[33])<<sec1[33]<<sec2[33]<<"  |  "<<setw(set[34])<<sec1[34]<<sec2[34]<<"  |  "<<setw(set[35])<<sec1[35]<<sec2[35]<<" |"<<endl;
                cout<<"--------..--------------------------------"<<endl;
                cout<<"|  "<<setw(set[24])<<sec1[24]<<sec2[24]<<"  |  "<<setw(set[25])<<sec1[25]<<sec2[25]<<"  |  "<<setw(set[26])<<sec1[26]<<sec2[26]<<"  |  "<<setw(set[27])<<sec1[27]<<sec2[27]<<"  |  "<<setw(set[28])<<sec1[28]<<sec2[28]<<"  |  "<<setw(set[29])<<sec1[29]<<sec2[29]<<" |"<<endl;
                cout<<"------------------------------------------"<<endl;
                cout<<"|  "<<setw(set[18])<<sec1[18]<<sec2[18]<<"  |  "<<setw(set[19])<<sec1[19]<<sec2[19]<<"  |  "<<setw(set[20])<<sec1[20]<<sec2[20]<<"  |  "<<setw(set[21])<<sec1[21]<<sec2[21]<<"  |  "<<setw(set[22])<<sec1[22]<<sec2[22]<<"  |  "<<setw(set[23])<<sec1[23]<<sec2[23]<<" |"<<endl;
                cout<<"-.---------------------------,,-----------"<<endl;
                cout<<"|  "<<setw(set[12])<<sec1[12]<<sec2[12]<<"  |  "<<setw(set[13])<<sec1[13]<<sec2[13]<<"  |  "<<setw(set[14])<<sec1[14]<<sec2[14]<<"  |  "<<setw(set[15])<<sec1[15]<<sec2[15]<<"  |  "<<setw(set[16])<<sec1[16]<<sec2[16]<<"  |  "<<setw(set[17])<<sec1[17]<<sec2[17]<<" |"<<endl;
                cout<<"---------------..-------------------------"<<endl;
                cout<<"|  "<<setw(set[6])<<sec1[6]<<sec2[6]<<"  |  "<<setw(set[7])<<sec1[7]<<sec2[7]<<"  |  "<<setw(set[8])<<sec1[8]<<sec2[8]<<"  |  "<<setw(set[9])<<sec1[9]<<sec2[9]<<"  |  "<<setw(set[10])<<sec1[10]<<sec2[10]<<"  |  "<<setw(set[11])<<sec1[11]<<sec2[11]<<" |"<<endl;
                cout<<"-,----------------------------------------"<<endl;
                cout<<"|  "<<setw(set[0])<<sec1[0]<<sec2[0]<<"  |  "<<setw(set[1])<<sec1[1]<<sec2[1]<<"  |  "<<setw(set[2])<<sec1[2]<<sec2[2]<<"  |  "<<setw(set[3])<<sec1[3]<<sec2[3]<<"  |  "<<setw(set[4])<<sec1[4]<<sec2[4]<<"  |  "<<setw(set[5])<<sec1[5]<<sec2[5]<<" |"<<endl;
                cout<<"------------------------------------------"<<endl;
                cout<<endl;
                cout<<"Player "<<playname2<<" WON !!"<<endl;
                exit(0);
            }
            if(sec2[i]==" "||sec2[i]=="X"){
                die++;
                continue;
            }
            if(i==36){
                break;
            }
            if(sec2[i]=="\0"){
                sec2[i]="X";
                if(i>=1){
                    sec2[i-1]=(" ");
                }
            }
        }
        if(sec2[6]=="X"&&sec2[7]=="\0"){
            sec2[6]="\0";
            sec2[5]="X";
            cout<<"DECREMENTED i.e YOU ARE demoted 1 box"<<endl;
        }
        if(sec2[14]=="X"&&sec2[15]=="\0"){
            sec2[16]="X";
            sec2[14]=" ";
            sec2[15]=" ";
            cout<<"INCREMENTED i.e promoted 2 box"<<endl;
        }
        if(sec2[18]=="X"&&sec2[19]=="\0"){
            sec2[19]="X";
            sec2[18]=" ";
            cout<<"INCREMENTED i.e promoted 1 box"<<endl;
        }
        if(sec2[22]=="X"&&sec2[23]=="\0"){
            sec2[21]="\0";
            sec2[22]="\0";
            sec2[20]="X";
            cout<<"DECREMENTED i.e demoted 2 box"<<endl;
        }
        if(sec1[31]=="O"&&sec1[32]=="\0"){
            sec1[31]=" ";
            sec1[32]=" ";
            sec1[33]="O";
            cout<<"INCREMENTED i.e promoted 2 box"<<endl;
        }
        file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Snake n Ladder Game/Snake n Ladder Game/assets/turn.txt",ios::out|ios::trunc);
        file.close();
        file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Snake n Ladder Game/Snake n Ladder Game/assets/turn.txt",ios::out);
        file<<1;
        file.close();
        file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Snake n Ladder Game/Snake n Ladder Game/assets/contineo1.txt",ios::out|ios::trunc);
        file.close();
        file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Snake n Ladder Game/Snake n Ladder Game/assets/contineo2.txt",ios::out|ios::trunc);
        file.close();
        file1.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Snake n Ladder Game/Snake n Ladder Game/assets/contineo1.txt",ios::out);
        file2.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Snake n Ladder Game/Snake n Ladder Game/assets/contineo2.txt",ios::out);
        for(int i = 0 ; i<35 ; i++){
            if(sec1[i]=="O"){
                file1<<i;
            }
            if(sec2[i]=="X"){
                file2<<i;
            }
        }
        file1.close();
        file2.close();
        for(int i = 0 ; i<36 ; i++){
            if(((sec1[i]==" ")||(sec1[i]=="O"))&&((sec2[i]==" ")||(sec2[i]=="X"))){
                set[i]=0;
            }
            if((sec1[i]=="\0")&&(sec2[i]=="\0")){
                set[i]=2;
            }
            if((sec1[i]=="\0")&&((sec2[i]==" ")||(sec2[i]=="X"))){
                set[i]=2;
            }
            if(((sec1[i]==" ")||(sec1[i]=="O"))&&(sec2[i]=="\0")){
                set[i]=2;
            }
        }
        cout<<"------------------------------------------"<<endl;
        cout<<"|              Snake n LADDER            |"<<endl;
        cout<<"------------------------------------------"<<endl;
        cout<<"------------------------------------------"<<endl;
        cout<<"|  "<<setw(set[30])<<sec1[30]<<sec2[30]<<"  |  "<<setw(set[31])<<sec1[31]<<sec2[31]<<"  |  "<<setw(set[32])<<sec1[32]<<sec2[32]<<"  |  "<<setw(set[33])<<sec1[33]<<sec2[33]<<"  |  "<<setw(set[34])<<sec1[34]<<sec2[34]<<"  |  "<<setw(set[35])<<sec1[35]<<sec2[35]<<" |"<<endl;
        cout<<"--------..--------------------------------"<<endl;
        cout<<"|  "<<setw(set[24])<<sec1[24]<<sec2[24]<<"  |  "<<setw(set[25])<<sec1[25]<<sec2[25]<<"  |  "<<setw(set[26])<<sec1[26]<<sec2[26]<<"  |  "<<setw(set[27])<<sec1[27]<<sec2[27]<<"  |  "<<setw(set[28])<<sec1[28]<<sec2[28]<<"  |  "<<setw(set[29])<<sec1[29]<<sec2[29]<<" |"<<endl;
        cout<<"------------------------------------------"<<endl;
        cout<<"|  "<<setw(set[18])<<sec1[18]<<sec2[18]<<"  |  "<<setw(set[19])<<sec1[19]<<sec2[19]<<"  |  "<<setw(set[20])<<sec1[20]<<sec2[20]<<"  |  "<<setw(set[21])<<sec1[21]<<sec2[21]<<"  |  "<<setw(set[22])<<sec1[22]<<sec2[22]<<"  |  "<<setw(set[23])<<sec1[23]<<sec2[23]<<" |"<<endl;
        cout<<"-.---------------------------,,-----------"<<endl;
        cout<<"|  "<<setw(set[12])<<sec1[12]<<sec2[12]<<"  |  "<<setw(set[13])<<sec1[13]<<sec2[13]<<"  |  "<<setw(set[14])<<sec1[14]<<sec2[14]<<"  |  "<<setw(set[15])<<sec1[15]<<sec2[15]<<"  |  "<<setw(set[16])<<sec1[16]<<sec2[16]<<"  |  "<<setw(set[17])<<sec1[17]<<sec2[17]<<" |"<<endl;
        cout<<"---------------..-------------------------"<<endl;
        cout<<"|  "<<setw(set[6])<<sec1[6]<<sec2[6]<<"  |  "<<setw(set[7])<<sec1[7]<<sec2[7]<<"  |  "<<setw(set[8])<<sec1[8]<<sec2[8]<<"  |  "<<setw(set[9])<<sec1[9]<<sec2[9]<<"  |  "<<setw(set[10])<<sec1[10]<<sec2[10]<<"  |  "<<setw(set[11])<<sec1[11]<<sec2[11]<<" |"<<endl;
        cout<<"-,----------------------------------------"<<endl;
        cout<<"|  "<<setw(set[0])<<sec1[0]<<sec2[0]<<"  |  "<<setw(set[1])<<sec1[1]<<sec2[1]<<"  |  "<<setw(set[2])<<sec1[2]<<sec2[2]<<"  |  "<<setw(set[3])<<sec1[3]<<sec2[3]<<"  |  "<<setw(set[4])<<sec1[4]<<sec2[4]<<"  |  "<<setw(set[5])<<sec1[5]<<sec2[5]<<" |"<<endl;
        cout<<"------------------------------------------"<<endl;
        cout<<endl;
    }
    easylevel(playname1, playname2);
}

void game(){
    //intialization
                     srand((unsigned) time(NULL));
                                 string playname1,
                                        playname2;
                             string start = "\0" ;
    file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Snake n Ladder Game/Snake n Ladder Game/assets/name.txt",ios::out|ios::trunc);
    file.close();
    file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Snake n Ladder Game/Snake n Ladder Game/assets/contineo1.txt",ios::out|ios::trunc);
    file.close();
    file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Snake n Ladder Game/Snake n Ladder Game/assets/contineo2.txt",ios::out|ios::trunc);
    file.close();
    file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Snake n Ladder Game/Snake n Ladder Game/assets/name.txt",ios::out);
    cout<<"ENTER Player 1 name : ";
    cin.ignore();
    getline(cin,playname1);
    file<<playname1;
    file<<".";
    cout<<"ENTER Player 2 name : ";
    getline(cin,playname2);
    file<<playname2;
    file.close();
    file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Snake n Ladder Game/Snake n Ladder Game/assets/level.txt",ios::in);
    while(file){
        file>>level;
    }
    file.close();
    cout<<level<<endl;
    cout<<playname1<<" repersent O !!"<<endl;
    cout<<playname2<<" repersent X !!"<<endl;
    cout<<endl;
    cout<<"ENTER 1 to start the game. "<<endl;
    cout<<"ENTER 0 to exit the game. "<<endl;
    while(true){
        cin>>start;
        if(start=="1"){
            break;
        }
        if(start=="0"){
            cout<<"GAME CLOSED!!"<<endl;
            exit(0);
        }
        if((start!="1")||(start!="0")){
            cout<<"Wrong Input !!"<<endl;
            continue;
        }
    }
    if(start=="1"){
        if(level==1){
            hardlevel(playname1, playname2);
        }
        if(level==2){
            mediumlevel(playname1, playname2);
        }
        if(level==3){
            easylevel(playname1, playname2);
        }
    }
}

void contineogame(){
                                         string playname1,
                                                playname2;
                                      string achieve="\0",
                                                     name;
        int i = 0 , tur , level = 0 , retrieve1 , retrieve2 = 0 ;
    file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Snake n Ladder Game/Snake n Ladder Game/assets/contineo1.txt",ios::in);
    file>>retrieve1;
    file.close();
    file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Snake n Ladder Game/Snake n Ladder Game/assets/contineo2.txt",ios::in);
    file>>retrieve2;
    file.close();
    retrieve1=retrieve1+1;
    if(retrieve2==0){
        retrieve2=0;
    }
    if(retrieve2!=0){
        retrieve2=retrieve2+1;
    }
        for(int i = 0;i<retrieve1;i++){
            sec1[i]="O";
            if(i>=1){
                sec1[i-1]=" ";
            }
        }
        for(int i = 0;i<retrieve2;i++){
            sec2[i]="X";
            if(i>=1){
                sec2[i-1]=" ";
            }
        }
    for(int i = 0 ; i<36 ; i++){
        if(((sec1[i]==" ")||(sec1[i]=="O"))&&((sec2[i]==" ")||(sec2[i]=="X"))){
            set[i]=0;
        }
        if((sec1[i]=="\0")&&(sec2[i]=="\0")){
            set[i]=2;
        }
        if((sec1[i]=="\0")&&((sec2[i]==" ")||(sec2[i]=="X"))){
            set[i]=2;
        }
        if(((sec1[i]==" ")||(sec1[i]=="O"))&&(sec2[i]=="\0")){
            set[i]=2;
        }
    }
    file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Snake n Ladder Game/Snake n Ladder Game/assets/level.txt",ios::in);
       while (file){file>>level;}
    file.close();
    if(level==1){
        cout<<"The score board is :-"<<endl;
        cout<<endl;
        cout<<"------------------------------------------"<<endl;
        cout<<"|              Snake n LADDER            |"<<endl;
        cout<<"------------------------------------------"<<endl;
        cout<<"------------------------------------------"<<endl;
        cout<<"|  "<<setw(set[30])<<sec1[30]<<sec2[30]<<"  |  "<<setw(set[31])<<sec1[31]<<sec2[31]<<"  |  "<<setw(set[32])<<sec1[32]<<sec2[32]<<"  |  "<<setw(set[33])<<sec1[33]<<sec2[33]<<"  |  "<<setw(set[34])<<sec1[34]<<sec2[34]<<"  |  "<<setw(set[35])<<sec1[35]<<sec2[35]<<" |"<<endl;
        cout<<"--------,,--------------------------------"<<endl;
        cout<<"|  "<<setw(set[24])<<sec1[24]<<sec2[24]<<"  |  "<<setw(set[25])<<sec1[25]<<sec2[25]<<"  |  "<<setw(set[26])<<sec1[26]<<sec2[26]<<"  |  "<<setw(set[27])<<sec1[27]<<sec2[27]<<"  |  "<<setw(set[28])<<sec1[28]<<sec2[28]<<"  |  "<<setw(set[29])<<sec1[29]<<sec2[29]<<" |"<<endl;
        cout<<"-----------------------------,,,----------"<<endl;
        cout<<"|  "<<setw(set[18])<<sec1[18]<<sec2[18]<<"  |  "<<setw(set[19])<<sec1[19]<<sec2[19]<<"  |  "<<setw(set[20])<<sec1[20]<<sec2[20]<<"  |  "<<setw(set[21])<<sec1[21]<<sec2[21]<<"  |  "<<setw(set[22])<<sec1[22]<<sec2[22]<<"  |  "<<setw(set[23])<<sec1[23]<<sec2[23]<<" |"<<endl;
        cout<<"-.-------,,------------------,,-----------"<<endl;
        cout<<"|  "<<setw(set[12])<<sec1[12]<<sec2[12]<<"  |  "<<setw(set[13])<<sec1[13]<<sec2[13]<<"  |  "<<setw(set[14])<<sec1[14]<<sec2[14]<<"  |  "<<setw(set[15])<<sec1[15]<<sec2[15]<<"  |  "<<setw(set[16])<<sec1[16]<<sec2[16]<<"  |  "<<setw(set[17])<<sec1[17]<<sec2[17]<<" |"<<endl;
        cout<<"---------------..-------------------------"<<endl;
        cout<<"|  "<<setw(set[6])<<sec1[6]<<sec2[6]<<"  |  "<<setw(set[7])<<sec1[7]<<sec2[7]<<"  |  "<<setw(set[8])<<sec1[8]<<sec2[8]<<"  |  "<<setw(set[9])<<sec1[9]<<sec2[9]<<"  |  "<<setw(set[10])<<sec1[10]<<sec2[10]<<"  |  "<<setw(set[11])<<sec1[11]<<sec2[11]<<" |"<<endl;
        cout<<"-,----------------------------------------"<<endl;
        cout<<"|  "<<setw(set[0])<<sec1[0]<<sec2[0]<<"  |  "<<setw(set[1])<<sec1[1]<<sec2[1]<<"  |  "<<setw(set[2])<<sec1[2]<<sec2[2]<<"  |  "<<setw(set[3])<<sec1[3]<<sec2[3]<<"  |  "<<setw(set[4])<<sec1[4]<<sec2[4]<<"  |  "<<setw(set[5])<<sec1[5]<<sec2[5]<<" |"<<endl;
        cout<<"------------------------------------------"<<endl;
        cout<<endl;
    }
    if(level==2){
        cout<<"------------------------------------------"<<endl;
        cout<<"|              Snake n LADDER            |"<<endl;
        cout<<"------------------------------------------"<<endl;
        cout<<"------------------------------------------"<<endl;
        cout<<"|  "<<setw(set[30])<<sec1[30]<<sec2[30]<<"  |  "<<setw(set[31])<<sec1[31]<<sec2[31]<<"  |  "<<setw(set[32])<<sec1[32]<<sec2[32]<<"  |  "<<setw(set[33])<<sec1[33]<<sec2[33]<<"  |  "<<setw(set[34])<<sec1[34]<<sec2[34]<<"  |  "<<setw(set[35])<<sec1[35]<<sec2[35]<<" |"<<endl;
        cout<<"--------,,--------------------------------"<<endl;
        cout<<"|  "<<setw(set[24])<<sec1[24]<<sec2[24]<<"  |  "<<setw(set[25])<<sec1[25]<<sec2[25]<<"  |  "<<setw(set[26])<<sec1[26]<<sec2[26]<<"  |  "<<setw(set[27])<<sec1[27]<<sec2[27]<<"  |  "<<setw(set[28])<<sec1[28]<<sec2[28]<<"  |  "<<setw(set[29])<<sec1[29]<<sec2[29]<<" |"<<endl;
        cout<<"------------------------------------------"<<endl;
        cout<<"|  "<<setw(set[18])<<sec1[18]<<sec2[18]<<"  |  "<<setw(set[19])<<sec1[19]<<sec2[19]<<"  |  "<<setw(set[20])<<sec1[20]<<sec2[20]<<"  |  "<<setw(set[21])<<sec1[21]<<sec2[21]<<"  |  "<<setw(set[22])<<sec1[22]<<sec2[22]<<"  |  "<<setw(set[23])<<sec1[23]<<sec2[23]<<" |"<<endl;
        cout<<"-.---------------------------,,-----------"<<endl;
        cout<<"|  "<<setw(set[12])<<sec1[12]<<sec2[12]<<"  |  "<<setw(set[13])<<sec1[13]<<sec2[13]<<"  |  "<<setw(set[14])<<sec1[14]<<sec2[14]<<"  |  "<<setw(set[15])<<sec1[15]<<sec2[15]<<"  |  "<<setw(set[16])<<sec1[16]<<sec2[16]<<"  |  "<<setw(set[17])<<sec1[17]<<sec2[17]<<" |"<<endl;
        cout<<"---------------..-------------------------"<<endl;
        cout<<"|  "<<setw(set[6])<<sec1[6]<<sec2[6]<<"  |  "<<setw(set[7])<<sec1[7]<<sec2[7]<<"  |  "<<setw(set[8])<<sec1[8]<<sec2[8]<<"  |  "<<setw(set[9])<<sec1[9]<<sec2[9]<<"  |  "<<setw(set[10])<<sec1[10]<<sec2[10]<<"  |  "<<setw(set[11])<<sec1[11]<<sec2[11]<<" |"<<endl;
        cout<<"-,----------------------------------------"<<endl;
        cout<<"|  "<<setw(set[0])<<sec1[0]<<sec2[0]<<"  |  "<<setw(set[1])<<sec1[1]<<sec2[1]<<"  |  "<<setw(set[2])<<sec1[2]<<sec2[2]<<"  |  "<<setw(set[3])<<sec1[3]<<sec2[3]<<"  |  "<<setw(set[4])<<sec1[4]<<sec2[4]<<"  |  "<<setw(set[5])<<sec1[5]<<sec2[5]<<" |"<<endl;
        cout<<"------------------------------------------"<<endl;
        cout<<endl;
    }
    if(level==3){
        cout<<"The score board is :-"<<endl;
        cout<<endl;
        cout<<"------------------------------------------"<<endl;
        cout<<"|              Snake n LADDER            |"<<endl;
        cout<<"------------------------------------------"<<endl;
        cout<<"------------------------------------------"<<endl;
        cout<<"|  "<<setw(set[30])<<sec1[30]<<sec2[30]<<"  |  "<<setw(set[31])<<sec1[31]<<sec2[31]<<"  |  "<<setw(set[32])<<sec1[32]<<sec2[32]<<"  |  "<<setw(set[33])<<sec1[33]<<sec2[33]<<"  |  "<<setw(set[34])<<sec1[34]<<sec2[34]<<"  |  "<<setw(set[35])<<sec1[35]<<sec2[35]<<" |"<<endl;
        cout<<"--------..--------------------------------"<<endl;
        cout<<"|  "<<setw(set[24])<<sec1[24]<<sec2[24]<<"  |  "<<setw(set[25])<<sec1[25]<<sec2[25]<<"  |  "<<setw(set[26])<<sec1[26]<<sec2[26]<<"  |  "<<setw(set[27])<<sec1[27]<<sec2[27]<<"  |  "<<setw(set[28])<<sec1[28]<<sec2[28]<<"  |  "<<setw(set[29])<<sec1[29]<<sec2[29]<<" |"<<endl;
        cout<<"------------------------------------------"<<endl;
        cout<<"|  "<<setw(set[18])<<sec1[18]<<sec2[18]<<"  |  "<<setw(set[19])<<sec1[19]<<sec2[19]<<"  |  "<<setw(set[20])<<sec1[20]<<sec2[20]<<"  |  "<<setw(set[21])<<sec1[21]<<sec2[21]<<"  |  "<<setw(set[22])<<sec1[22]<<sec2[22]<<"  |  "<<setw(set[23])<<sec1[23]<<sec2[23]<<" |"<<endl;
        cout<<"-.---------------------------,,-----------"<<endl;
        cout<<"|  "<<setw(set[12])<<sec1[12]<<sec2[12]<<"  |  "<<setw(set[13])<<sec1[13]<<sec2[13]<<"  |  "<<setw(set[14])<<sec1[14]<<sec2[14]<<"  |  "<<setw(set[15])<<sec1[15]<<sec2[15]<<"  |  "<<setw(set[16])<<sec1[16]<<sec2[16]<<"  |  "<<setw(set[17])<<sec1[17]<<sec2[17]<<" |"<<endl;
        cout<<"---------------..-------------------------"<<endl;
        cout<<"|  "<<setw(set[6])<<sec1[6]<<sec2[6]<<"  |  "<<setw(set[7])<<sec1[7]<<sec2[7]<<"  |  "<<setw(set[8])<<sec1[8]<<sec2[8]<<"  |  "<<setw(set[9])<<sec1[9]<<sec2[9]<<"  |  "<<setw(set[10])<<sec1[10]<<sec2[10]<<"  |  "<<setw(set[11])<<sec1[11]<<sec2[11]<<" |"<<endl;
        cout<<"-,----------------------------------------"<<endl;
        cout<<"|  "<<setw(set[0])<<sec1[0]<<sec2[0]<<"  |  "<<setw(set[1])<<sec1[1]<<sec2[1]<<"  |  "<<setw(set[2])<<sec1[2]<<sec2[2]<<"  |  "<<setw(set[3])<<sec1[3]<<sec2[3]<<"  |  "<<setw(set[4])<<sec1[4]<<sec2[4]<<"  |  "<<setw(set[5])<<sec1[5]<<sec2[5]<<" |"<<endl;
        cout<<"------------------------------------------"<<endl;
        cout<<endl;
    }
    file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Snake n Ladder Game/Snake n Ladder Game/assets/turn.txt",ios::in);
    file>>tur;
    file.close();
    file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Snake n Ladder Game/Snake n Ladder Game/assets/name.txt",ios::in);
    i=0;
    while (file){getline(file,name);}
    file.close();
    if(name=="\0"){
        string playname1,
               playname2;
     file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Snake n Ladder Game/Snake n Ladder Game/assets/name.txt",ios::out|ios::trunc);
     file.close();
     file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Snake n Ladder Game/Snake n Ladder Game/assets/contineo.txt",ios::out|ios::trunc);
     file.close();
     file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Snake n Ladder Game/Snake n Ladder Game/assets/name.txt",ios::out);
     cout<<"ENTER Player 1 name : ";
     cin.ignore();
     getline(cin,playname1);
     file<<playname1;
     file<<".";
     cout<<"ENTER Player 2 name : ";
     getline(cin,playname2);
     file<<playname2;
     file.close();
     cout<<playname1<<" repersent O !!"<<endl;
     cout<<playname2<<" repersent X !!"<<endl;
     cout<<endl;
     file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Snake n Ladder Game/Snake n Ladder Game/assets/name.txt",ios::in);
     i=0;
     while (file){getline(file,name);}
     file.close();
     long size = name.size();
     long end = size;
     while(true){
         if(achieve=="."){
             break;
         }
         achieve=name.at(i);
         i++;
         size--;
     }
     i=i-1;
     playname1.assign(name,0,i);
     i=i+1;
     playname2.assign(name,i,end);
    }
    long size = name.size();
    long end = size;
    while(true){
        if(achieve=="."){
            break;
        }
        achieve=name.at(i);
        i++;
        size--;
    }
    i=i-1;
    playname1.assign(name,0,i);
    i=i+1;
    playname2.assign(name,i,end);
    if(tur==1){
        if(level==1){
            hardlevel(playname1, playname2);
        }
        if(level==2){
            mediumlevel(playname1, playname2);
        }
        if(level==3){
            easylevel(playname1, playname2);
        }
    }
    if(tur==0){
        if(level==1){
            levelhardplayer2turn(playname1, playname2);
        }
        if(level==2){
            levelmediumplayer2turn(playname1, playname2);
        }
        if(level==3){
            leveleasyplayer2turn(playname1, playname2);
        }
    }
}

#endif /* game_h */
