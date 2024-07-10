#ifndef main_hpp
#define main_hpp

#include<iostream>
#include<fstream>
#include<iomanip>
#include<cstdlib>
#include <ctime>
#include "func.h"
using namespace std;
void menuworking();
void play1();
void play2();
void gameplay1();
void gameplay11();
void gameplay2();
void gameplay22();
void board();
void play1diesplay2();
void play2diesplay1();


                                  const int x = 22;
                                      string token;
                          static string playname1 ,
                                        playname2 ;
                                          long use;
                                           int die;
                 static int format1[25] {0,0,0,0,0,
                                         0,0,0,0,0,
                                         0,0,0,0,0,
                                         0,0,0,0,0,
                                            0,0,0};
static string  obj1[x] = {"\0","\0","\0","\0","\0",
                          "\0","\0","\0","\0","\0",
                          "\0","\0","\0","\0","\0",
                          "\0","\0","\0","\0","\0",
                                        "\0","\0"},
              obj11[x] = {"\0","\0","\0","\0","\0",
                          "\0","\0","\0","\0","\0",
                          "\0","\0","\0","\0","\0",
                          "\0","\0","\0","\0","\0",
                                        "\0","\0"},
              obj2[x] =  {"\0","\0","\0","\0","\0",
                          "\0","\0","\0","\0","\0",
                          "\0","\0","\0","\0","\0",
                          "\0","\0","\0","\0","\0",
                                        "\0","\0"},
              obj22[x] = {"\0","\0","\0","\0","\0",
                          "\0","\0","\0","\0","\0",
                          "\0","\0","\0","\0","\0",
                          "\0","\0","\0","\0","\0",
                                        "\0","\0"};
                                      fstream file;

void play1diesplay2(){
    for(int i = 0 , j = 10 ; i < 8 ; i++){
        if((obj11[i]=="O2")&&(obj22[j]=="X2")){
            for(int i = 0 ; i < 22-1 ; i++){
                if(i==0){
                    obj22[i]="X2";
                }
                else
                    obj22[i]="\0";
            }
            cout<<endl;
            cout<<"Number "<<playname2<< " was demoted to 0 !!"<<endl;
            break;
        }
        if((obj1[i]=="O1")&&(obj2[j]=="X1")){
            for(int i = 0 ; i < 22-1 ; i++){
                if(i==0){
                    obj2[i]="X1";
                }
                else
                    obj2[i]="\0";
            }
            cout<<endl;
            cout<<"Number "<<playname2<< " was demoted to 0 !!"<<endl;
            break;
        }
        if((obj11[i]=="O2")&&(obj2[j]=="X1")){
            for(int i = 0 ; i < 22-1 ; i++){
                if(i==0){
                    obj2[i]="X1";
                }
                else
                    obj2[i]="\0";
            }
            cout<<endl;
            cout<<"Number "<<playname2<< " was demoted to 0 !!"<<endl;
            break;
        }
        if((obj1[i]=="O1")&&(obj22[j]=="X2")){
            for(int i = 0 ; i < 22-1 ; i++){
                if(i==0){
                    obj22[i]="X2";
                }
                else
                    obj22[i]="\0";
            }
            cout<<endl;
            cout<<"Number "<<playname2<< " was demoted to 0 !!"<<endl;
            break;
        }
        j++;
        if(j==18)break;
    }
    for(int i = 10 , j = 0 ; i < 18 ; i++){
        if((obj11[i]=="O2")&&(obj22[j]=="X2")){
            for(int i = 0 ; i < 22-1 ; i++){
                if(i==0){
                    obj22[i]="X2";
                }
                else
                    obj22[i]="\0";
            }
            cout<<endl;
            cout<<"Number "<<playname2<< " was demoted to 0 !!"<<endl;
            break;
        }
        if((obj1[i]=="O1")&&(obj2[j]=="X1")){
            for(int i = 0 ; i < 22-1 ; i++){
                if(i==0){
                    obj2[i]="X1";
                }
                else
                    obj2[i]="\0";
            }
            cout<<endl;
            cout<<"Number "<<playname2<< " was demoted to 0 !!"<<endl;
            break;
        }
        if((obj11[i]=="O2")&&(obj2[j]=="X1")){
            for(int i = 0 ; i < 22-1 ; i++){
                if(i==0){
                    obj2[i]="X1";
                }
                else
                    obj2[i]="\0";
            }
            cout<<endl;
            cout<<"Number "<<playname2<< " was demoted to 0 !!"<<endl;
            break;
        }
        if((obj1[i]=="O1")&&(obj22[j]=="X2")){
            for(int i = 0 ; i < 22-1 ; i++){
                if(i==0){
                    obj22[i]="X2";
                }
                else
                    obj22[i]="\0";
            }
            cout<<endl;
            cout<<"Number "<<playname2<< " was demoted to 0 !!"<<endl;
            break;
        }
        j++;
        if(j==8)break;
    }
    file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Games made by me/Hangman Game/Ludo Game/Ludo game/asset/26.txt",ios::in);
    int x;
    file>>x;
    file.close();
    if(x==0){
        play2();
    }
    if(x==1){
        play2();
    }
    if(x==2){
        gameplay2();
    }
}

void play2diesplay1(){
    for(int i = 0 , j = 10 ; i < 8 ; i++){
        if((obj11[i]=="O2")&&(obj22[j]=="X2")){
            for(int i = 0 ; i < 22-1 ; i++){
                if(i==0){
                    obj11[i]="O2";
                }
                else
                    obj11[i]="\0";
            }
            cout<<endl;
            cout<<"Number "<<playname1<< " was demoted to 0 !!"<<endl;
            break;
        }
        if((obj1[i]=="O1")&&(obj2[j]=="X1")){
            for(int i = 0 ; i < 22-1 ; i++){
                if(i==0){
                    obj1[i]="O1";
                }
                else
                    obj1[i]="\0";
            }
            cout<<endl;
            cout<<"Number "<<playname1<< " was demoted to 0 !!"<<endl;
            break;
        }
        if((obj11[i]=="O2")&&(obj2[j]=="X1")){
            for(int i = 0 ; i < 22-1 ; i++){
                if(i==0){
                    obj11[i]="O2";
                }
                else
                    obj11[i]="\0";
            }
            cout<<endl;
            cout<<"Number "<<playname1<< " was demoted to 0 !!"<<endl;
            break;
        }
        if((obj1[i]=="O1")&&(obj22[j]=="X2")){
            for(int i = 0 ; i < 22-1 ; i++){
                if(i==0){
                    obj1[i]="O1";
                }
                else
                    obj1[i]="\0";
            }
            cout<<endl;
            cout<<"Number "<<playname1<< " was demoted to 0 !!"<<endl;
            break;
        }
        j++;
        if(j==18)break;
    }
    for(int i = 10 , j = 0 ; i < 18 ; i++){
        if((obj11[i]=="O2")&&(obj22[j]=="X2")){
            for(int i = 0 ; i < 22-1 ; i++){
                if(i==0){
                    obj11[i]="O2";
                }
                else
                    obj11[i]="\0";
            }
            cout<<endl;
            cout<<"Number "<<playname1<< " was demoted to 0 !!"<<endl;
            break;
        }
        if((obj1[i]=="O1")&&(obj2[j]=="X1")){
            for(int i = 0 ; i < 22-1 ; i++){
                if(i==0){
                    obj1[i]="O1";
                }
                else
                    obj1[i]="\0";
            }
            cout<<endl;
            cout<<"Number "<<playname1<< " was demoted to 0 !!"<<endl;
            break;
        }
        if((obj11[i]=="O2")&&(obj2[j]=="X1")){
            for(int i = 0 ; i < 22-1 ; i++){
                if(i==0){
                    obj11[i]="O2";
                }
                else
                    obj11[i]="\0";
            }
            cout<<endl;
            cout<<"Number "<<playname1<< " was demoted to 0 !!"<<endl;
            break;
        }
        if((obj1[i]=="O1")&&(obj22[j]=="X2")){
            for(int i = 0 ; i < 22-1 ; i++){
                if(i==0){
                    obj1[i]="O1";
                }
                else
                    obj1[i]="\0";
            }
            cout<<endl;
            cout<<"Number "<<playname1<< " was demoted to 0 !!"<<endl;
            break;
        }
        j++;
        if(j==8)break;
    }
    file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Games made by me/Hangman Game/Ludo Game/Ludo game/asset/16.txt",ios::in);
    int x;
    file>>x;
    file.close();
    if(x==0){
        play1();
    }
    if(x==1){
        play1();
    }
    if(x==2){
        gameplay1();
    }
}

void board(){
    {
        if(obj2[9]=="\0"&&obj22[9]=="\0"){
            format1[0]=3;
        }
        for(int i = 0 , j = 10 , q = 1; i < 8 ; i++){
            if((obj1[i]=="\0"&&obj11[i]=="\0")&&(obj2[j]=="\0"&&obj22[j]=="\0")){
                format1[q]=3;
            }
            j++;q++;
            if(j==18)break;
            if(q==18)break;
        }
        if(obj2[19]=="\0"&&obj22[19]=="\0"){
            format1[10]=3;
        }
        if(obj2[20]=="\0"&&obj22[20]=="\0"){
            format1[11]=3;
        }
        if((obj2[21]=="\0"&&obj22[21]=="\0")&&(obj1[21]=="\0"&&obj11[21]=="\0")){
            format1[12]=3;
        }
        if(obj1[20]=="\0"&&obj11[20]=="\0"){
            format1[13]=3;
        }
        if(obj1[19]=="\0"&&obj11[19]=="\0"){
            format1[14]=3;
        }
        for(int i = 18 , j = 9 , q = 15; i < 10 ; i++){
            if((obj1[i]=="\0"&&obj11[i]=="\0")&&(obj2[j]=="\0"&&obj22[j]=="\0")){
                format1[q]=3;
            }
            j++;q++;
            if(j==18)break;
            if(q==9)break;
        }
        if(obj1[9]=="\0"||obj11[9]=="\0"){
            format1[24]=3;
        }
    }
    {
        if(obj2[9]=="\0"&&obj22[9]=="\0"){
            format1[0]=3;
        }
        for(int i = 0 , j = 10 , q = 1; i < 8 ; i++){
            if(((obj1[i]=="O1"||obj1[i]==" ")&&obj11[i]=="\0")&&(obj2[j]=="\0"&&obj22[j]=="\0")){
                format1[q]=3;
            }
            j++;q++;
            if(j==18)break;
            if(q==18)break;
        }
        if(obj2[19]=="\0"&&obj22[19]=="\0"){
            format1[10]=3;
        }
        if(obj2[20]=="\0"&&obj22[20]=="\0"){
            format1[11]=3;
        }
        if((obj2[21]=="\0"&&obj22[21]=="\0")&&((obj1[21]=="O1"||obj1[21]==" ")&&obj11[21]=="\0")){
            format1[12]=3;
        }
        if((obj1[20]=="O1"||obj1[20]==" ")&&obj11[20]=="\0"){
            format1[13]=3;
        }
        if((obj1[19]=="O1"||obj1[19]==" ")&&obj11[19]=="\0"){
            format1[14]=3;
        }
        for(int i = 19 , j = 9 , q = 15; i < 10 ; i++){
            if(((obj1[i]=="O1"||obj1[i]==" ")&&obj11[i]=="\0")&&(obj2[j]=="\0"&&obj22[j]=="\0")){
                format1[q]=3;
            }
            j++;q++;
            if(j==18)break;
            if(q==9)break;
        }
        if((obj1[9]=="O1"||obj1[9]==" ")||obj11[9]=="\0"){
            format1[24]=3;
        }
    }
    {
        if(obj2[9]=="\0"&&obj22[9]=="\0"){
            format1[0]=3;
        }
        for(int i = 0 , j = 10 , q = 1; i < 8 ; i++){
            if((obj1[i]=="\0"&&(obj11[i]=="O2"||obj11[i]==" "))&&(obj2[j]=="\0"&&obj22[j]=="\0")){
                format1[q]=3;
            }
            j++;q++;
            if(j==18)break;
            if(q==18)break;
        }
        if(obj2[19]=="\0"&&obj22[19]=="\0"){
            format1[10]=3;
        }
        if(obj2[20]=="\0"&&obj22[20]=="\0"){
            format1[11]=3;
        }
        if((obj2[21]=="\0"&&obj22[21]=="\0")&&(obj1[21]=="\0"&&(obj11[21]=="O2"||obj11[21]==" "))){
            format1[12]=3;
        }
        if(obj1[20]=="\0"&&(obj11[20]=="O2"||obj11[20]==" ")){
            format1[13]=3;
        }
        if(obj1[19]=="\0"&&(obj11[19]=="O2"||obj11[19]==" ")){
            format1[14]=3;
        }
        for(int i = 19 , j = 9 , q = 15; i < 10 ; i++){
            if((obj1[i]=="\0"&&(obj11[i]=="O2"||obj11[i]==" "))&&(obj2[j]=="\0"&&obj22[j]=="\0")){
                format1[q]=3;
            }
            j++;q++;
            if(j==18)break;
            if(q==9)break;
        }
        if(obj1[9]=="\0"||(obj11[9]=="O2"||obj11[9]==" ")){
            format1[24]=3;
        }
    }
    {
        if((obj2[9]=="X1"||obj2[9]==" ")&&obj22[9]=="\0"){
            format1[0]=3;
        }
        for(int i = 0 , j = 10 , q = 1; i < 8 ; i++){
            if((obj1[i]=="\0"&&obj11[i]=="\0")&&((obj2[j]=="X1"||obj2[j]==" ")&&obj22[j]=="\0")){
                format1[q]=3;
            }
            j++;q++;
            if(j==18)break;
            if(q==18)break;
        }
        if((obj2[19]=="X1"||obj2[19]==" ")&&obj22[19]=="\0"){
            format1[10]=3;
        }
        if((obj2[20]=="X1"||obj2[20]==" ")&&obj22[20]=="\0"){
            format1[11]=3;
        }
        if(((obj2[21]=="X1"||obj2[21]==" ")&&obj22[21]=="\0")&&(obj1[21]=="\0"&&obj11[21]=="\0")){
            format1[12]=3;
        }
        if(obj1[20]=="\0"&&obj11[20]=="\0"){
            format1[13]=3;
        }
        if(obj1[19]=="\0"&&obj11[19]=="\0"){
            format1[14]=3;
        }
        for(int i = 19 , j = 9 , q = 15; i < 10 ; i++){
            if((obj1[i]=="\0"&&obj11[i]=="\0")&&((obj2[j]=="X1"||obj2[j]==" ")&&obj22[j]=="\0")){
                format1[q]=3;
            }
            j++;q++;
            if(j==18)break;
            if(q==9)break;
        }
        if(obj1[9]=="\0"||obj11[9]=="\0"){
            format1[24]=3;
        }
    }
    {
        if(obj2[9]=="\0"&&(obj22[9]=="X2"||obj22[9]==" ")){
            format1[0]=3;
        }
        for(int i = 0 , j = 10 , q = 1; i < 8 ; i++){
            if((obj1[i]=="\0"&&obj11[i]=="\0")&&(obj2[j]=="\0"&&(obj22[j]=="X2"||obj22[j]==" "))){
                format1[q]=3;
            }
            j++;q++;
            if(j==18)break;
            if(q==18)break;
        }
        if(obj2[19]=="\0"&&(obj22[19]=="X2"||obj22[19]==" ")){
            format1[10]=3;
        }
        if(obj2[20]=="\0"&&(obj22[20]=="X2"||obj22[20]==" ")){
            format1[11]=3;
        }
        if((obj2[21]=="\0"&&(obj22[21]=="X2"||obj22[21]==" "))&&(obj1[21]=="\0"&&obj11[21]=="\0")){
            format1[12]=3;
        }
        if(obj1[20]=="\0"&&obj11[20]=="\0"){
            format1[13]=3;
        }
        if(obj1[19]=="\0"&&obj11[19]=="\0"){
            format1[14]=3;
        }
        for(int i = 19 , j = 9 , q = 15; i < 10 ; i++){
            if((obj1[i]=="\0"&&obj11[i]=="\0")&&(obj2[j]=="\0"&&(obj22[j]=="X2"||obj22[j]==" "))){
                format1[q]=3;
            }
            j++;q++;
            if(j==18)break;
            if(q==9)break;
        }
        if(obj1[9]=="\0"||obj11[9]=="\0"){
            format1[24]=3;
        }
    }
    {
        if((obj2[9]=="X1"||obj2[9]==" ")&&(obj22[9]=="X2"||obj22[9]==" ")){
            format1[0]=3;
        }
        for(int i = 0 , j = 10 , q = 1; i < 8 ; i++){
            if((obj1[i]=="\0"&&obj11[i]=="\0")&&((obj2[j]=="X1"||obj2[j]==" ")&&(obj22[j]=="X2"||obj22[j]==" "))){
                format1[q]=3;
            }
            j++;q++;
            if(j==18)break;
            if(q==18)break;
        }
        if((obj2[19]=="X1"||obj2[19]==" ")&&(obj22[19]=="X2"||obj22[19]==" ")){
            format1[10]=3;
        }
        if((obj2[20]=="X1"||obj2[20]==" ")&&(obj22[20]=="X2"||obj22[20]==" ")){
            format1[11]=3;
        }
        if(((obj2[21]=="X1"||obj2[21]==" ")&&(obj22[21]=="X2"||obj22[21]==" "))&&(obj1[21]=="\0"&&obj11[21]=="\0")){
            format1[12]=3;
        }
        if(obj1[20]=="\0"&&obj11[20]=="\0"){
            format1[13]=3;
        }
        if(obj1[19]=="\0"&&obj11[19]=="\0"){
            format1[14]=3;
        }
        for(int i = 19 , j = 9 , q = 15; i < 10 ; i++){
            if((obj1[i]=="\0"&&obj11[i]=="\0")&&((obj2[j]=="X1"||obj2[j]==" ")&&(obj22[j]=="X2"||obj22[j]==" "))){
                format1[q]=3;
            }
            j++;q++;
            if(j==18)break;
            if(q==9)break;
        }
        if(obj1[9]=="\0"||obj11[9]=="\0"){
            format1[24]=3;
        }
    }
    {
        if(obj2[9]=="\0"&&obj22[9]=="\0"){
            format1[0]=3;
        }
        for(int i = 0 , j = 10 , q = 1; i < 8 ; i++){
            if(((obj1[i]=="O1"||obj1[i]==" ")&&(obj11[i]=="O2"||obj11[i]==" "))&&(obj2[j]=="\0"&&obj22[j]=="\0")){
                format1[q]=3;
            }
            j++;q++;
            if(j==18)break;
            if(q==18)break;
        }
        if(obj2[19]=="\0"&&obj22[19]=="\0"){
            format1[10]=3;
        }
        if(obj2[20]=="\0"&&obj22[20]=="\0"){
            format1[11]=3;
        }
        if((obj2[21]=="\0"&&obj22[21]=="\0")&&((obj1[21]=="O1"||obj1[21]==" ")&&(obj11[21]=="O2"||obj11[21]==" "))){
            format1[12]=3;
        }
        if((obj1[20]=="O1"||obj1[20]==" ")&&(obj11[20]=="O2"||obj11[20]==" ")){
            format1[13]=3;
        }
        if((obj1[19]=="O1"||obj1[19]==" ")&&(obj11[19]=="O2"||obj11[19]==" ")){
            format1[14]=3;
        }
        for(int i = 19 , j = 9 , q = 15; i < 10 ; i++){
            if(((obj1[i]=="O1"||obj1[i]==" ")&&(obj11[i]=="O2"||obj11[i]==" "))&&(obj2[j]=="\0"&&obj22[j]=="\0")){
                format1[q]=3;
            }
            j++;q++;
            if(j==18)break;
            if(q==9)break;
        }
        if((obj1[9]=="O1"||obj1[9]==" ")&&(obj11[9]=="O2"||obj11[9]==" ")){
            format1[24]=3;
        }
    }
    if((obj1[0]=="\0"&&obj11[0]=="\0")&&(obj2[0]=="\0"&&obj22[0]=="\0")){
        cout<<"       ______________________________________"<<endl;
        cout<<"       |     |     |     |     |     |      |"<<endl;
        cout<<"         "<<setw(format1[7])<<obj1[6]<<obj2[16]<<obj11[6]<<obj22[16]<<"   "<<setw(format1[8])<<obj1[7]<<obj2[17]<<obj11[7]<<obj22[17]<<"   "<<setw(format1[9])<<obj1[8]<<obj2[18]<<"   "<<setw(format1[24])<<obj1[9]<<obj11[9]<<"   "<<setw(format1[23])<<obj1[10]<<obj2[0]<<obj11[10]<<obj22[0]<<" X1 X2   "<<endl;
        cout<<"       |_____|_____|_____|_____|_____|      |"<<endl;
        cout<<"       |     |     |     |     |     |______|"<<endl;
        cout<<"         "<<setw(format1[6])<<obj1[5]<<obj2[15]<<obj11[5]<<obj22[15]<<"         "<<setw(format1[10])<<obj2[19]<<obj22[19]<<"         "<<setw(format1[22])<<obj1[11]<<obj2[1]<<obj11[11]<<obj22[1]<<"         "<<endl;
        cout<<"       |_____|     |_____|     |_____|       "<<endl;
        cout<<"       |     |     |     |     |     |       "<<endl;
        cout<<"         "<<setw(format1[5])<<obj1[4]<<obj2[14]<<obj11[4]<<obj22[14]<<"         "<<setw(format1[11])<<obj2[20]<<obj22[20]<<"         "<<setw(format1[21])<<obj1[12]<<obj2[2]<<obj11[12]<<obj22[2]<<"         "<<endl;
        cout<<"       |_____|   __|_____|__   |_____|       "<<endl;
        cout<<"       |     |   |         |   |     |       "<<endl;
        cout<<"         "<<setw(format1[4])<<obj1[3]<<obj2[13]<<obj11[3]<<obj22[13]<<"         "<<setw(format1[12])<<obj1[21]<<obj2[21]<<obj11[21]<<obj22[21]<<"         "<<setw(format1[20])<<obj1[13]<<obj2[3]<<obj11[13]<<obj22[3]<<"         "<<endl;
        cout<<"       |_____|   |_________|   |_____|       "<<endl;
        cout<<"       |     |     |     |     |     |       "<<endl;
        cout<<"         "<<setw(format1[3])<<obj1[2]<<obj2[12]<<obj11[2]<<obj22[12]<<"         "<<setw(format1[13])<<obj1[20]<<obj11[20]<<"         "<<setw(format1[19])<<obj1[14]<<obj2[4]<<obj11[14]<<obj22[4]<<"         "<<endl;
        cout<<"       |_____|     |_____|     |_____|       "<<endl;
        cout<<"       |     |     |     |     |     |       "<<endl;
        cout<<"_______  "<<setw(format1[2])<<obj1[1]<<obj2[11]<<obj11[1]<<obj22[11]<<"         "<<setw(format1[14])<<obj1[19]<<obj11[19]<<"         "<<setw(format1[18])<<obj1[15]<<obj2[5]<<obj11[15]<<obj22[5]<<"         "<<endl;
        cout<<"|      |-----|-----|-----|-----|-----|       "<<endl;
        cout<<"| O1 O2  "<<setw(format1[1])<<obj1[0]<<obj2[10]<<obj11[0]<<obj22[10]<<"   "<<setw(format1[0])<<obj2[9]<<obj22[9]<<"   "<<setw(format1[15])<<obj1[18]<<obj2[8]<<obj11[18]<<obj22[8]<<"   "<<setw(format1[16])<<obj1[17]<<obj2[7]<<obj11[17]<<obj22[7]<<"   "<<setw(format1[17])<<obj1[16]<<obj11[16]<<obj2[6]<<obj22[6]<<"         "<<endl;
        cout<<"|      |     |     |     |     |     |       "<<endl;
        cout<<"|-------------------------------------       "<<endl;
        cout<<endl;cout<<endl;cout<<endl;cout<<endl;
    }
    if(((obj1[0]=="O1"||obj1[0]==" ")&&obj11[0]=="\0")&&(obj2[0]=="\0"&&obj22[0]=="\0")){
        cout<<"       ______________________________________"<<endl;
        cout<<"       |     |     |     |     |     |      |"<<endl;
        cout<<"         "<<setw(format1[7])<<obj1[6]<<obj2[16]<<obj11[6]<<obj22[16]<<"   "<<setw(format1[8])<<obj1[7]<<obj2[17]<<obj11[7]<<obj22[17]<<"   "<<setw(format1[9])<<obj1[8]<<obj2[18]<<"   "<<setw(format1[24])<<obj1[9]<<obj11[9]<<"   "<<setw(format1[23])<<obj1[10]<<obj2[0]<<obj11[10]<<obj22[0]<<" X1 X2   "<<endl;
        cout<<"       |_____|_____|_____|_____|_____|      |"<<endl;
        cout<<"       |     |     |     |     |     |______|"<<endl;
        cout<<"         "<<setw(format1[6])<<obj1[5]<<obj2[15]<<obj11[5]<<obj22[15]<<"         "<<setw(format1[10])<<obj2[19]<<obj22[19]<<"         "<<setw(format1[22])<<obj1[11]<<obj2[1]<<obj11[11]<<obj22[1]<<"         "<<endl;
        cout<<"       |_____|     |_____|     |_____|       "<<endl;
        cout<<"       |     |     |     |     |     |       "<<endl;
        cout<<"         "<<setw(format1[5])<<obj1[4]<<obj2[14]<<obj11[4]<<obj22[14]<<"         "<<setw(format1[11])<<obj2[20]<<obj22[20]<<"         "<<setw(format1[21])<<obj1[12]<<obj2[2]<<obj11[12]<<obj22[2]<<"         "<<endl;
        cout<<"       |_____|   __|_____|__   |_____|       "<<endl;
        cout<<"       |     |   |         |   |     |       "<<endl;
        cout<<"         "<<setw(format1[4])<<obj1[3]<<obj2[13]<<obj11[3]<<obj22[13]<<"         "<<setw(format1[12])<<obj1[21]<<obj2[21]<<obj11[21]<<obj22[21]<<"         "<<setw(format1[20])<<obj1[13]<<obj2[3]<<obj11[13]<<obj22[3]<<"         "<<endl;
        cout<<"       |_____|   |_________|   |_____|       "<<endl;
        cout<<"       |     |     |     |     |     |       "<<endl;
        cout<<"         "<<setw(format1[3])<<obj1[2]<<obj2[12]<<obj11[2]<<obj22[12]<<"         "<<setw(format1[13])<<obj1[20]<<obj11[20]<<"         "<<setw(format1[19])<<obj1[14]<<obj2[4]<<obj11[14]<<obj22[4]<<"         "<<endl;
        cout<<"       |_____|     |_____|     |_____|       "<<endl;
        cout<<"       |     |     |     |     |     |       "<<endl;
        cout<<"_______  "<<setw(format1[2])<<obj1[1]<<obj2[11]<<obj11[1]<<obj22[11]<<"         "<<setw(format1[14])<<obj1[19]<<obj11[19]<<"         "<<setw(format1[18])<<obj1[15]<<obj2[5]<<obj11[15]<<obj22[5]<<"         "<<endl;
        cout<<"|      |-----|-----|-----|-----|-----|       "<<endl;
        cout<<"|    O2  "<<setw(format1[1])<<obj1[0]<<obj2[10]<<obj11[0]<<obj22[10]<<"   "<<setw(format1[0])<<obj2[9]<<obj22[9]<<"   "<<setw(format1[15])<<obj1[18]<<obj2[8]<<obj11[18]<<obj22[8]<<"   "<<setw(format1[16])<<obj1[17]<<obj2[7]<<obj11[17]<<obj22[7]<<"   "<<setw(format1[17])<<obj1[16]<<obj11[16]<<obj2[6]<<obj22[6]<<"         "<<endl;
        cout<<"|      |     |     |     |     |     |       "<<endl;
        cout<<"|-------------------------------------       "<<endl;
        cout<<endl;cout<<endl;cout<<endl;cout<<endl;
    }
    if((obj1[0]=="\0"&&(obj11[0]=="O2"||obj11[0]==" "))&&(obj2[0]=="\0"&&obj22[0]=="\0")){
        cout<<"       ______________________________________"<<endl;
        cout<<"       |     |     |     |     |     |      |"<<endl;
        cout<<"         "<<setw(format1[7])<<obj1[6]<<obj2[16]<<obj11[6]<<obj22[16]<<"   "<<setw(format1[8])<<obj1[7]<<obj2[17]<<obj11[7]<<obj22[17]<<"   "<<setw(format1[9])<<obj1[8]<<obj2[18]<<"   "<<setw(format1[24])<<obj1[9]<<obj11[9]<<"   "<<setw(format1[23])<<obj1[10]<<obj2[0]<<obj11[10]<<obj22[0]<<" X1 X2   "<<endl;
        cout<<"       |_____|_____|_____|_____|_____|      |"<<endl;
        cout<<"       |     |     |     |     |     |______|"<<endl;
        cout<<"         "<<setw(format1[6])<<obj1[5]<<obj2[15]<<obj11[5]<<obj22[15]<<"         "<<setw(format1[10])<<obj2[19]<<obj22[19]<<"         "<<setw(format1[22])<<obj1[11]<<obj2[1]<<obj11[11]<<obj22[1]<<"         "<<endl;
        cout<<"       |_____|     |_____|     |_____|       "<<endl;
        cout<<"       |     |     |     |     |     |       "<<endl;
        cout<<"         "<<setw(format1[5])<<obj1[4]<<obj2[14]<<obj11[4]<<obj22[14]<<"         "<<setw(format1[11])<<obj2[20]<<obj22[20]<<"         "<<setw(format1[21])<<obj1[12]<<obj2[2]<<obj11[12]<<obj22[2]<<"         "<<endl;
        cout<<"       |_____|   __|_____|__   |_____|       "<<endl;
        cout<<"       |     |   |         |   |     |       "<<endl;
        cout<<"         "<<setw(format1[4])<<obj1[3]<<obj2[13]<<obj11[3]<<obj22[13]<<"         "<<setw(format1[12])<<obj1[21]<<obj2[21]<<obj11[21]<<obj22[21]<<"         "<<setw(format1[20])<<obj1[13]<<obj2[3]<<obj11[13]<<obj22[3]<<"         "<<endl;
        cout<<"       |_____|   |_________|   |_____|       "<<endl;
        cout<<"       |     |     |     |     |     |       "<<endl;
        cout<<"         "<<setw(format1[3])<<obj1[2]<<obj2[12]<<obj11[2]<<obj22[12]<<"         "<<setw(format1[13])<<obj1[20]<<obj11[20]<<"         "<<setw(format1[19])<<obj1[14]<<obj2[4]<<obj11[14]<<obj22[4]<<"         "<<endl;
        cout<<"       |_____|     |_____|     |_____|       "<<endl;
        cout<<"       |     |     |     |     |     |       "<<endl;
        cout<<"_______  "<<setw(format1[2])<<obj1[1]<<obj2[11]<<obj11[1]<<obj22[11]<<"         "<<setw(format1[14])<<obj1[19]<<obj11[19]<<"         "<<setw(format1[18])<<obj1[15]<<obj2[5]<<obj11[15]<<obj22[5]<<"         "<<endl;
        cout<<"|      |-----|-----|-----|-----|-----|       "<<endl;
        cout<<"| O1     "<<setw(format1[1])<<obj1[0]<<obj2[10]<<obj11[0]<<obj22[10]<<"   "<<setw(format1[0])<<obj2[9]<<obj22[9]<<"   "<<setw(format1[15])<<obj1[18]<<obj2[8]<<obj11[18]<<obj22[8]<<"   "<<setw(format1[16])<<obj1[17]<<obj2[7]<<obj11[17]<<obj22[7]<<"   "<<setw(format1[17])<<obj1[16]<<obj11[16]<<obj2[6]<<obj22[6]<<"         "<<endl;
        cout<<"|      |     |     |     |     |     |       "<<endl;
        cout<<"|-------------------------------------       "<<endl;
        cout<<endl;cout<<endl;cout<<endl;cout<<endl;
    }
    if((obj1[0]=="\0"&&obj11[0]=="\0")&&((obj2[0]=="X1"||obj2[0]==" ")&&obj22[0]=="\0")){
        cout<<"       ______________________________________"<<endl;
        cout<<"       |     |     |     |     |     |      |"<<endl;
        cout<<"         "<<setw(format1[7])<<obj1[6]<<obj2[16]<<obj11[6]<<obj22[16]<<"   "<<setw(format1[8])<<obj1[7]<<obj2[17]<<obj11[7]<<obj22[17]<<"   "<<setw(format1[9])<<obj1[8]<<obj2[18]<<"   "<<setw(format1[24])<<obj1[9]<<obj11[9]<<"   "<<setw(format1[23])<<obj1[10]<<obj2[0]<<obj11[10]<<obj22[0]<<"    X2   "<<endl;
        cout<<"       |_____|_____|_____|_____|_____|      |"<<endl;
        cout<<"       |     |     |     |     |     |______|"<<endl;
        cout<<"         "<<setw(format1[6])<<obj1[5]<<obj2[15]<<obj11[5]<<obj22[15]<<"         "<<setw(format1[10])<<obj2[19]<<obj22[19]<<"         "<<setw(format1[22])<<obj1[11]<<obj2[1]<<obj11[11]<<obj22[1]<<"         "<<endl;
        cout<<"       |_____|     |_____|     |_____|       "<<endl;
        cout<<"       |     |     |     |     |     |       "<<endl;
        cout<<"         "<<setw(format1[5])<<obj1[4]<<obj2[14]<<obj11[4]<<obj22[14]<<"         "<<setw(format1[11])<<obj2[20]<<obj22[20]<<"         "<<setw(format1[21])<<obj1[12]<<obj2[2]<<obj11[12]<<obj22[2]<<"         "<<endl;
        cout<<"       |_____|   __|_____|__   |_____|       "<<endl;
        cout<<"       |     |   |         |   |     |       "<<endl;
        cout<<"         "<<setw(format1[4])<<obj1[3]<<obj2[13]<<obj11[3]<<obj22[13]<<"         "<<setw(format1[12])<<obj1[21]<<obj2[21]<<obj11[21]<<obj22[21]<<"         "<<setw(format1[20])<<obj1[13]<<obj2[3]<<obj11[13]<<obj22[3]<<"         "<<endl;
        cout<<"       |_____|   |_________|   |_____|       "<<endl;
        cout<<"       |     |     |     |     |     |       "<<endl;
        cout<<"         "<<setw(format1[3])<<obj1[2]<<obj2[12]<<obj11[2]<<obj22[12]<<"         "<<setw(format1[13])<<obj1[20]<<obj11[20]<<"         "<<setw(format1[19])<<obj1[14]<<obj2[4]<<obj11[14]<<obj22[4]<<"         "<<endl;
        cout<<"       |_____|     |_____|     |_____|       "<<endl;
        cout<<"       |     |     |     |     |     |       "<<endl;
        cout<<"_______  "<<setw(format1[2])<<obj1[1]<<obj2[11]<<obj11[1]<<obj22[11]<<"         "<<setw(format1[14])<<obj1[19]<<obj11[19]<<"         "<<setw(format1[18])<<obj1[15]<<obj2[5]<<obj11[15]<<obj22[5]<<"         "<<endl;
        cout<<"|      |-----|-----|-----|-----|-----|       "<<endl;
        cout<<"| O1 O2  "<<setw(format1[1])<<obj1[0]<<obj2[10]<<obj11[0]<<obj22[10]<<"   "<<setw(format1[0])<<obj2[9]<<obj22[9]<<"   "<<setw(format1[15])<<obj1[18]<<obj2[8]<<obj11[18]<<obj22[8]<<"   "<<setw(format1[16])<<obj1[17]<<obj2[7]<<obj11[17]<<obj22[7]<<"   "<<setw(format1[17])<<obj1[16]<<obj11[16]<<obj2[6]<<obj22[6]<<"         "<<endl;
        cout<<"|      |     |     |     |     |     |       "<<endl;
        cout<<"|-------------------------------------       "<<endl;
        cout<<endl;cout<<endl;cout<<endl;cout<<endl;
    }
    if((obj1[0]=="\0"&&obj11[0]=="\0")&&(obj2[0]=="\0"&&(obj22[0]=="X2"||obj22[0]==" "))){
        cout<<"       ______________________________________"<<endl;
        cout<<"       |     |     |     |     |     |      |"<<endl;
        cout<<"         "<<setw(format1[7])<<obj1[6]<<obj2[16]<<obj11[6]<<obj22[16]<<"   "<<setw(format1[8])<<obj1[7]<<obj2[17]<<obj11[7]<<obj22[17]<<"   "<<setw(format1[9])<<obj1[8]<<obj2[18]<<"   "<<setw(format1[24])<<obj1[9]<<obj11[9]<<"   "<<setw(format1[23])<<obj1[10]<<obj2[0]<<obj11[10]<<obj22[0]<<"    X2   "<<endl;
        cout<<"       |_____|_____|_____|_____|_____|      |"<<endl;
        cout<<"       |     |     |     |     |     |______|"<<endl;
        cout<<"         "<<setw(format1[6])<<obj1[5]<<obj2[15]<<obj11[5]<<obj22[15]<<"         "<<setw(format1[10])<<obj2[19]<<obj22[19]<<"         "<<setw(format1[22])<<obj1[11]<<obj2[1]<<obj11[11]<<obj22[1]<<"         "<<endl;
        cout<<"       |_____|     |_____|     |_____|       "<<endl;
        cout<<"       |     |     |     |     |     |       "<<endl;
        cout<<"         "<<setw(format1[5])<<obj1[4]<<obj2[14]<<obj11[4]<<obj22[14]<<"         "<<setw(format1[11])<<obj2[20]<<obj22[20]<<"         "<<setw(format1[21])<<obj1[12]<<obj2[2]<<obj11[12]<<obj22[2]<<"         "<<endl;
        cout<<"       |_____|   __|_____|__   |_____|       "<<endl;
        cout<<"       |     |   |         |   |     |       "<<endl;
        cout<<"         "<<setw(format1[4])<<obj1[3]<<obj2[13]<<obj11[3]<<obj22[13]<<"         "<<setw(format1[12])<<obj1[21]<<obj2[21]<<obj11[21]<<obj22[21]<<"         "<<setw(format1[20])<<obj1[13]<<obj2[3]<<obj11[13]<<obj22[3]<<"         "<<endl;
        cout<<"       |_____|   |_________|   |_____|       "<<endl;
        cout<<"       |     |     |     |     |     |       "<<endl;
        cout<<"         "<<setw(format1[3])<<obj1[2]<<obj2[12]<<obj11[2]<<obj22[12]<<"         "<<setw(format1[13])<<obj1[20]<<obj11[20]<<"         "<<setw(format1[19])<<obj1[14]<<obj2[4]<<obj11[14]<<obj22[4]<<"         "<<endl;
        cout<<"       |_____|     |_____|     |_____|       "<<endl;
        cout<<"       |     |     |     |     |     |       "<<endl;
        cout<<"_______  "<<setw(format1[2])<<obj1[1]<<obj2[11]<<obj11[1]<<obj22[11]<<"         "<<setw(format1[14])<<obj1[19]<<obj11[19]<<"         "<<setw(format1[18])<<obj1[15]<<obj2[5]<<obj11[15]<<obj22[5]<<"         "<<endl;
        cout<<"|      |-----|-----|-----|-----|-----|       "<<endl;
        cout<<"| O1 O2  "<<setw(format1[1])<<obj1[0]<<obj2[10]<<obj11[0]<<obj22[10]<<"   "<<setw(format1[0])<<obj2[9]<<obj22[9]<<"   "<<setw(format1[15])<<obj1[18]<<obj2[8]<<obj11[18]<<obj22[8]<<"   "<<setw(format1[16])<<obj1[17]<<obj2[7]<<obj11[17]<<obj22[7]<<"   "<<setw(format1[17])<<obj1[16]<<obj11[16]<<obj2[6]<<obj22[6]<<"         "<<endl;
        cout<<"|      |     |     |     |     |     |       "<<endl;
        cout<<"|-------------------------------------       "<<endl;
        cout<<endl;cout<<endl;cout<<endl;cout<<endl;
    }
    if((obj1[0]=="\0"&&obj11[0]=="\0")&&((obj2[0]=="X1"||obj2[0]==" ")&&(obj22[0]=="X2"||obj22[0]==" "))){
        cout<<"       ______________________________________"<<endl;
        cout<<"       |     |     |     |     |     |      |"<<endl;
        cout<<"         "<<setw(format1[7])<<obj1[6]<<obj2[16]<<obj11[6]<<obj22[16]<<"   "<<setw(format1[8])<<obj1[7]<<obj2[17]<<obj11[7]<<obj22[17]<<"   "<<setw(format1[9])<<obj1[8]<<obj2[18]<<"   "<<setw(format1[24])<<obj1[9]<<obj11[9]<<"   "<<setw(format1[23])<<obj1[10]<<obj2[0]<<obj11[10]<<obj22[0]<<"         "<<endl;
        cout<<"       |_____|_____|_____|_____|_____|      |"<<endl;
        cout<<"       |     |     |     |     |     |______|"<<endl;
        cout<<"         "<<setw(format1[6])<<obj1[5]<<obj2[15]<<obj11[5]<<obj22[15]<<"         "<<setw(format1[10])<<obj2[19]<<obj22[19]<<"         "<<setw(format1[22])<<obj1[11]<<obj2[1]<<obj11[11]<<obj22[1]<<"         "<<endl;
        cout<<"       |_____|     |_____|     |_____|       "<<endl;
        cout<<"       |     |     |     |     |     |       "<<endl;
        cout<<"         "<<setw(format1[5])<<obj1[4]<<obj2[14]<<obj11[4]<<obj22[14]<<"         "<<setw(format1[11])<<obj2[20]<<obj22[20]<<"         "<<setw(format1[21])<<obj1[12]<<obj2[2]<<obj11[12]<<obj22[2]<<"         "<<endl;
        cout<<"       |_____|   __|_____|__   |_____|       "<<endl;
        cout<<"       |     |   |         |   |     |       "<<endl;
        cout<<"         "<<setw(format1[4])<<obj1[3]<<obj2[13]<<obj11[3]<<obj22[13]<<"         "<<setw(format1[12])<<obj1[21]<<obj2[21]<<obj11[21]<<obj22[21]<<"         "<<setw(format1[20])<<obj1[13]<<obj2[3]<<obj11[13]<<obj22[3]<<"         "<<endl;
        cout<<"       |_____|   |_________|   |_____|       "<<endl;
        cout<<"       |     |     |     |     |     |       "<<endl;
        cout<<"         "<<setw(format1[3])<<obj1[2]<<obj2[12]<<obj11[2]<<obj22[12]<<"         "<<setw(format1[13])<<obj1[20]<<obj11[20]<<"         "<<setw(format1[19])<<obj1[14]<<obj2[4]<<obj11[14]<<obj22[4]<<"         "<<endl;
        cout<<"       |_____|     |_____|     |_____|       "<<endl;
        cout<<"       |     |     |     |     |     |       "<<endl;
        cout<<"_______  "<<setw(format1[2])<<obj1[1]<<obj2[11]<<obj11[1]<<obj22[11]<<"         "<<setw(format1[14])<<obj1[19]<<obj11[19]<<"         "<<setw(format1[18])<<obj1[15]<<obj2[5]<<obj11[15]<<obj22[5]<<"         "<<endl;
        cout<<"|      |-----|-----|-----|-----|-----|       "<<endl;
        cout<<"| O1 O2  "<<setw(format1[1])<<obj1[0]<<obj2[10]<<obj11[0]<<obj22[10]<<"   "<<setw(format1[0])<<obj2[9]<<obj22[9]<<"   "<<setw(format1[15])<<obj1[18]<<obj2[8]<<obj11[18]<<obj22[8]<<"   "<<setw(format1[16])<<obj1[17]<<obj2[7]<<obj11[17]<<obj22[7]<<"   "<<setw(format1[17])<<obj1[16]<<obj11[16]<<obj2[6]<<obj22[6]<<"         "<<endl;
        cout<<"|      |     |     |     |     |     |       "<<endl;
        cout<<"|-------------------------------------       "<<endl;
        cout<<endl;cout<<endl;cout<<endl;cout<<endl;
    }
    if(((obj1[0]=="O1"||obj1[0]==" ")&&(obj11[0]=="O2"||obj11[0]==" "))&&(obj2[0]=="\0"&&obj22[0]=="\0")){
        cout<<"       ______________________________________"<<endl;
        cout<<"       |     |     |     |     |     |      |"<<endl;
        cout<<"         "<<setw(format1[7])<<obj1[6]<<obj2[16]<<obj11[6]<<obj22[16]<<"   "<<setw(format1[8])<<obj1[7]<<obj2[17]<<obj11[7]<<obj22[17]<<"   "<<setw(format1[9])<<obj1[8]<<obj2[18]<<"   "<<setw(format1[24])<<obj1[9]<<obj11[9]<<"   "<<setw(format1[23])<<obj1[10]<<obj2[0]<<obj11[10]<<obj22[0]<<" X1 X2   "<<endl;
        cout<<"       |_____|_____|_____|_____|_____|      |"<<endl;
        cout<<"       |     |     |     |     |     |______|"<<endl;
        cout<<"         "<<setw(format1[6])<<obj1[5]<<obj2[15]<<obj11[5]<<obj22[15]<<"         "<<setw(format1[10])<<obj2[19]<<obj22[19]<<"         "<<setw(format1[22])<<obj1[11]<<obj2[1]<<obj11[11]<<obj22[1]<<"         "<<endl;
        cout<<"       |_____|     |_____|     |_____|       "<<endl;
        cout<<"       |     |     |     |     |     |       "<<endl;
        cout<<"         "<<setw(format1[5])<<obj1[4]<<obj2[14]<<obj11[4]<<obj22[14]<<"         "<<setw(format1[11])<<obj2[20]<<obj22[20]<<"         "<<setw(format1[21])<<obj1[12]<<obj2[2]<<obj11[12]<<obj22[2]<<"         "<<endl;
        cout<<"       |_____|   __|_____|__   |_____|       "<<endl;
        cout<<"       |     |   |         |   |     |       "<<endl;
        cout<<"         "<<setw(format1[4])<<obj1[3]<<obj2[13]<<obj11[3]<<obj22[13]<<"         "<<setw(format1[12])<<obj1[21]<<obj2[21]<<obj11[21]<<obj22[21]<<"         "<<setw(format1[20])<<obj1[13]<<obj2[3]<<obj11[13]<<obj22[3]<<"         "<<endl;
        cout<<"       |_____|   |_________|   |_____|       "<<endl;
        cout<<"       |     |     |     |     |     |       "<<endl;
        cout<<"         "<<setw(format1[3])<<obj1[2]<<obj2[12]<<obj11[2]<<obj22[12]<<"         "<<setw(format1[13])<<obj1[20]<<obj11[20]<<"         "<<setw(format1[19])<<obj1[14]<<obj2[4]<<obj11[14]<<obj22[4]<<"         "<<endl;
        cout<<"       |_____|     |_____|     |_____|       "<<endl;
        cout<<"       |     |     |     |     |     |       "<<endl;
        cout<<"_______  "<<setw(format1[2])<<obj1[1]<<obj2[11]<<obj11[1]<<obj22[11]<<"         "<<setw(format1[14])<<obj1[19]<<obj11[19]<<"         "<<setw(format1[18])<<obj1[15]<<obj2[5]<<obj11[15]<<obj22[5]<<"         "<<endl;
        cout<<"|      |-----|-----|-----|-----|-----|       "<<endl;
        cout<<"|        "<<setw(format1[1])<<obj1[0]<<obj2[10]<<obj11[0]<<obj22[10]<<"   "<<setw(format1[0])<<obj2[9]<<obj22[9]<<"   "<<setw(format1[15])<<obj1[18]<<obj2[8]<<obj11[18]<<obj22[8]<<"   "<<setw(format1[16])<<obj1[17]<<obj2[7]<<obj11[17]<<obj22[7]<<"   "<<setw(format1[17])<<obj1[16]<<obj11[16]<<obj2[6]<<obj22[6]<<"         "<<endl;
        cout<<"|      |     |     |     |     |     |       "<<endl;
        cout<<"|-------------------------------------       "<<endl;
        cout<<endl;cout<<endl;cout<<endl;cout<<endl;
    }
    if((obj1[0]=="\0"&&(obj11[0]=="O2"||obj11[0]==" "))&&((obj2[0]=="X1"||obj2[0]==" ")&&(obj22[0]=="X2"||obj22[0]==" "))){
        cout<<"       ______________________________________"<<endl;
        cout<<"       |     |     |     |     |     |      |"<<endl;
        cout<<"         "<<setw(format1[7])<<obj1[6]<<obj2[16]<<obj11[6]<<obj22[16]<<"   "<<setw(format1[8])<<obj1[7]<<obj2[17]<<obj11[7]<<obj22[17]<<"   "<<setw(format1[9])<<obj1[8]<<obj2[18]<<"   "<<setw(format1[24])<<obj1[9]<<obj11[9]<<"   "<<setw(format1[23])<<obj1[10]<<obj2[0]<<obj11[10]<<obj22[0]<<"         "<<endl;
        cout<<"       |_____|_____|_____|_____|_____|      |"<<endl;
        cout<<"       |     |     |     |     |     |______|"<<endl;
        cout<<"         "<<setw(format1[6])<<obj1[5]<<obj2[15]<<obj11[5]<<obj22[15]<<"         "<<setw(format1[10])<<obj2[19]<<obj22[19]<<"         "<<setw(format1[22])<<obj1[11]<<obj2[1]<<obj11[11]<<obj22[1]<<"         "<<endl;
        cout<<"       |_____|     |_____|     |_____|       "<<endl;
        cout<<"       |     |     |     |     |     |       "<<endl;
        cout<<"         "<<setw(format1[5])<<obj1[4]<<obj2[14]<<obj11[4]<<obj22[14]<<"         "<<setw(format1[11])<<obj2[20]<<obj22[20]<<"         "<<setw(format1[21])<<obj1[12]<<obj2[2]<<obj11[12]<<obj22[2]<<"         "<<endl;
        cout<<"       |_____|   __|_____|__   |_____|       "<<endl;
        cout<<"       |     |   |         |   |     |       "<<endl;
        cout<<"         "<<setw(format1[4])<<obj1[3]<<obj2[13]<<obj11[3]<<obj22[13]<<"         "<<setw(format1[12])<<obj1[21]<<obj2[21]<<obj11[21]<<obj22[21]<<"         "<<setw(format1[20])<<obj1[13]<<obj2[3]<<obj11[13]<<obj22[3]<<"         "<<endl;
        cout<<"       |_____|   |_________|   |_____|       "<<endl;
        cout<<"       |     |     |     |     |     |       "<<endl;
        cout<<"         "<<setw(format1[3])<<obj1[2]<<obj2[12]<<obj11[2]<<obj22[12]<<"         "<<setw(format1[13])<<obj1[20]<<obj11[20]<<"         "<<setw(format1[19])<<obj1[14]<<obj2[4]<<obj11[14]<<obj22[4]<<"         "<<endl;
        cout<<"       |_____|     |_____|     |_____|       "<<endl;
        cout<<"       |     |     |     |     |     |       "<<endl;
        cout<<"_______  "<<setw(format1[2])<<obj1[1]<<obj2[11]<<obj11[1]<<obj22[11]<<"         "<<setw(format1[14])<<obj1[19]<<obj11[19]<<"         "<<setw(format1[18])<<obj1[15]<<obj2[5]<<obj11[15]<<obj22[5]<<"         "<<endl;
        cout<<"|      |-----|-----|-----|-----|-----|       "<<endl;
        cout<<"| O1     "<<setw(format1[1])<<obj1[0]<<obj2[10]<<obj11[0]<<obj22[10]<<"   "<<setw(format1[0])<<obj2[9]<<obj22[9]<<"   "<<setw(format1[15])<<obj1[18]<<obj2[8]<<obj11[18]<<obj22[8]<<"   "<<setw(format1[16])<<obj1[17]<<obj2[7]<<obj11[17]<<obj22[7]<<"   "<<setw(format1[17])<<obj1[16]<<obj11[16]<<obj2[6]<<obj22[6]<<"         "<<endl;
        cout<<"|      |     |     |     |     |     |       "<<endl;
        cout<<"|-------------------------------------       "<<endl;
        cout<<endl;cout<<endl;cout<<endl;cout<<endl;
    }
    if(((obj1[0]=="O1"||obj1[0]==" ")&&obj11[0]=="\0")&&((obj2[0]=="X1"||obj2[0]==" ")&&(obj22[0]=="X2"||obj22[0]==" "))){
        cout<<"       ______________________________________"<<endl;
        cout<<"       |     |     |     |     |     |      |"<<endl;
        cout<<"         "<<setw(format1[7])<<obj1[6]<<obj2[16]<<obj11[6]<<obj22[16]<<"   "<<setw(format1[8])<<obj1[7]<<obj2[17]<<obj11[7]<<obj22[17]<<"   "<<setw(format1[9])<<obj1[8]<<obj2[18]<<"   "<<setw(format1[24])<<obj1[9]<<obj11[9]<<"   "<<setw(format1[23])<<obj1[10]<<obj2[0]<<obj11[10]<<obj22[0]<<"         "<<endl;
        cout<<"       |_____|_____|_____|_____|_____|      |"<<endl;
        cout<<"       |     |     |     |     |     |______|"<<endl;
        cout<<"         "<<setw(format1[6])<<obj1[5]<<obj2[15]<<obj11[5]<<obj22[15]<<"         "<<setw(format1[10])<<obj2[19]<<obj22[19]<<"         "<<setw(format1[22])<<obj1[11]<<obj2[1]<<obj11[11]<<obj22[1]<<"         "<<endl;
        cout<<"       |_____|     |_____|     |_____|       "<<endl;
        cout<<"       |     |     |     |     |     |       "<<endl;
        cout<<"         "<<setw(format1[5])<<obj1[4]<<obj2[14]<<obj11[4]<<obj22[14]<<"         "<<setw(format1[11])<<obj2[20]<<obj22[20]<<"         "<<setw(format1[21])<<obj1[12]<<obj2[2]<<obj11[12]<<obj22[2]<<"         "<<endl;
        cout<<"       |_____|   __|_____|__   |_____|       "<<endl;
        cout<<"       |     |   |         |   |     |       "<<endl;
        cout<<"         "<<setw(format1[4])<<obj1[3]<<obj2[13]<<obj11[3]<<obj22[13]<<"         "<<setw(format1[12])<<obj1[21]<<obj2[21]<<obj11[21]<<obj22[21]<<"         "<<setw(format1[20])<<obj1[13]<<obj2[3]<<obj11[13]<<obj22[3]<<"         "<<endl;
        cout<<"       |_____|   |_________|   |_____|       "<<endl;
        cout<<"       |     |     |     |     |     |       "<<endl;
        cout<<"         "<<setw(format1[3])<<obj1[2]<<obj2[12]<<obj11[2]<<obj22[12]<<"         "<<setw(format1[13])<<obj1[20]<<obj11[20]<<"         "<<setw(format1[19])<<obj1[14]<<obj2[4]<<obj11[14]<<obj22[4]<<"         "<<endl;
        cout<<"       |_____|     |_____|     |_____|       "<<endl;
        cout<<"       |     |     |     |     |     |       "<<endl;
        cout<<"_______  "<<setw(format1[2])<<obj1[1]<<obj2[11]<<obj11[1]<<obj22[11]<<"         "<<setw(format1[14])<<obj1[19]<<obj11[19]<<"         "<<setw(format1[18])<<obj1[15]<<obj2[5]<<obj11[15]<<obj22[5]<<"         "<<endl;
        cout<<"|      |-----|-----|-----|-----|-----|       "<<endl;
        cout<<"|    O2  "<<setw(format1[1])<<obj1[0]<<obj2[10]<<obj11[0]<<obj22[10]<<"   "<<setw(format1[0])<<obj2[9]<<obj22[9]<<"   "<<setw(format1[15])<<obj1[18]<<obj2[8]<<obj11[18]<<obj22[8]<<"   "<<setw(format1[16])<<obj1[17]<<obj2[7]<<obj11[17]<<obj22[7]<<"   "<<setw(format1[17])<<obj1[16]<<obj11[16]<<obj2[6]<<obj22[6]<<"         "<<endl;
        cout<<"|      |     |     |     |     |     |       "<<endl;
        cout<<"|-------------------------------------       "<<endl;
        cout<<endl;cout<<endl;cout<<endl;cout<<endl;
    }
    if(((obj1[0]=="O1"||obj1[0]==" ")&&(obj11[0]=="O2"||obj11[0]==" "))&&(obj2[0]=="\0"&&(obj22[0]=="X2"||obj22[0]==" "))){
        cout<<"       ______________________________________"<<endl;
        cout<<"       |     |     |     |     |     |      |"<<endl;
        cout<<"         "<<setw(format1[7])<<obj1[6]<<obj2[16]<<obj11[6]<<obj22[16]<<"   "<<setw(format1[8])<<obj1[7]<<obj2[17]<<obj11[7]<<obj22[17]<<"   "<<setw(format1[9])<<obj1[8]<<obj2[18]<<"   "<<setw(format1[24])<<obj1[9]<<obj11[9]<<"   "<<setw(format1[23])<<obj1[10]<<obj2[0]<<obj11[10]<<obj22[0]<<" X1      "<<endl;
        cout<<"       |_____|_____|_____|_____|_____|      |"<<endl;
        cout<<"       |     |     |     |     |     |______|"<<endl;
        cout<<"         "<<setw(format1[6])<<obj1[5]<<obj2[15]<<obj11[5]<<obj22[15]<<"         "<<setw(format1[10])<<obj2[19]<<obj22[19]<<"         "<<setw(format1[22])<<obj1[11]<<obj2[1]<<obj11[11]<<obj22[1]<<"         "<<endl;
        cout<<"       |_____|     |_____|     |_____|       "<<endl;
        cout<<"       |     |     |     |     |     |       "<<endl;
        cout<<"         "<<setw(format1[5])<<obj1[4]<<obj2[14]<<obj11[4]<<obj22[14]<<"         "<<setw(format1[11])<<obj2[20]<<obj22[20]<<"         "<<setw(format1[21])<<obj1[12]<<obj2[2]<<obj11[12]<<obj22[2]<<"         "<<endl;
        cout<<"       |_____|   __|_____|__   |_____|       "<<endl;
        cout<<"       |     |   |         |   |     |       "<<endl;
        cout<<"         "<<setw(format1[4])<<obj1[3]<<obj2[13]<<obj11[3]<<obj22[13]<<"         "<<setw(format1[12])<<obj1[21]<<obj2[21]<<obj11[21]<<obj22[21]<<"         "<<setw(format1[20])<<obj1[13]<<obj2[3]<<obj11[13]<<obj22[3]<<"         "<<endl;
        cout<<"       |_____|   |_________|   |_____|       "<<endl;
        cout<<"       |     |     |     |     |     |       "<<endl;
        cout<<"         "<<setw(format1[3])<<obj1[2]<<obj2[12]<<obj11[2]<<obj22[12]<<"         "<<setw(format1[13])<<obj1[20]<<obj11[20]<<"         "<<setw(format1[19])<<obj1[14]<<obj2[4]<<obj11[14]<<obj22[4]<<"         "<<endl;
        cout<<"       |_____|     |_____|     |_____|       "<<endl;
        cout<<"       |     |     |     |     |     |       "<<endl;
        cout<<"_______  "<<setw(format1[2])<<obj1[1]<<obj2[11]<<obj11[1]<<obj22[11]<<"         "<<setw(format1[14])<<obj1[19]<<obj11[19]<<"         "<<setw(format1[18])<<obj1[15]<<obj2[5]<<obj11[15]<<obj22[5]<<"         "<<endl;
        cout<<"|      |-----|-----|-----|-----|-----|       "<<endl;
        cout<<"|        "<<setw(format1[1])<<obj1[0]<<obj2[10]<<obj11[0]<<obj22[10]<<"   "<<setw(format1[0])<<obj2[9]<<obj22[9]<<"   "<<setw(format1[15])<<obj1[18]<<obj2[8]<<obj11[18]<<obj22[8]<<"   "<<setw(format1[16])<<obj1[17]<<obj2[7]<<obj11[17]<<obj22[7]<<"   "<<setw(format1[17])<<obj1[16]<<obj11[16]<<obj2[6]<<obj22[6]<<"         "<<endl;
        cout<<"|      |     |     |     |     |     |       "<<endl;
        cout<<"|-------------------------------------       "<<endl;
        cout<<endl;cout<<endl;cout<<endl;cout<<endl;
    }
    if(((obj1[0]=="O1"||obj1[0]==" ")&&(obj11[0]=="O2"||obj11[0]==" "))&&((obj2[0]=="X1"||obj2[0]==" ")&&obj22[0]=="\0")){
        cout<<"       ______________________________________"<<endl;
        cout<<"       |     |     |     |     |     |      |"<<endl;
        cout<<"         "<<setw(format1[7])<<obj1[6]<<obj2[16]<<obj11[6]<<obj22[16]<<"   "<<setw(format1[8])<<obj1[7]<<obj2[17]<<obj11[7]<<obj22[17]<<"   "<<setw(format1[9])<<obj1[8]<<obj2[18]<<"   "<<setw(format1[24])<<obj1[9]<<obj11[9]<<"   "<<setw(format1[23])<<obj1[10]<<obj2[0]<<obj11[10]<<obj22[0]<<"    X2   "<<endl;
        cout<<"       |_____|_____|_____|_____|_____|      |"<<endl;
        cout<<"       |     |     |     |     |     |______|"<<endl;
        cout<<"         "<<setw(format1[6])<<obj1[5]<<obj2[15]<<obj11[5]<<obj22[15]<<"         "<<setw(format1[10])<<obj2[19]<<obj22[19]<<"         "<<setw(format1[22])<<obj1[11]<<obj2[1]<<obj11[11]<<obj22[1]<<"         "<<endl;
        cout<<"       |_____|     |_____|     |_____|       "<<endl;
        cout<<"       |     |     |     |     |     |       "<<endl;
        cout<<"         "<<setw(format1[5])<<obj1[4]<<obj2[14]<<obj11[4]<<obj22[14]<<"         "<<setw(format1[11])<<obj2[20]<<obj22[20]<<"         "<<setw(format1[21])<<obj1[12]<<obj2[2]<<obj11[12]<<obj22[2]<<"         "<<endl;
        cout<<"       |_____|   __|_____|__   |_____|       "<<endl;
        cout<<"       |     |   |         |   |     |       "<<endl;
        cout<<"         "<<setw(format1[4])<<obj1[3]<<obj2[13]<<obj11[3]<<obj22[13]<<"         "<<setw(format1[12])<<obj1[21]<<obj2[21]<<obj11[21]<<obj22[21]<<"         "<<setw(format1[20])<<obj1[13]<<obj2[3]<<obj11[13]<<obj22[3]<<"         "<<endl;
        cout<<"       |_____|   |_________|   |_____|       "<<endl;
        cout<<"       |     |     |     |     |     |       "<<endl;
        cout<<"         "<<setw(format1[3])<<obj1[2]<<obj2[12]<<obj11[2]<<obj22[12]<<"         "<<setw(format1[13])<<obj1[20]<<obj11[20]<<"         "<<setw(format1[19])<<obj1[14]<<obj2[4]<<obj11[14]<<obj22[4]<<"         "<<endl;
        cout<<"       |_____|     |_____|     |_____|       "<<endl;
        cout<<"       |     |     |     |     |     |       "<<endl;
        cout<<"_______  "<<setw(format1[2])<<obj1[1]<<obj2[11]<<obj11[1]<<obj22[11]<<"         "<<setw(format1[14])<<obj1[19]<<obj11[19]<<"         "<<setw(format1[18])<<obj1[15]<<obj2[5]<<obj11[15]<<obj22[5]<<"         "<<endl;
        cout<<"|      |-----|-----|-----|-----|-----|       "<<endl;
        cout<<"|        "<<setw(format1[1])<<obj1[0]<<obj2[10]<<obj11[0]<<obj22[10]<<"   "<<setw(format1[0])<<obj2[9]<<obj22[9]<<"   "<<setw(format1[15])<<obj1[18]<<obj2[8]<<obj11[18]<<obj22[8]<<"   "<<setw(format1[16])<<obj1[17]<<obj2[7]<<obj11[17]<<obj22[7]<<"   "<<setw(format1[17])<<obj1[16]<<obj11[16]<<obj2[6]<<obj22[6]<<"         "<<endl;
        cout<<"|      |     |     |     |     |     |       "<<endl;
        cout<<"|-------------------------------------       "<<endl;
        cout<<endl;cout<<endl;cout<<endl;cout<<endl;
    }
    if(((obj1[0]=="O1"||obj1[0]==" ")&&(obj11[0]=="O2"||obj11[0]==" "))&&((obj2[0]=="X1"||obj2[0]==" ")&&(obj22[0]=="X2"||obj22[0]==" "))){
        cout<<"       ______________________________________"<<endl;
        cout<<"       |     |     |     |     |     |      |"<<endl;
        cout<<"         "<<setw(format1[7])<<obj1[6]<<obj2[16]<<obj11[6]<<obj22[16]<<"   "<<setw(format1[8])<<obj1[7]<<obj2[17]<<obj11[7]<<obj22[17]<<"   "<<setw(format1[9])<<obj1[8]<<obj2[18]<<"   "<<setw(format1[24])<<obj1[9]<<obj11[9]<<"   "<<setw(format1[23])<<obj1[10]<<obj2[0]<<obj11[10]<<obj22[0]<<"         "<<endl;
        cout<<"       |_____|_____|_____|_____|_____|      |"<<endl;
        cout<<"       |     |     |     |     |     |______|"<<endl;
        cout<<"         "<<setw(format1[6])<<obj1[5]<<obj2[15]<<obj11[5]<<obj22[15]<<"         "<<setw(format1[10])<<obj2[19]<<obj22[19]<<"         "<<setw(format1[22])<<obj1[11]<<obj2[1]<<obj11[11]<<obj22[1]<<"         "<<endl;
        cout<<"       |_____|     |_____|     |_____|       "<<endl;
        cout<<"       |     |     |     |     |     |       "<<endl;
        cout<<"         "<<setw(format1[5])<<obj1[4]<<obj2[14]<<obj11[4]<<obj22[14]<<"         "<<setw(format1[11])<<obj2[20]<<obj22[20]<<"         "<<setw(format1[21])<<obj1[12]<<obj2[2]<<obj11[12]<<obj22[2]<<"         "<<endl;
        cout<<"       |_____|   __|_____|__   |_____|       "<<endl;
        cout<<"       |     |   |         |   |     |       "<<endl;
        cout<<"         "<<setw(format1[4])<<obj1[3]<<obj2[13]<<obj11[3]<<obj22[13]<<"         "<<setw(format1[12])<<obj1[21]<<obj2[21]<<obj11[21]<<obj22[21]<<"         "<<setw(format1[20])<<obj1[13]<<obj2[3]<<obj11[13]<<obj22[3]<<"         "<<endl;
        cout<<"       |_____|   |_________|   |_____|       "<<endl;
        cout<<"       |     |     |     |     |     |       "<<endl;
        cout<<"         "<<setw(format1[3])<<obj1[2]<<obj2[12]<<obj11[2]<<obj22[12]<<"         "<<setw(format1[13])<<obj1[20]<<obj11[20]<<"         "<<setw(format1[19])<<obj1[14]<<obj2[4]<<obj11[14]<<obj22[4]<<"         "<<endl;
        cout<<"       |_____|     |_____|     |_____|       "<<endl;
        cout<<"       |     |     |     |     |     |       "<<endl;
        cout<<"_______  "<<setw(format1[2])<<obj1[1]<<obj2[11]<<obj11[1]<<obj22[11]<<"         "<<setw(format1[14])<<obj1[19]<<obj11[19]<<"         "<<setw(format1[18])<<obj1[15]<<obj2[5]<<obj11[15]<<obj22[5]<<"         "<<endl;
        cout<<"|      |-----|-----|-----|-----|-----|       "<<endl;
        cout<<"|        "<<setw(format1[1])<<obj1[0]<<obj2[10]<<obj11[0]<<obj22[10]<<"   "<<setw(format1[0])<<obj2[9]<<obj22[9]<<"   "<<setw(format1[15])<<obj1[18]<<obj2[8]<<obj11[18]<<obj22[8]<<"   "<<setw(format1[16])<<obj1[17]<<obj2[7]<<obj11[17]<<obj22[7]<<"   "<<setw(format1[17])<<obj1[16]<<obj11[16]<<obj2[6]<<obj22[6]<<"         "<<endl;
        cout<<"|      |     |     |     |     |     |       "<<endl;
        cout<<"|-------------------------------------       "<<endl;
        cout<<endl;cout<<endl;cout<<endl;cout<<endl;
    }
    if(((obj1[0]=="O1"||obj1[0]==" ")&&obj11[0]=="\0")&&((obj2[0]=="X1"||obj2[0]==" ")&&obj22[0]=="\0")){
        cout<<"       ______________________________________"<<endl;
        cout<<"       |     |     |     |     |     |      |"<<endl;
        cout<<"         "<<setw(format1[7])<<obj1[6]<<obj2[16]<<obj11[6]<<obj22[16]<<"   "<<setw(format1[8])<<obj1[7]<<obj2[17]<<obj11[7]<<obj22[17]<<"   "<<setw(format1[9])<<obj1[8]<<obj2[18]<<"   "<<setw(format1[24])<<obj1[9]<<obj11[9]<<"   "<<setw(format1[23])<<obj1[10]<<obj2[0]<<obj11[10]<<obj22[0]<<"    X2   "<<endl;
        cout<<"       |_____|_____|_____|_____|_____|      |"<<endl;
        cout<<"       |     |     |     |     |     |______|"<<endl;
        cout<<"         "<<setw(format1[6])<<obj1[5]<<obj2[15]<<obj11[5]<<obj22[15]<<"         "<<setw(format1[10])<<obj2[19]<<obj22[19]<<"         "<<setw(format1[22])<<obj1[11]<<obj2[1]<<obj11[11]<<obj22[1]<<"         "<<endl;
        cout<<"       |_____|     |_____|     |_____|       "<<endl;
        cout<<"       |     |     |     |     |     |       "<<endl;
        cout<<"         "<<setw(format1[5])<<obj1[4]<<obj2[14]<<obj11[4]<<obj22[14]<<"         "<<setw(format1[11])<<obj2[20]<<obj22[20]<<"         "<<setw(format1[21])<<obj1[12]<<obj2[2]<<obj11[12]<<obj22[2]<<"         "<<endl;
        cout<<"       |_____|   __|_____|__   |_____|       "<<endl;
        cout<<"       |     |   |         |   |     |       "<<endl;
        cout<<"         "<<setw(format1[4])<<obj1[3]<<obj2[13]<<obj11[3]<<obj22[13]<<"         "<<setw(format1[12])<<obj1[21]<<obj2[21]<<obj11[21]<<obj22[21]<<"         "<<setw(format1[20])<<obj1[13]<<obj2[3]<<obj11[13]<<obj22[3]<<"         "<<endl;
        cout<<"       |_____|   |_________|   |_____|       "<<endl;
        cout<<"       |     |     |     |     |     |       "<<endl;
        cout<<"         "<<setw(format1[3])<<obj1[2]<<obj2[12]<<obj11[2]<<obj22[12]<<"         "<<setw(format1[13])<<obj1[20]<<obj11[20]<<"         "<<setw(format1[19])<<obj1[14]<<obj2[4]<<obj11[14]<<obj22[4]<<"         "<<endl;
        cout<<"       |_____|     |_____|     |_____|       "<<endl;
        cout<<"       |     |     |     |     |     |       "<<endl;
        cout<<"_______  "<<setw(format1[2])<<obj1[1]<<obj2[11]<<obj11[1]<<obj22[11]<<"         "<<setw(format1[14])<<obj1[19]<<obj11[19]<<"         "<<setw(format1[18])<<obj1[15]<<obj2[5]<<obj11[15]<<obj22[5]<<"         "<<endl;
        cout<<"|      |-----|-----|-----|-----|-----|       "<<endl;
        cout<<"|    O2  "<<setw(format1[1])<<obj1[0]<<obj2[10]<<obj11[0]<<obj22[10]<<"   "<<setw(format1[0])<<obj2[9]<<obj22[9]<<"   "<<setw(format1[15])<<obj1[18]<<obj2[8]<<obj11[18]<<obj22[8]<<"   "<<setw(format1[16])<<obj1[17]<<obj2[7]<<obj11[17]<<obj22[7]<<"   "<<setw(format1[17])<<obj1[16]<<obj11[16]<<obj2[6]<<obj22[6]<<"         "<<endl;
        cout<<"|      |     |     |     |     |     |       "<<endl;
        cout<<"|-------------------------------------       "<<endl;
        cout<<endl;cout<<endl;cout<<endl;cout<<endl;
    }
    if(((obj1[0]=="O1"||obj1[0]==" ")&&obj11[0]=="\0")&&(obj2[0]=="\0"&&(obj22[0]=="X2"||obj22[0]==" "))){
        cout<<"       ______________________________________"<<endl;
        cout<<"       |     |     |     |     |     |      |"<<endl;
        cout<<"         "<<setw(format1[7])<<obj1[6]<<obj2[16]<<obj11[6]<<obj22[16]<<"   "<<setw(format1[8])<<obj1[7]<<obj2[17]<<obj11[7]<<obj22[17]<<"   "<<setw(format1[9])<<obj1[8]<<obj2[18]<<"   "<<setw(format1[24])<<obj1[9]<<obj11[9]<<"   "<<setw(format1[23])<<obj1[10]<<obj2[0]<<obj11[10]<<obj22[0]<<" X1      "<<endl;
        cout<<"       |_____|_____|_____|_____|_____|      |"<<endl;
        cout<<"       |     |     |     |     |     |______|"<<endl;
        cout<<"         "<<setw(format1[6])<<obj1[5]<<obj2[15]<<obj11[5]<<obj22[15]<<"         "<<setw(format1[10])<<obj2[19]<<obj22[19]<<"         "<<setw(format1[22])<<obj1[11]<<obj2[1]<<obj11[11]<<obj22[1]<<"         "<<endl;
        cout<<"       |_____|     |_____|     |_____|       "<<endl;
        cout<<"       |     |     |     |     |     |       "<<endl;
        cout<<"         "<<setw(format1[5])<<obj1[4]<<obj2[14]<<obj11[4]<<obj22[14]<<"         "<<setw(format1[11])<<obj2[20]<<obj22[20]<<"         "<<setw(format1[21])<<obj1[12]<<obj2[2]<<obj11[12]<<obj22[2]<<"         "<<endl;
        cout<<"       |_____|   __|_____|__   |_____|       "<<endl;
        cout<<"       |     |   |         |   |     |       "<<endl;
        cout<<"         "<<setw(format1[4])<<obj1[3]<<obj2[13]<<obj11[3]<<obj22[13]<<"         "<<setw(format1[12])<<obj1[21]<<obj2[21]<<obj11[21]<<obj22[21]<<"         "<<setw(format1[20])<<obj1[13]<<obj2[3]<<obj11[13]<<obj22[3]<<"         "<<endl;
        cout<<"       |_____|   |_________|   |_____|       "<<endl;
        cout<<"       |     |     |     |     |     |       "<<endl;
        cout<<"         "<<setw(format1[3])<<obj1[2]<<obj2[12]<<obj11[2]<<obj22[12]<<"         "<<setw(format1[13])<<obj1[20]<<obj11[20]<<"         "<<setw(format1[19])<<obj1[14]<<obj2[4]<<obj11[14]<<obj22[4]<<"         "<<endl;
        cout<<"       |_____|     |_____|     |_____|       "<<endl;
        cout<<"       |     |     |     |     |     |       "<<endl;
        cout<<"_______  "<<setw(format1[2])<<obj1[1]<<obj2[11]<<obj11[1]<<obj22[11]<<"         "<<setw(format1[14])<<obj1[19]<<obj11[19]<<"         "<<setw(format1[18])<<obj1[15]<<obj2[5]<<obj11[15]<<obj22[5]<<"         "<<endl;
        cout<<"|      |-----|-----|-----|-----|-----|       "<<endl;
        cout<<"|    O2  "<<setw(format1[1])<<obj1[0]<<obj2[10]<<obj11[0]<<obj22[10]<<"   "<<setw(format1[0])<<obj2[9]<<obj22[9]<<"   "<<setw(format1[15])<<obj1[18]<<obj2[8]<<obj11[18]<<obj22[8]<<"   "<<setw(format1[16])<<obj1[17]<<obj2[7]<<obj11[17]<<obj22[7]<<"   "<<setw(format1[17])<<obj1[16]<<obj11[16]<<obj2[6]<<obj22[6]<<"         "<<endl;
        cout<<"|      |     |     |     |     |     |       "<<endl;
        cout<<"|-------------------------------------       "<<endl;
        cout<<endl;cout<<endl;cout<<endl;cout<<endl;
    }
    if((obj1[0]=="\0"&&(obj11[0]=="O2"||obj11[0]==" "))&&((obj2[0]=="X1"||obj2[0]==" ")&&obj22[0]=="\0")){
        cout<<"       ______________________________________"<<endl;
        cout<<"       |     |     |     |     |     |      |"<<endl;
        cout<<"         "<<setw(format1[7])<<obj1[6]<<obj2[16]<<obj11[6]<<obj22[16]<<"   "<<setw(format1[8])<<obj1[7]<<obj2[17]<<obj11[7]<<obj22[17]<<"   "<<setw(format1[9])<<obj1[8]<<obj2[18]<<"   "<<setw(format1[24])<<obj1[9]<<obj11[9]<<"   "<<setw(format1[23])<<obj1[10]<<obj2[0]<<obj11[10]<<obj22[0]<<"    X2   "<<endl;
        cout<<"       |_____|_____|_____|_____|_____|      |"<<endl;
        cout<<"       |     |     |     |     |     |______|"<<endl;
        cout<<"         "<<setw(format1[6])<<obj1[5]<<obj2[15]<<obj11[5]<<obj22[15]<<"         "<<setw(format1[10])<<obj2[19]<<obj22[19]<<"         "<<setw(format1[22])<<obj1[11]<<obj2[1]<<obj11[11]<<obj22[1]<<"         "<<endl;
        cout<<"       |_____|     |_____|     |_____|       "<<endl;
        cout<<"       |     |     |     |     |     |       "<<endl;
        cout<<"         "<<setw(format1[5])<<obj1[4]<<obj2[14]<<obj11[4]<<obj22[14]<<"         "<<setw(format1[11])<<obj2[20]<<obj22[20]<<"         "<<setw(format1[21])<<obj1[12]<<obj2[2]<<obj11[12]<<obj22[2]<<"         "<<endl;
        cout<<"       |_____|   __|_____|__   |_____|       "<<endl;
        cout<<"       |     |   |         |   |     |       "<<endl;
        cout<<"         "<<setw(format1[4])<<obj1[3]<<obj2[13]<<obj11[3]<<obj22[13]<<"         "<<setw(format1[12])<<obj1[21]<<obj2[21]<<obj11[21]<<obj22[21]<<"         "<<setw(format1[20])<<obj1[13]<<obj2[3]<<obj11[13]<<obj22[3]<<"         "<<endl;
        cout<<"       |_____|   |_________|   |_____|       "<<endl;
        cout<<"       |     |     |     |     |     |       "<<endl;
        cout<<"         "<<setw(format1[3])<<obj1[2]<<obj2[12]<<obj11[2]<<obj22[12]<<"         "<<setw(format1[13])<<obj1[20]<<obj11[20]<<"         "<<setw(format1[19])<<obj1[14]<<obj2[4]<<obj11[14]<<obj22[4]<<"         "<<endl;
        cout<<"       |_____|     |_____|     |_____|       "<<endl;
        cout<<"       |     |     |     |     |     |       "<<endl;
        cout<<"_______  "<<setw(format1[2])<<obj1[1]<<obj2[11]<<obj11[1]<<obj22[11]<<"         "<<setw(format1[14])<<obj1[19]<<obj11[19]<<"         "<<setw(format1[18])<<obj1[15]<<obj2[5]<<obj11[15]<<obj22[5]<<"         "<<endl;
        cout<<"|      |-----|-----|-----|-----|-----|       "<<endl;
        cout<<"| O1     "<<setw(format1[1])<<obj1[0]<<obj2[10]<<obj11[0]<<obj22[10]<<"   "<<setw(format1[0])<<obj2[9]<<obj22[9]<<"   "<<setw(format1[15])<<obj1[18]<<obj2[8]<<obj11[18]<<obj22[8]<<"   "<<setw(format1[16])<<obj1[17]<<obj2[7]<<obj11[17]<<obj22[7]<<"   "<<setw(format1[17])<<obj1[16]<<obj11[16]<<obj2[6]<<obj22[6]<<"         "<<endl;
        cout<<"|      |     |     |     |     |     |       "<<endl;
        cout<<"|-------------------------------------       "<<endl;
        cout<<endl;cout<<endl;cout<<endl;cout<<endl;
    }
    if((obj1[0]=="\0"&&(obj11[0]=="O2"||obj11[0]==" "))&&(obj2[0]=="\0"&&(obj22[0]=="X2"||obj22[0]==" "))){
        cout<<"       ______________________________________"<<endl;
        cout<<"       |     |     |     |     |     |      |"<<endl;
        cout<<"         "<<setw(format1[7])<<obj1[6]<<obj2[16]<<obj11[6]<<obj22[16]<<"   "<<setw(format1[8])<<obj1[7]<<obj2[17]<<obj11[7]<<obj22[17]<<"   "<<setw(format1[9])<<obj1[8]<<obj2[18]<<"   "<<setw(format1[24])<<obj1[9]<<obj11[9]<<"   "<<setw(format1[23])<<obj1[10]<<obj2[0]<<obj11[10]<<obj22[0]<<" X1      "<<endl;
        cout<<"       |_____|_____|_____|_____|_____|      |"<<endl;
        cout<<"       |     |     |     |     |     |______|"<<endl;
        cout<<"         "<<setw(format1[6])<<obj1[5]<<obj2[15]<<obj11[5]<<obj22[15]<<"         "<<setw(format1[10])<<obj2[19]<<obj22[19]<<"         "<<setw(format1[22])<<obj1[11]<<obj2[1]<<obj11[11]<<obj22[1]<<"         "<<endl;
        cout<<"       |_____|     |_____|     |_____|       "<<endl;
        cout<<"       |     |     |     |     |     |       "<<endl;
        cout<<"         "<<setw(format1[5])<<obj1[4]<<obj2[14]<<obj11[4]<<obj22[14]<<"         "<<setw(format1[11])<<obj2[20]<<obj22[20]<<"         "<<setw(format1[21])<<obj1[12]<<obj2[2]<<obj11[12]<<obj22[2]<<"         "<<endl;
        cout<<"       |_____|   __|_____|__   |_____|       "<<endl;
        cout<<"       |     |   |         |   |     |       "<<endl;
        cout<<"         "<<setw(format1[4])<<obj1[3]<<obj2[13]<<obj11[3]<<obj22[13]<<"         "<<setw(format1[12])<<obj1[21]<<obj2[21]<<obj11[21]<<obj22[21]<<"         "<<setw(format1[20])<<obj1[13]<<obj2[3]<<obj11[13]<<obj22[3]<<"         "<<endl;
        cout<<"       |_____|   |_________|   |_____|       "<<endl;
        cout<<"       |     |     |     |     |     |       "<<endl;
        cout<<"         "<<setw(format1[3])<<obj1[2]<<obj2[12]<<obj11[2]<<obj22[12]<<"         "<<setw(format1[13])<<obj1[20]<<obj11[20]<<"         "<<setw(format1[19])<<obj1[14]<<obj2[4]<<obj11[14]<<obj22[4]<<"         "<<endl;
        cout<<"       |_____|     |_____|     |_____|       "<<endl;
        cout<<"       |     |     |     |     |     |       "<<endl;
        cout<<"_______  "<<setw(format1[2])<<obj1[1]<<obj2[11]<<obj11[1]<<obj22[11]<<"         "<<setw(format1[14])<<obj1[19]<<obj11[19]<<"         "<<setw(format1[18])<<obj1[15]<<obj2[5]<<obj11[15]<<obj22[5]<<"         "<<endl;
        cout<<"|      |-----|-----|-----|-----|-----|       "<<endl;
        cout<<"| O1     "<<setw(format1[1])<<obj1[0]<<obj2[10]<<obj11[0]<<obj22[10]<<"   "<<setw(format1[0])<<obj2[9]<<obj22[9]<<"   "<<setw(format1[15])<<obj1[18]<<obj2[8]<<obj11[18]<<obj22[8]<<"   "<<setw(format1[16])<<obj1[17]<<obj2[7]<<obj11[17]<<obj22[7]<<"   "<<setw(format1[17])<<obj1[16]<<obj11[16]<<obj2[6]<<obj22[6]<<"         "<<endl;
        cout<<"|      |     |     |     |     |     |       "<<endl;
        cout<<"|-------------------------------------       "<<endl;
        cout<<endl;cout<<endl;cout<<endl;cout<<endl;
    }
}

void play1(){
    srand((unsigned) time(NULL));
    file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Games made by me/Hangman Game/Ludo Game/Ludo game/asset/16.txt",ios::in);
    int x;
    file>>x;
    file.close();
    if(x==1){
        gameplay1();
    }
    if(x!=1){
        cout<<"Player : "<<playname1<<endl;
        cout<<"Enter 1 to start rolling die : ";
        while (true) {
            cin>>token;
            if(token=="1")break;
            if(token!="1"){
                cout<<"Wrong input !!"<<endl;
            }
        }
        if(token=="1"){
            srand((unsigned) time(NULL));
            die=rand()%9;
            if(die!=6){
                cout<<"NO six to move boxes."<<endl;
                board();
                file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Games made by me/Hangman Game/Ludo Game/Ludo game/asset/26.txt",ios::in);
                int x;
                file>>x;
                file.close();
                if(x==0){
                    play2();
                }
                if(x==1){
                    play2();
                }
                if(x==2){
                    gameplay2();
                }
            }
            if(die==7||die==6||die==8||die==9){
                die=6;
                if(die==6){
                    file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Games made by me/Hangman Game/Ludo Game/Ludo game/asset/16.txt",ios::out);
                    file<<1;
                    file.close();
                    cout<<endl; cout<<endl;
                    cout<<"You got : "<<die<<" in die rolling."<<endl;
                    cout<<"Congrats you can move your playing piece"<<endl;
                    cout<<"Which piece you want to move 1 or 2 "<<endl;
                    die=1;
                    while (true) {
                        cin>>token;
                        if(token=="1")break;
                        if(token=="2")break;
                        if(token!="1"||token!="2"){
                            cout<<"Wrong input !!"<<endl;
                        }
                    }
                    if(token=="1"){
                        file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Games made by me/Hangman Game/Ludo Game/Ludo game/asset/tokenO.txt",ios::out|ios::trunc);
                        file.close();
                        file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Games made by me/Hangman Game/Ludo Game/Ludo game/asset/tokenO.txt",ios::out);
                        file<<1;
                        file.close();
                        for(int i = 0 ; i < die ; i++){
                            if(i==22){
                                break;
                            }
                            if(obj1[i]==" "||obj1[i]=="O1"){
                                die++;
                                continue;
                            }
                            if(obj1[i]=="\0"){
                                if(i<=21){
                                    obj1[i]="O1";
                                }
                                if(i>=1){
                                    obj1[i-1]=" ";
                                }
                            }
                            if((obj1[21]=="O1")&&(obj11[21]=="O2")){
                                cout<<"PLay one win "<<endl;
                                board();
                                menuworking();
                            }
                        }
                    }
                    if(token=="2"){
                        file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Games made by me/Hangman Game/Ludo Game/Ludo game/asset/tokenO.txt",ios::out|ios::trunc);
                        file.close();
                        file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Games made by me/Hangman Game/Ludo Game/Ludo game/asset/tokenO.txt",ios::out);
                        file<<2;
                        file.close();
                        for(int i = 0 ; i < die ; i++){
                            if(i==22){
                                break;
                            }
                            if(obj11[i]==" "||obj11[i]=="O2"){
                                die++;
                                continue;
                            }
                            if(obj11[i]=="\0"){
                                if(i<=21){
                                    obj11[i]="O2";
                                }
                                if(i>=1){
                                    obj11[i-1]=" ";
                                }
                            }
                            if((obj1[21]=="O1")&&(obj11[21]=="O2")){
                                cout<<"PLay one win "<<endl;
                                board();
                                menuworking();
                            }
                        }
                    }
                    board();
                    play1diesplay2();
                }
            }
        }
    }
}

void play2(){
    srand((unsigned) time(NULL));
    file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Games made by me/Hangman Game/Ludo Game/Ludo game/asset/26.txt",ios::in);
    int x;
    file>>x;
    file.close();
    if(x==1){
        gameplay2();
    }
    if(x!=1){
        cout<<"Player : "<<playname2<<endl;
        cout<<"Enter 1 to start rolling die : ";
        while (true) {
            cin>>token;
            if(token=="1")break;
            if(token!="1"){
                cout<<"Wrong input !!"<<endl;
            }
        }
        if(token=="1"){
            srand((unsigned) time(NULL));
            die=rand()%9;
            if(die!=6){
                cout<<"NO six to move boxes."<<endl;
                board();
                file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Games made by me/Hangman Game/Ludo Game/Ludo game/asset/16.txt",ios::in);
                int x;
                file>>x;
                file.close();
                if(x==0){
                    play1();
                }
                if(x==1){
                    play1();
                }
                if(x==2){
                    gameplay1();
                }
            }
            if(die==7||die==6||die==8||die==9){
                die=6;
                if(die==6){
                    file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Games made by me/Hangman Game/Ludo Game/Ludo game/asset/26.txt",ios::out);
                    file<<1;
                    file.close();
                    cout<<endl; cout<<endl;
                    cout<<"You got : "<<die<<" in die rolling."<<endl;
                    cout<<"Congrats you can move your playing piece"<<endl;
                    cout<<"Which piece you want to move 1 or 2 "<<endl;
                    die=1;
                    while (true) {
                        cin>>token;
                        if(token=="1")break;
                        if(token=="2")break;
                        if(token!="1"||token!="2"){
                            cout<<"Wrong input !!"<<endl;
                        }
                    }
                    if(token=="1"){
                        file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Games made by me/Hangman Game/Ludo Game/Ludo game/asset/tokenX.txt",ios::out|ios::trunc);
                        file.close();
                        file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Games made by me/Hangman Game/Ludo Game/Ludo game/asset/tokenX.txt",ios::out);
                        file<<1;
                        file.close();
                        for(int i = 0 ; i < die ; i++){
                            if(i==22){
                                break;
                            }
                            if(obj2[i]==" "||obj2[i]=="X1"){
                                die++;
                                continue;
                            }
                            if(obj2[i]=="\0"){
                                if(i<=21){
                                    obj2[i]="X1";
                                }
                                if(i>=1){
                                    obj2[i-1]=(" ");
                                }
                            }
                            if(obj2[21]=="X1"&&obj22[21]=="X2"){
                                cout<<"PLay Two win "<<endl;
                                board();
                                menuworking();
                            }
                        }
                    }
                    if(token=="2"){
                        file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Games made by me/Hangman Game/Ludo Game/Ludo game/asset/tokenX.txt",ios::out|ios::trunc);
                        file.close();
                        file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Games made by me/Hangman Game/Ludo Game/Ludo game/asset/tokenX.txt",ios::out);
                        file<<2;
                        file.close();
                        for(int i = 0 ; i < die ; i++){
                            if(i==22){
                                break;
                            }
                            if(obj22[i]==" "||obj22[i]=="X2"){
                                die++;
                                continue;
                            }
                            if(obj22[i]=="\0"){
                                if(i<=21){
                                    obj22[i]="X2";
                                }
                                if(i>=1){
                                    obj22[i-1]=(" ");
                                }
                            }
                            if(obj2[21]=="X1"&&obj22[21]=="X2"){
                                cout<<"PLay Two win "<<endl;
                                board();
                                menuworking();
                            }
                        }
                    }
                    board();
                    play2diesplay1();
                }
            }
        }
    }
}

void gameplay1(){
    srand((unsigned) time(NULL));
    file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Ludo Game/Ludo game/asset/16.txt",ios::in);
    int x;
    file>>x;
    file.close();
    if(x==2){
        gameplay11();
    }
    if(x!=2){
        cout<<"Player : "<<playname1<<endl;
        cout<<"Enter 1 to start rolling die : ";
        while (true) {
            cin>>token;
            if(token=="1")break;
            if(token!="1"){
                cout<<"Wrong input !!"<<endl;
            }
        }
        if(token=="1"){
            srand((unsigned) time(NULL));
            die=rand()%9;
            if(die==0){
                die=1;
            }
            if(die==7||die==6||die==8||die==9){
                die=6;
                if(die==6){
                    cout<<"You got : "<<die<<" in die rolling."<<endl;
                    cout<<"Congrats you can move your second playing piece"<<endl;
                    cout<<endl; cout<<endl;
                    cout<<"Enter 1 to open new piece"<<endl;
                    cout<<"Enter 2 to just move the piece"<<endl;
                    while (true) {
                        cin>>token;
                        if(token=="1")break;
                        if(token=="2")break;
                        if(token!="1"||token!="2"){
                            cout<<"Wrong input !!"<<endl;
                        }
                    }
                    if(token=="1"){
                        file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Ludo Game/Ludo game/asset/16.txt",ios::out);
                        file<<2;
                        file.close();
                        file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Ludo Game/Ludo game/asset/tokenO.txt",ios::in);
                        file>>use;
                        file.close();
                        die=1;
                        if(use==2){
                            for(int i = 0 ; i < die ; i++){
                                if(i==22){
                                    break;
                                }
                                if(obj1[i]==" "||obj1[i]=="O1"){
                                    die++;
                                    continue;
                                }
                                if(obj1[i]=="\0"){
                                    if(i<=21){
                                        obj1[i]="O1";
                                    }
                                    if(i>=1){
                                        obj1[i-1]=" ";
                                    }
                                }
                                if((obj1[21]=="O1")&&(obj11[21]=="O2")){
                                    cout<<"PLay one win "<<endl;
                                    board();
                                    menuworking();
                                }
                            }
                        }
                        if(use==1){
                            for(int i = 0 ; i < die ; i++){
                                if(i==22){
                                    break;
                                }
                                if(obj11[i]==" "||obj11[i]=="O2"){
                                    die++;
                                    continue;
                                }
                                if(obj11[i]=="\0"){
                                    if(i<=21){
                                        obj11[i]="O2";
                                    }
                                    if(i>=1){
                                        obj11[i-1]=" ";
                                    }
                                }
                                if((obj1[21]=="O1")&&(obj11[21]=="O2")){
                                    cout<<"PLay one win "<<endl;
                                    board();
                                    menuworking();
                                }
                            }
                        }
                        board();
                        play1diesplay2();
                    }
                    if(token=="2"){}
                }
            }
            cout<<endl; cout<<endl;
            cout<<"You got : "<<die<<" in die rolling."<<endl;
            file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Ludo Game/Ludo game/asset/tokenO.txt",ios::in);
            file>>use;
            file.close();
            if(use==1){
                for(int i = 0 ; i < die ; i++){
                    if(i==22){
                        break;
                    }
                    if(obj1[i]==" "||obj1[i]=="O1"){
                        die++;
                        continue;
                    }
                    if(obj1[i]=="\0"){
                        if(i<=21){
                            obj1[i]="O1";
                        }
                        if(i>=1){
                            obj1[i-1]=" ";
                        }
                    }
                    if((obj1[21]=="O1")&&(obj11[21]=="O2")){
                        cout<<"PLay one win "<<endl;
                        board();
                        menuworking();
                    }
                }
            }
            if(use==2){
                for(int i = 0 ; i < die ; i++){
                    if(i==22){
                        break;
                    }
                    if(obj11[i]==" "||obj11[i]=="O2"){
                        die++;
                        continue;
                    }
                    if(obj11[i]=="\0"){
                        if(i<=21){
                            obj11[i]="O2";
                        }
                        if(i>=1){
                            obj11[i-1]=" ";
                        }
                    }
                    if((obj1[21]=="O1")&&(obj11[21]=="O2")){
                        cout<<"PLay one win "<<endl;
                        board();
                        menuworking();
                    }
                }
            }
            board();
            play1diesplay2();
        }
    }
}

void gameplay11(){
    cout<<"Player : "<<playname1<<endl;
    cout<<"Enter 1 to start rolling die : ";
    while (true) {
        cin>>token;
        if(token=="1")break;
        if(token!="1"){
            cout<<"Wrong input !!"<<endl;
        }
    }
    if(token=="1"){
        srand((unsigned) time(NULL));
        die=rand()%9;
        if(die==0){
            die=1;
        }
        if(die==7||die==6||die==8||die==9){
            die=6;
        }
        cout<<endl; cout<<endl;
        cout<<"You got : "<<die<<" in die rolling."<<endl;
        cout<<"Which piece you want to move "<<endl;
        cout<<"-For O1 type 1"<<endl;
        cout<<"-For O2 type 2"<<endl;
        while (true) {
            cin>>token;
            if(token=="1")break;
            if(token=="2")break;
            if(token!="1"||token!="2"){
                cout<<"Wrong input !!"<<endl;
            }
        }
        if(token=="1"){
            for(int i = 0 ; i < die ; i++){
                if(i==22){
                    break;
                }
                if(obj1[i]==" "||obj1[i]=="O1"){
                    die++;
                    continue;
                }
                if(obj1[i]=="\0"){
                    if(i<=21){
                        obj1[i]="O1";
                    }
                    if(i>=1){
                        obj1[i-1]=" ";
                    }
                }
                if((obj1[21]=="O1")&&(obj11[21]=="O2")){
                    cout<<"PLay one win "<<endl;
                    board();
                    menuworking();
                }
            }
        }
        if(token=="2"){
            for(int i = 0 ; i < die ; i++){
                if(i==22){
                    break;
                }
                if(obj11[i]==" "||obj11[i]=="O2"){
                    die++;
                    continue;
                }
                if(obj11[i]=="\0"){
                    if(i<=21){
                        obj11[i]="O2";
                    }
                    if(i>=1){
                        obj11[i-1]=" ";
                    }
                }
                if((obj1[21]=="O1")&&(obj11[21]=="O2")){
                    cout<<"PLay one win "<<endl;
                    board();
                    menuworking();
                }
            }
        }
        board();
        play1diesplay2();
    }
}

void gameplay2(){
    srand((unsigned) time(NULL));
    file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Ludo Game/Ludo game/asset/26.txt",ios::in);
    int x;
    file>>x;
    file.close();
    if(x==2){
        gameplay22();
    }
    if(x!=2){
        cout<<"Player : "<<playname2<<endl;
        cout<<"Enter 1 to start rolling die : ";
        while (true) {
            cin>>token;
            if(token=="1")break;
            if(token!="1"){
                cout<<"Wrong input !!"<<endl;
            }
        }
        if(token=="1"){
            srand((unsigned) time(NULL));
            die=rand()%9;
            if(die==0){
                die=1;
            }
            if(die==7||die==6||die==8||die==9){
                die=6;
                if(die==6){
                    cout<<"You got : "<<die<<" in die rolling."<<endl;
                    cout<<"Congrats you can move your second playing piece"<<endl;
                    cout<<endl; cout<<endl;
                    cout<<"Enter 1 to open new piece"<<endl;
                    cout<<"Enter 2 to just move the piece"<<endl;
                    while (true) {
                        cin>>token;
                        if(token=="1")break;
                        if(token=="2")break;
                        if(token!="1"||token!="2"){
                            cout<<"Wrong input !!"<<endl;
                        }
                    }
                    if(token=="1"){
                        file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Ludo Game/Ludo game/asset/26.txt",ios::out);
                        file<<2;
                        file.close();
                        file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Ludo Game/Ludo game/asset/tokenX.txt",ios::in);
                        file>>use;
                        file.close();
                        die=1;
                        if(use==2){
                            for(int i = 0 ; i < die ; i++){
                                if(i==22){
                                    break;
                                }
                                if(obj2[i]==" "||obj2[i]=="X1"){
                                    die++;
                                    continue;
                                }
                                if(obj2[i]=="\0"){
                                    if(i<=21){
                                        obj2[i]="X1";
                                    }
                                    if(i>=1){
                                        obj2[i-1]=(" ");
                                    }
                                }
                                if(obj2[21]=="X1"&&obj22[21]=="X2"){
                                    cout<<"PLay Two win "<<endl;
                                    board();
                                    menuworking();
                                }
                            }
                        }
                        if(use==1){
                            for(int i = 0 ; i < die ; i++){
                                if(i==22){
                                    break;
                                }
                                if(obj22[i]==" "||obj22[i]=="X2"){
                                    die++;
                                    continue;
                                }
                                if(obj22[i]=="\0"){
                                    if(i<=21){
                                        obj22[i]="X2";
                                    }
                                    if(i>=1){
                                        obj22[i-1]=(" ");
                                    }
                                }
                                if(obj2[21]=="X1"&&obj22[21]=="X2"){
                                    cout<<"PLay Two win "<<endl;
                                    board();
                                    menuworking();
                                }
                            }
                        }
                        board();
                        play2diesplay1();
                    }
                    if(token=="2"){}
                }
            }
            cout<<endl; cout<<endl;
            cout<<"You got : "<<die<<" in die rolling."<<endl;
            file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Ludo Game/Ludo game/asset/tokenX.txt",ios::in);
            file>>use;
            file.close();
            if(use==1){
                for(int i = 0 ; i < die ; i++){
                    if(i==22){
                        break;
                    }
                    if(obj2[i]==" "||obj2[i]=="X1"){
                        die++;
                        continue;
                    }
                    if(obj2[i]=="\0"){
                        if(i<=21){
                            obj2[i]="X1";
                        }
                        if(i>=1){
                            obj2[i-1]=(" ");
                        }
                    }
                    if(obj2[21]=="X1"&&obj22[21]=="X2"){
                        cout<<"PLay Two win "<<endl;
                        board();
                        menuworking();
                    }
                }
            }
            if(use==2){
                for(int i = 0 ; i < die ; i++){
                    if(i==22){
                        break;
                    }
                    if(obj22[i]==" "||obj22[i]=="X2"){
                        die++;
                        continue;
                    }
                    if(obj22[i]=="\0"){
                        if(i<=21){
                            obj22[i]="X2";
                        }
                        if(i>=1){
                            obj22[i-1]=(" ");
                        }
                    }
                    if(obj2[21]=="X1"&&obj22[21]=="X2"){
                        cout<<"PLay Two win "<<endl;
                        board();
                        menuworking();
                    }
                }
            }
            board();
            play2diesplay1();
        }
    }
}

void gameplay22(){
    cout<<"Player : "<<playname2<<endl;
    cout<<"Enter 1 to start rolling die : ";
    while (true) {
        cin>>token;
        if(token=="1")break;
        if(token!="1"){
            cout<<"Wrong input !!"<<endl;
        }
    }
    if(token=="1"){
        srand((unsigned) time(NULL));
        die=rand()%9;
        if(die==0){
            die=1;
        }
        if(die==7||die==6||die==8||die==9){
            die=6;
        }
        cout<<endl; cout<<endl;
        cout<<"You got : "<<die<<" in die rolling."<<endl;
        cout<<"Which piece you want to move "<<endl;
        cout<<"-For O1 type 1"<<endl;
        cout<<"-For O2 type 2"<<endl;
        while (true) {
            cin>>token;
            if(token=="1")break;
            if(token=="2")break;
            if(token!="1"||token!="2"){
                cout<<"Wrong input !!"<<endl;
            }
        }
        if(token=="1"){
            for(int i = 0 ; i < die ; i++){
                if(i==22){
                    break;
                }
                if(obj2[i]==" "||obj2[i]=="X1"){
                    die++;
                    continue;
                }
                if(obj2[i]=="\0"){
                    if(i<=21){
                        obj2[i]="X1";
                    }
                    if(i>=1){
                        obj2[i-1]=(" ");
                    }
                }
                if(obj2[21]=="X1"&&obj22[21]=="X2"){
                    cout<<"PLay Two win "<<endl;
                    board();
                    menuworking();
                }
            }
        }
        if(token=="2"){
            for(int i = 0 ; i < die ; i++){
                if(i==22){
                    break;
                }
                if(obj22[i]==" "||obj22[i]=="X2"){
                    die++;
                    continue;
                }
                if(obj22[i]=="\0"){
                    if(i<=21){
                        obj22[i]="X2";
                    }
                    if(i>=1){
                        obj22[i-1]=(" ");
                    }
                }
                if(obj2[21]=="X1"&&obj22[21]=="X2"){
                    cout<<"PLay Two win "<<endl;
                    board();
                    menuworking();
                }
            }
        }
        board();
        play2diesplay1();
    }
}

void newgame(){
    file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Ludo Game/Ludo game/asset/16.txt",ios::out|ios::trunc);
    file.close();
    file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Ludo Game/Ludo game/asset/26.txt",ios::out|ios::trunc);
    file.close();
    file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Ludo Game/Ludo game/asset/26.txt",ios::out);
    file<<0;
    file.close();
    file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Ludo Game/Ludo game/asset/16.txt",ios::out);
    file<<0;
    file.close();
    cout<<"Enter player one name : ";
    cin.ignore();
    getline(cin,playname1);
    cout<<"Enter player two name : ";
    getline(cin,playname2);
    cout<<endl;
    cout<<playname1<<" Assign < O > "<<endl;
    cout<<playname2<<" Assign < X > "<<endl;
    cout<<endl;
    cout<<"Enter 1 to start the game "<<endl;
    while(true){
        cin>>token;
        if(token=="1")break;
        if(token!="1"){
            cout<<"Wrong entered !!"<<endl;
        }
    }
    if(token=="1"){
        play1();
        play2();
    }
}

#endif /* main_hpp */
