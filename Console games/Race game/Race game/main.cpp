#include <iostream>
using namespace::std;

int main() {
//Intialization
                const int x = 30 , y = 2 ;
  char track[x][y] = {{'-','-'},{'-','-'},
                      {'-','-'},{'-','-'},
                      {'-','-'},{'-','-'},
                      {'-','-'},{'-','-'},
                      {'-','-'},{'-','-'},
                      {'-','-'},{'-','-'},
                      {'-','-'},{'-','-'},
                      {'-','-'},{'-','-'},
                      {'-','-'},{'-','-'},
                      {'-','-'},{'-','-'},
                      {'-','-'},{'-','-'},
                      {'-','-'},{'-','-'},
                      {'-','-'},{'-','-'},
                      {'-','-'},{'-','-'},
                      {'-','-'},{'-','-'}};
                               int roll1 ,
                                   roll2 ,
                                   start ,
                                    play ,
                                 p1 = 30 ,
                                 p2 = 30 ;
   
//Intro
    cout<<"###----Poll Race Game----###"<<endl;
    cout<<endl;
    cout<<"Rules : "<<endl;
    cout<<"1-One who complete the track wins the race"<<endl;
    cout<<"2-Decide who will be the first and second player"<<endl;
    cout<<endl;
    cout<<"--- Polls ---"<<endl;
    for(int i = 0 ; i<x ; i++){
        for(int j = 0 ; j < y ; j++){
            cout<<"\t"<<track[i][j];
        }
        cout<<endl;
    }
    cout<<endl;

//Start
    cout<<"Press 1 to start the game "<<endl;
    while (true) {
        cin>>start;
        if(start==1)break;
    }
    if(start==1){
        cout<<endl;
        cout<<"Player 1 turn "<<endl<<"Enter 1 to start rolling dice"<<endl;
        while (true) {
            cin>>play;
            if(play==1)break;
        }
        system("clear");
        if(play==1){
            
            //1
            cout<<"Player no 1 turn "<<endl;
            cout<<"Dice is rolling---"<<endl;
            srand((unsigned) time(NULL));
            roll1=rand()%6;
            cout<<"Points for player 1 = "<<roll1<<endl;
            cout<<endl;
            while(roll1!=0){
                roll1--;
                p1--;
                track[p1][0]='O';
            }
            cout<<"###----Poll Race Game----###"<<endl;
            cout<<endl;
            cout<<"Rules : "<<endl;
            cout<<"1-One who complete the track wins the race"<<endl;
            cout<<"2-Decide who will be the first and second player"<<endl;
            cout<<endl;
            cout<<"--- Polls ---"<<endl;
            for(int i = 0 ; i<x ; i++){
                for(int j = 0 ; j < y ; j++){
                    cout<<"\t"<<track[i][j];
                }
                cout<<endl;
            }
        }
        cout<<endl;
        cout<<"Player 2 turn "<<endl<<"Enter 1 to start rolling dice"<<endl;
        while (true) {
            cin>>play;
            if(play==1)break;
        }
        system("clear");
        if(play==1){
            cout<<"Prayer no 2 turn "<<endl;
            cout<<"Dice is rolling---"<<endl;
            srand((unsigned) time(NULL));
            roll2=rand()%6;
            cout<<"Points for player 2 = "<<roll2<<endl;
            cout<<endl;
            while(roll2!=0){
                roll2--;
                p2--;
                track[p2][1]='X';
            }
            cout<<"###----Poll Race Game----###"<<endl;
            cout<<endl;
            cout<<"Rules : "<<endl;
            cout<<"1-One who complete the track wins the race"<<endl;
            cout<<"2-Decide who will be the first and second player"<<endl;
            cout<<endl;
            cout<<"--- Polls ---"<<endl;
            for(int i = 0 ; i<x ; i++){
                for(int j = 0 ; j < y ; j++){
                    cout<<"\t"<<track[i][j];
                }
                cout<<endl;
            }
        }
        //2
        cout<<endl;
        cout<<"Player 1 turn "<<endl<<"Enter 1 to start rolling dice"<<endl;
        while (true) {
            cin>>play;
            if(play==1)break;
        }
        system("clear");
        if(play==1){
            cout<<"Player no 1 turn "<<endl;
            cout<<"Dice is rolling---"<<endl;
            srand((unsigned) time(NULL));
            roll1=rand()%6;
            cout<<"Points for player 1 = "<<roll1<<endl;
            cout<<endl;
            while(roll1!=0){
                roll1--;
                p1--;
                track[p1][0]='O';
            }
            cout<<"###----Poll Race Game----###"<<endl;
            cout<<endl;
            cout<<"Rules : "<<endl;
            cout<<"1-One who complete the track wins the race"<<endl;
            cout<<"2-Decide who will be the first and second player"<<endl;
            cout<<endl;
            cout<<"--- Polls ---"<<endl;
            for(int i = 0 ; i<x ; i++){
                for(int j = 0 ; j < y ; j++){
                    cout<<"\t"<<track[i][j];
                }
                cout<<endl;
            }
        }
        cout<<endl;
        cout<<"Player 2 turn "<<endl<<"Enter 1 to start rolling dice"<<endl;
        while (true) {
            cin>>play;
            if(play==1)break;
        }
        system("clear");
        if(play==1){
            cout<<"Prayer no 2 turn "<<endl;
            cout<<"Dice is rolling---"<<endl;
            srand((unsigned) time(NULL));
            roll2=rand()%6;
            cout<<"Points for player 2 = "<<roll2<<endl;
            cout<<endl;
            while(roll2!=0){
                roll2--;
                p2--;
                track[p2][1]='X';
            }
            cout<<"###----Poll Race Game----###"<<endl;
            cout<<endl;
            cout<<"Rules : "<<endl;
            cout<<"1-One who complete the track wins the race"<<endl;
            cout<<"2-Decide who will be the first and second player"<<endl;
            cout<<endl;
            cout<<"--- Polls ---"<<endl;
            for(int i = 0 ; i<x ; i++){
                for(int j = 0 ; j < y ; j++){
                    cout<<"\t"<<track[i][j];
                }
                cout<<endl;
            }
        }
        //3
        cout<<endl;
        cout<<"Player 1 turn "<<endl<<"Enter 1 to start rolling dice"<<endl;
        while (true) {
            cin>>play;
            if(play==1)break;
        }
        system("clear");
        if(play==1){
            cout<<"Player no 1 turn "<<endl;
            cout<<"Dice is rolling---"<<endl;
            srand((unsigned) time(NULL));
            roll1=rand()%6;
            cout<<"Points for player 1 = "<<roll1<<endl;
            cout<<endl;
            while(roll1!=0){
                roll1--;
                p1--;
                track[p1][0]='O';
            }
            cout<<"###----Poll Race Game----###"<<endl;
            cout<<endl;
            cout<<"Rules : "<<endl;
            cout<<"1-One who complete the track wins the race"<<endl;
            cout<<"2-Decide who will be the first and second player"<<endl;
            cout<<endl;
            cout<<"--- Polls ---"<<endl;
            for(int i = 0 ; i<x ; i++){
                for(int j = 0 ; j < y ; j++){
                    cout<<"\t"<<track[i][j];
                }
                cout<<endl;
            }
        }
        cout<<endl;
        cout<<"Player 2 turn "<<endl<<"Enter 1 to start rolling dice"<<endl;
        while (true) {
            cin>>play;
            if(play==1)break;
        }
        system("clear");
        if(play==1){
            cout<<"Prayer no 2 turn "<<endl;
            cout<<"Dice is rolling---"<<endl;
            srand((unsigned) time(NULL));
            roll2=rand()%6;
            cout<<"Points for player 2 = "<<roll2<<endl;
            cout<<endl;
            while(roll2!=0){
                roll2--;
                p2--;
                track[p2][1]='X';
            }
            cout<<"###----Poll Race Game----###"<<endl;
            cout<<endl;
            cout<<"Rules : "<<endl;
            cout<<"1-One who complete the track wins the race"<<endl;
            cout<<"2-Decide who will be the first and second player"<<endl;
            cout<<endl;
            cout<<"--- Polls ---"<<endl;
            for(int i = 0 ; i<x ; i++){
                for(int j = 0 ; j < y ; j++){
                    cout<<"\t"<<track[i][j];
                }
                cout<<endl;
            }
        }
        //4
        cout<<endl;
        cout<<"Player 1 turn "<<endl<<"Enter 1 to start rolling dice"<<endl;
        while (true) {
            cin>>play;
            if(play==1)break;
        }
        system("clear");
        if(play==1){
            cout<<"Player no 1 turn "<<endl;
            cout<<"Dice is rolling---"<<endl;
            srand((unsigned) time(NULL));
            roll1=rand()%6;
            cout<<"Points for player 1 = "<<roll1<<endl;
            cout<<endl;
            while(roll1!=0){
                roll1--;
                p1--;
                track[p1][0]='O';
            }
            cout<<"###----Poll Race Game----###"<<endl;
            cout<<endl;
            cout<<"Rules : "<<endl;
            cout<<"1-One who complete the track wins the race"<<endl;
            cout<<"2-Decide who will be the first and second player"<<endl;
            cout<<endl;
            cout<<"--- Polls ---"<<endl;
            for(int i = 0 ; i<x ; i++){
                for(int j = 0 ; j < y ; j++){
                    cout<<"\t"<<track[i][j];
                }
                cout<<endl;
            }
        }
        cout<<endl;
        cout<<"Player 2 turn "<<endl<<"Enter 1 to start rolling dice"<<endl;
        while (true) {
            cin>>play;
            if(play==1)break;
        }
        system("clear");
        if(play==1){
            cout<<"Prayer no 2 turn "<<endl;
            cout<<"Dice is rolling---"<<endl;
            srand((unsigned) time(NULL));
            roll2=rand()%6;
            cout<<"Points for player 2 = "<<roll2<<endl;
            cout<<endl;
            while(roll2!=0){
                roll2--;
                p2--;
                track[p2][1]='X';
            }
            cout<<"###----Poll Race Game----###"<<endl;
            cout<<endl;
            cout<<"Rules : "<<endl;
            cout<<"1-One who complete the track wins the race"<<endl;
            cout<<"2-Decide who will be the first and second player"<<endl;
            cout<<endl;
            cout<<"--- Polls ---"<<endl;
            for(int i = 0 ; i<x ; i++){
                for(int j = 0 ; j < y ; j++){
                    cout<<"\t"<<track[i][j];
                }
                cout<<endl;
            }
        }
        //5
        cout<<endl;
        cout<<"Player 1 turn "<<endl<<"Enter 1 to start rolling dice"<<endl;
        while (true) {
            cin>>play;
            if(play==1)break;
        }
        system("clear");
        if(play==1){
            cout<<"Player no 1 turn "<<endl;
            cout<<"Dice is rolling---"<<endl;
            srand((unsigned) time(NULL));
            roll1=rand()%6;
            cout<<"Points for player 1 = "<<roll1<<endl;
            cout<<endl;
            while(roll1!=0){
                roll1--;
                p1--;
                track[p1][0]='O';
            }
            cout<<"###----Poll Race Game----###"<<endl;
            cout<<endl;
            cout<<"Rules : "<<endl;
            cout<<"1-One who complete the track wins the race"<<endl;
            cout<<"2-Decide who will be the first and second player"<<endl;
            cout<<endl;
            cout<<"--- Polls ---"<<endl;
            for(int i = 0 ; i<x ; i++){
                for(int j = 0 ; j < y ; j++){
                    cout<<"\t"<<track[i][j];
                }
                cout<<endl;
            }
        }
        cout<<endl;
        cout<<"Player 2 turn "<<endl<<"Enter 1 to start rolling dice"<<endl;
        while (true) {
            cin>>play;
            if(play==1)break;
        }
        system("clear");
        if(play==1){
            cout<<"Prayer no 2 turn "<<endl;
            cout<<"Dice is rolling---"<<endl;
            srand((unsigned) time(NULL));
            roll2=rand()%6;
            cout<<"Points for player 2 = "<<roll2<<endl;
            cout<<endl;
            while(roll2!=0){
                roll2--;
                p2--;
                track[p2][1]='X';
            }
            cout<<"###----Poll Race Game----###"<<endl;
            cout<<endl;
            cout<<"Rules : "<<endl;
            cout<<"1-One who complete the track wins the race"<<endl;
            cout<<"2-Decide who will be the first and second player"<<endl;
            cout<<endl;
            cout<<"--- Polls ---"<<endl;
            for(int i = 0 ; i<x ; i++){
                for(int j = 0 ; j < y ; j++){
                    cout<<"\t"<<track[i][j];
                }
                cout<<endl;
            }
        }
        if(track[0][0]=='O'){
            cout<<"Player 1 win !!"<<endl;
            exit(0);
        }
        if(track[0][1]=='X'){
            cout<<"Player 2 win !!"<<endl;
            exit(0);
        }
        if(track[0][1]=='X'&&track[0][0]=='O'){
            cout<<"Draw Match !!"<<endl;
            exit(0);
        }
        //6
        cout<<endl;
        cout<<"Player 1 turn "<<endl<<"Enter 1 to start rolling dice"<<endl;
        while (true) {
            cin>>play;
            if(play==1)break;
        }
        system("clear");
        if(play==1){
            cout<<"Player no 1 turn "<<endl;
            cout<<"Dice is rolling---"<<endl;
            srand((unsigned) time(NULL));
            roll1=rand()%6;
            cout<<"Points for player 1 = "<<roll1<<endl;
            cout<<endl;
            while(roll1!=0){
                roll1--;
                p1--;
                track[p1][0]='O';
            }
            cout<<"###----Poll Race Game----###"<<endl;
            cout<<endl;
            cout<<"Rules : "<<endl;
            cout<<"1-One who complete the track wins the race"<<endl;
            cout<<"2-Decide who will be the first and second player"<<endl;
            cout<<endl;
            cout<<"--- Polls ---"<<endl;
            for(int i = 0 ; i<x ; i++){
                for(int j = 0 ; j < y ; j++){
                    cout<<"\t"<<track[i][j];
                }
                cout<<endl;
            }
        }
        cout<<endl;
        cout<<"Player 2 turn "<<endl<<"Enter 1 to start rolling dice"<<endl;
        while (true) {
            cin>>play;
            if(play==1)break;
        }
        system("clear");
        if(play==1){
            cout<<"Prayer no 2 turn "<<endl;
            cout<<"Dice is rolling---"<<endl;
            srand((unsigned) time(NULL));
            roll2=rand()%6;
            cout<<"Points for player 2 = "<<roll2<<endl;
            cout<<endl;
            while(roll2!=0){
                roll2--;
                p2--;
                track[p2][1]='X';
            }
            cout<<"###----Poll Race Game----###"<<endl;
            cout<<endl;
            cout<<"Rules : "<<endl;
            cout<<"1-One who complete the track wins the race"<<endl;
            cout<<"2-Decide who will be the first and second player"<<endl;
            cout<<endl;
            cout<<"--- Polls --- "<<endl;
            for(int i = 0 ; i<x ; i++){
                for(int j = 0 ; j < y ; j++){
                    cout<<"\t"<<track[i][j];
                }
                cout<<endl;
            }
        }
        if(track[0][0]=='O'){
            cout<<"Player 1 win !!"<<endl;
            exit(0);
        }
        if(track[0][1]=='X'){
            cout<<"Player 2 win !!"<<endl;
            exit(0);
        }
        if(track[0][1]=='X'&&track[0][0]=='O'){
            cout<<"Draw Match !!"<<endl;
            exit(0);
        }
        //7
        cout<<endl;
        cout<<"Player 1 turn "<<endl<<"Enter 1 to start rolling dice"<<endl;
        while (true) {
            cin>>play;
            if(play==1)break;
        }
        system("clear");
        if(play==1){
            cout<<"Player no 1 turn "<<endl;
            cout<<"Dice is rolling---"<<endl;
            srand((unsigned) time(NULL));
            roll1=rand()%6;
            cout<<"Points for player 1 = "<<roll1<<endl;
            cout<<endl;
            while(roll1!=0){
                roll1--;
                p1--;
                track[p1][0]='O';
            }
            cout<<"###----Poll Race Game----###"<<endl;
            cout<<endl;
            cout<<"Rules : "<<endl;
            cout<<"1-One who complete the track wins the race"<<endl;
            cout<<"2-Decide who will be the first and second player"<<endl;
            cout<<endl;
            cout<<"--- Polls ---"<<endl;
            for(int i = 0 ; i<x ; i++){
                for(int j = 0 ; j < y ; j++){
                    cout<<"\t"<<track[i][j];
                }
                cout<<endl;
            }
        }
        cout<<endl;
        cout<<"Player 2 turn "<<endl<<"Enter 1 to start rolling dice"<<endl;
        while (true) {
            cin>>play;
            if(play==1)break;
        }
        system("clear");
        if(play==1){
            cout<<"Prayer no 2 turn "<<endl;
            cout<<"Dice is rolling---"<<endl;
            srand((unsigned) time(NULL));
            roll2=rand()%6;
            cout<<"Points for player 2 = "<<roll2<<endl;
            cout<<endl;
            while(roll2!=0){
                roll2--;
                p2--;
                track[p2][1]='X';
            }
            cout<<"###----Poll Race Game----###"<<endl;
            cout<<endl;
            cout<<"Rules : "<<endl;
            cout<<"1-One who complete the track wins the race"<<endl;
            cout<<"2-Decide who will be the first and second player"<<endl;
            cout<<endl;
            cout<<"--- Polls ---"<<endl;
            for(int i = 0 ; i<x ; i++){
                for(int j = 0 ; j < y ; j++){
                    cout<<"\t"<<track[i][j];
                }
                cout<<endl;
            }
        }
        if(track[0][0]=='O'){
            cout<<"Player 1 win !!"<<endl;
            exit(0);
        }
        if(track[0][1]=='X'){
            cout<<"Player 2 win !!"<<endl;
            exit(0);
        }
        if(track[0][1]=='X'&&track[0][0]=='O'){
            cout<<"Draw Match !!"<<endl;
            exit(0);
        }
        //8
        cout<<endl;
        cout<<"Player 1 turn "<<endl<<"Enter 1 to start rolling dice"<<endl;
        while (true) {
            cin>>play;
            if(play==1)break;
        }
        system("clear");
        if(play==1){
            cout<<"Player no 1 turn "<<endl;
            cout<<"Dice is rolling---"<<endl;
            srand((unsigned) time(NULL));
            roll1=rand()%6;
            cout<<"Points for player 1 = "<<roll1<<endl;
            cout<<endl;
            while(roll1!=0){
                roll1--;
                p1--;
                track[p1][0]='O';
            }
            cout<<"###----Poll Race Game----###"<<endl;
            cout<<endl;
            cout<<"Rules : "<<endl;
            cout<<"1-One who complete the track wins the race"<<endl;
            cout<<"2-Decide who will be the first and second player"<<endl;
            cout<<endl;
            cout<<"--- Polls ---"<<endl;
            for(int i = 0 ; i<x ; i++){
                for(int j = 0 ; j < y ; j++){
                    cout<<"\t"<<track[i][j];
                }
                cout<<endl;
            }
        }
        cout<<endl;
        cout<<"Player 2 turn "<<endl<<"Enter 1 to start rolling dice"<<endl;
        while (true) {
            cin>>play;
            if(play==1)break;
        }
        system("clear");
        if(play==1){
            cout<<"Prayer no 2 turn "<<endl;
            cout<<"Dice is rolling---"<<endl;
            srand((unsigned) time(NULL));
            roll2=rand()%6;
            cout<<"Points for player 2 = "<<roll2<<endl;
            cout<<endl;
            while(roll2!=0){
                roll2--;
                p2--;
                track[p2][1]='X';
            }
            cout<<"###----Poll Race Game----###"<<endl;
            cout<<endl;
            cout<<"Rules : "<<endl;
            cout<<"1-One who complete the track wins the race"<<endl;
            cout<<"2-Decide who will be the first and second player"<<endl;
            cout<<endl;
            cout<<"--- Polls ---"<<endl;
            for(int i = 0 ; i<x ; i++){
                for(int j = 0 ; j < y ; j++){
                    cout<<"\t"<<track[i][j];
                }
                cout<<endl;
            }
        }
        if(track[0][0]=='O'){
            cout<<"Player 1 win !!"<<endl;
            exit(0);
        }
        if(track[0][1]=='X'){
            cout<<"Player 2 win !!"<<endl;
            exit(0);
        }
        if(track[0][1]=='X'&&track[0][0]=='O'){
            cout<<"Draw Match !!"<<endl;
            exit(0);
        }
        //9
        cout<<endl;
        cout<<"Player 1 turn "<<endl<<"Enter 1 to start rolling dice"<<endl;
        while (true) {
            cin>>play;
            if(play==1)break;
        }
        system("clear");
        if(play==1){
            cout<<"Player no 1 turn "<<endl;
            cout<<"Dice is rolling---"<<endl;
            srand((unsigned) time(NULL));
            roll1=rand()%6;
            cout<<"Points for player 1 = "<<roll1<<endl;
            cout<<endl;
            while(roll1!=0){
                roll1--;
                p1--;
                track[p1][0]='O';
            }
            cout<<"###----Poll Race Game----###"<<endl;
            cout<<endl;
            cout<<"Rules : "<<endl;
            cout<<"1-One who complete the track wins the race"<<endl;
            cout<<"2-Decide who will be the first and second player"<<endl;
            cout<<endl;
            cout<<"--- Polls ---"<<endl;
            for(int i = 0 ; i<x ; i++){
                for(int j = 0 ; j < y ; j++){
                    cout<<"\t"<<track[i][j];
                }
                cout<<endl;
            }
        }
        cout<<endl;
        cout<<"Player 2 turn "<<endl<<"Enter 1 to start rolling dice"<<endl;
        while (true) {
            cin>>play;
            if(play==1)break;
        }
        system("clear");
        if(play==1){
            cout<<"Prayer no 2 turn "<<endl;
            cout<<"Dice is rolling---"<<endl;
            srand((unsigned) time(NULL));
            roll2=rand()%6;
            cout<<"Points for player 2 = "<<roll2<<endl;
            cout<<endl;
            while(roll2!=0){
                roll2--;
                p2--;
                track[p2][1]='X';
            }
            cout<<"###----Poll Race Game----###"<<endl;
            cout<<endl;
            cout<<"Rules : "<<endl;
            cout<<"1-One who complete the track wins the race"<<endl;
            cout<<"2-Decide who will be the first and second player"<<endl;
            cout<<endl;
            cout<<"--- Polls ---"<<endl;
            for(int i = 0 ; i<x ; i++){
                for(int j = 0 ; j < y ; j++){
                    cout<<"\t"<<track[i][j];
                }
                cout<<endl;
            }
        }
        if(track[0][0]=='O'){
            cout<<"Player 1 win !!"<<endl;
            exit(0);
        }
        if(track[0][1]=='X'){
            cout<<"Player 2 win !!"<<endl;
            exit(0);
        }
        if(track[0][1]=='X'&&track[0][0]=='O'){
            cout<<"Draw Match !!"<<endl;
            exit(0);
        }
        //10
        cout<<endl;
        cout<<"Player 1 turn "<<endl<<"Enter 1 to start rolling dice"<<endl;
        while (true) {
            cin>>play;
            if(play==1)break;
        }
        system("clear");
        if(play==1){
            cout<<"Player no 1 turn "<<endl;
            cout<<"Dice is rolling---"<<endl;
            srand((unsigned) time(NULL));
            roll1=rand()%6;
            cout<<"Points for player 1 = "<<roll1<<endl;
            cout<<endl;
            while(roll1!=0){
                roll1--;
                p1--;
                track[p1][0]='O';
            }
            cout<<"###----Poll Race Game----###"<<endl;
            cout<<endl;
            cout<<"Rules : "<<endl;
            cout<<"1-One who complete the track wins the race"<<endl;
            cout<<"2-Decide who will be the first and second player"<<endl;
            cout<<endl;
            cout<<"--- Polls ---"<<endl;
            for(int i = 0 ; i<x ; i++){
                for(int j = 0 ; j < y ; j++){
                    cout<<"\t"<<track[i][j];
                }
                cout<<endl;
            }
        }
        cout<<endl;
        cout<<"Player 2 turn "<<endl<<"Enter 1 to start rolling dice"<<endl;
        while (true) {
            cin>>play;
            if(play==1)break;
        }
        system("clear");
        if(play==1){
            cout<<"Prayer no 2 turn "<<endl;
            cout<<"Dice is rolling---"<<endl;
            srand((unsigned) time(NULL));
            roll2=rand()%6;
            cout<<"Points for player 2 = "<<roll2<<endl;
            cout<<endl;
            while(roll2!=0){
                roll2--;
                p2--;
                track[p2][1]='X';
            }
            cout<<"###----Poll Race Game----###"<<endl;
            cout<<endl;
            cout<<"Rules : "<<endl;
            cout<<"1-One who complete the track wins the race"<<endl;
            cout<<"2-Decide who will be the first and second player"<<endl;
            cout<<endl;
            cout<<"--- Polls ---"<<endl;
            for(int i = 0 ; i<x ; i++){
                for(int j = 0 ; j < y ; j++){
                    cout<<"\t"<<track[i][j];
                }
                cout<<endl;
            }
        }
        if(track[0][0]=='O'){
            cout<<"Player 1 win !!"<<endl;
            exit(0);
        }
        if(track[0][1]=='X'){
            cout<<"Player 2 win !!"<<endl;
            exit(0);
        }
        if(track[0][1]=='X'&&track[0][0]=='O'){
            cout<<"Draw Match !!"<<endl;
            exit(0);
        }
        //11
        cout<<endl;
        cout<<"Player 1 turn "<<endl<<"Enter 1 to start rolling dice"<<endl;
        while (true) {
            cin>>play;
            if(play==1)break;
        }
        system("clear");
        if(play==1){
            cout<<"Player no 1 turn "<<endl;
            cout<<"Dice is rolling---"<<endl;
            srand((unsigned) time(NULL));
            roll1=rand()%6;
            cout<<"Points for player 1 = "<<roll1<<endl;
            cout<<endl;
            while(roll1!=0){
                roll1--;
                p1--;
                track[p1][0]='O';
            }
            cout<<"###----Poll Race Game----###"<<endl;
            cout<<endl;
            cout<<"Rules : "<<endl;
            cout<<"1-One who complete the track wins the race"<<endl;
            cout<<"2-Decide who will be the first and second player"<<endl;
            cout<<endl;
            cout<<"--- Polls ---"<<endl;
            for(int i = 0 ; i<x ; i++){
                for(int j = 0 ; j < y ; j++){
                    cout<<"\t"<<track[i][j];
                }
                cout<<endl;
            }
        }
        cout<<endl;
        cout<<"Player 2 turn "<<endl<<"Enter 1 to start rolling dice"<<endl;
        while (true) {
            cin>>play;
            if(play==1)break;
        }
        system("clear");
        if(play==1){
            cout<<"Prayer no 2 turn "<<endl;
            cout<<"Dice is rolling---"<<endl;
            srand((unsigned) time(NULL));
            roll2=rand()%6;
            cout<<"Points for player 2 = "<<roll2<<endl;
            cout<<endl;
            while(roll2!=0){
                roll2--;
                p2--;
                track[p2][1]='X';
            }
            cout<<"###----Poll Race Game----###"<<endl;
            cout<<endl;
            cout<<"Rules : "<<endl;
            cout<<"1-One who complete the track wins the race"<<endl;
            cout<<"2-Decide who will be the first and second player"<<endl;
            cout<<endl;
            cout<<"--- Polls ---"<<endl;
            for(int i = 0 ; i<x ; i++){
                for(int j = 0 ; j < y ; j++){
                    cout<<"\t"<<track[i][j];
                }
                cout<<endl;
            }
        }
        if(track[0][0]=='O'){
            cout<<"Player 1 win !!"<<endl;
            exit(0);
        }
        if(track[0][1]=='X'){
            cout<<"Player 2 win !!"<<endl;
            exit(0);
        }
        if(track[0][1]=='X'&&track[0][0]=='O'){
            cout<<"Draw Match !!"<<endl;
            exit(0);
        }
        //12
        cout<<endl;
        cout<<"Player 1 turn "<<endl<<"Enter 1 to start rolling dice"<<endl;
        while (true) {
            cin>>play;
            if(play==1)break;
        }
        system("clear");
        if(play==1){
            cout<<"Player no 1 turn "<<endl;
            cout<<"Dice is rolling---"<<endl;
            srand((unsigned) time(NULL));
            roll1=rand()%6;
            cout<<"Points for player 1 = "<<roll1<<endl;
            cout<<endl;
            while(roll1!=0){
                roll1--;
                p1--;
                track[p1][0]='O';
            }
            cout<<"###----Poll Race Game----###"<<endl;
            cout<<endl;
            cout<<"Rules : "<<endl;
            cout<<"1-One who complete the track wins the race"<<endl;
            cout<<"2-Decide who will be the first and second player"<<endl;
            cout<<endl;
            cout<<"--- Polls ---"<<endl;
            for(int i = 0 ; i<x ; i++){
                for(int j = 0 ; j < y ; j++){
                    cout<<"\t"<<track[i][j];
                }
                cout<<endl;
            }
        }
        cout<<endl;
        cout<<"Player 2 turn "<<endl<<"Enter 1 to start rolling dice"<<endl;
        while (true) {
            cin>>play;
            if(play==1)break;
        }
        system("clear");
        if(play==1){
            cout<<"Prayer no 2 turn "<<endl;
            cout<<"Dice is rolling---"<<endl;
            srand((unsigned) time(NULL));
            roll2=rand()%6;
            cout<<"Points for player 2 = "<<roll2<<endl;
            cout<<endl;
            while(roll2!=0){
                roll2--;
                p2--;
                track[p2][1]='X';
            }
            cout<<"###----Poll Race Game----###"<<endl;
            cout<<endl;
            cout<<"Rules : "<<endl;
            cout<<"1-One who complete the track wins the race"<<endl;
            cout<<"2-Decide who will be the first and second player"<<endl;
            cout<<endl;
            cout<<"--- Polls ---"<<endl;
            for(int i = 0 ; i<x ; i++){
                for(int j = 0 ; j < y ; j++){
                    cout<<"\t"<<track[i][j];
                }
                cout<<endl;
            }
        }
        if(track[0][0]=='O'){
            cout<<"Player 1 win !!"<<endl;
            exit(0);
        }
        if(track[0][1]=='X'){
            cout<<"Player 2 win !!"<<endl;
            exit(0);
        }
        if(track[0][1]=='X'&&track[0][0]=='O'){
            cout<<"Draw Match !!"<<endl;
            exit(0);
        }
        //13
        cout<<endl;
        cout<<"Player 1 turn "<<endl<<"Enter 1 to start rolling dice"<<endl;
        while (true) {
            cin>>play;
            if(play==1)break;
        }
        system("clear");
        if(play==1){
            cout<<"Player no 1 turn "<<endl;
            cout<<"Dice is rolling---"<<endl;
            srand((unsigned) time(NULL));
            roll1=rand()%6;
            cout<<"Points for player 1 = "<<roll1<<endl;
            cout<<endl;
            while(roll1!=0){
                roll1--;
                p1--;
                track[p1][0]='O';
            }
            cout<<"###----Poll Race Game----###"<<endl;
            cout<<endl;
            cout<<"Rules : "<<endl;
            cout<<"1-One who complete the track wins the race"<<endl;
            cout<<"2-Decide who will be the first and second player"<<endl;
            cout<<endl;
            cout<<"--- Polls ---"<<endl;
            for(int i = 0 ; i<x ; i++){
                for(int j = 0 ; j < y ; j++){
                    cout<<"\t"<<track[i][j];
                }
                cout<<endl;
            }
        }
        cout<<endl;
        cout<<"Player 2 turn "<<endl<<"Enter 1 to start rolling dice"<<endl;
        while (true) {
            cin>>play;
            if(play==1)break;
        }
        system("clear");
        if(play==1){
            cout<<"Prayer no 2 turn "<<endl;
            cout<<"Dice is rolling---"<<endl;
            srand((unsigned) time(NULL));
            roll2=rand()%6;
            cout<<"Points for player 2 = "<<roll2<<endl;
            cout<<endl;
            while(roll2!=0){
                roll2--;
                p2--;
                track[p2][1]='X';
            }
            cout<<"###----Poll Race Game----###"<<endl;
            cout<<endl;
            cout<<"Rules : "<<endl;
            cout<<"1-One who complete the track wins the race"<<endl;
            cout<<"2-Decide who will be the first and second player"<<endl;
            cout<<endl;
            cout<<"--- Polls ---"<<endl;
            for(int i = 0 ; i<x ; i++){
                for(int j = 0 ; j < y ; j++){
                    cout<<"\t"<<track[i][j];
                }
                cout<<endl;
            }
        }
        if(track[0][0]=='O'){
            cout<<"Player 1 win !!"<<endl;
            exit(0);
        }
        if(track[0][1]=='X'){
            cout<<"Player 2 win !!"<<endl;
            exit(0);
        }
        if(track[0][1]=='X'&&track[0][0]=='O'){
            cout<<"Draw Match !!"<<endl;
            exit(0);
        }
        //14
        cout<<endl;
        cout<<"Player 1 turn "<<endl<<"Enter 1 to start rolling dice"<<endl;
        while (true) {
            cin>>play;
            if(play==1)break;
        }
        system("clear");
        if(play==1){
            cout<<"Player no 1 turn "<<endl;
            cout<<"Dice is rolling---"<<endl;
            srand((unsigned) time(NULL));
            roll1=rand()%6;
            cout<<"Points for player 1 = "<<roll1<<endl;
            cout<<endl;
            while(roll1!=0){
                roll1--;
                p1--;
                track[p1][0]='O';
            }
            cout<<"###----Poll Race Game----###"<<endl;
            cout<<endl;
            cout<<"Rules : "<<endl;
            cout<<"1-One who complete the track wins the race"<<endl;
            cout<<"2-Decide who will be the first and second player"<<endl;
            cout<<endl;
            cout<<"--- Polls ---"<<endl;
            for(int i = 0 ; i<x ; i++){
                for(int j = 0 ; j < y ; j++){
                    cout<<"\t"<<track[i][j];
                }
                cout<<endl;
            }
        }
        cout<<endl;
        cout<<"Player 2 turn "<<endl<<"Enter 1 to start rolling dice"<<endl;
        while (true) {
            cin>>play;
            if(play==1)break;
        }
        system("clear");
        if(play==1){
            cout<<"Prayer no 2 turn "<<endl;
            cout<<"Dice is rolling---"<<endl;
            srand((unsigned) time(NULL));
            roll2=rand()%6;
            cout<<"Points for player 2 = "<<roll2<<endl;
            cout<<endl;
            while(roll2!=0){
                roll2--;
                p2--;
                track[p2][1]='X';
            }
            cout<<"###----Poll Race Game----###"<<endl;
            cout<<endl;
            cout<<"Rules : "<<endl;
            cout<<"1-One who complete the track wins the race"<<endl;
            cout<<"2-Decide who will be the first and second player"<<endl;
            cout<<endl;
            cout<<"--- Polls ---"<<endl;
            for(int i = 0 ; i<x ; i++){
                for(int j = 0 ; j < y ; j++){
                    cout<<"\t"<<track[i][j];
                }
                cout<<endl;
            }
        }
        if(track[0][0]=='O'){
            cout<<"Player 1 win !!"<<endl;
            exit(0);
        }
        if(track[0][1]=='X'){
            cout<<"Player 2 win !!"<<endl;
            exit(0);
        }
        if(track[0][1]=='X'&&track[0][0]=='O'){
            cout<<"Draw Match !!"<<endl;
            exit(0);
        }
        //15
        cout<<endl;
        cout<<"Player 1 turn "<<endl<<"Enter 1 to start rolling dice"<<endl;
        while (true) {
            cin>>play;
            if(play==1)break;
        }
        system("clear");
        if(play==1){
            cout<<"Player no 1 turn "<<endl;
            cout<<"Dice is rolling---"<<endl;
            srand((unsigned) time(NULL));
            roll1=rand()%6;
            cout<<"Points for player 1 = "<<roll1<<endl;
            cout<<endl;
            while(roll1!=0){
                roll1--;
                p1--;
                track[p1][0]='O';
            }
            cout<<"###----Poll Race Game----###"<<endl;
            cout<<endl;
            cout<<"Rules : "<<endl;
            cout<<"1-One who complete the track wins the race"<<endl;
            cout<<"2-Decide who will be the first and second player"<<endl;
            cout<<endl;
            cout<<"--- Polls ---"<<endl;
            for(int i = 0 ; i<x ; i++){
                for(int j = 0 ; j < y ; j++){
                    cout<<"\t"<<track[i][j];
                }
                cout<<endl;
            }
        }
        cout<<endl;
        cout<<"Player 2 turn "<<endl<<"Enter 1 to start rolling dice"<<endl;
        while (true) {
            cin>>play;
            if(play==1)break;
        }
        system("clear");
        if(play==1){
            cout<<"Prayer no 2 turn "<<endl;
            cout<<"Dice is rolling---"<<endl;
            srand((unsigned) time(NULL));
            roll2=rand()%6;
            cout<<"Points for player 2 = "<<roll2<<endl;
            cout<<endl;
            while(roll2!=0){
                roll2--;
                p2--;
                track[p2][1]='X';
            }
            cout<<"###----Poll Race Game----###"<<endl;
            cout<<endl;
            cout<<"Rules : "<<endl;
            cout<<"1-One who complete the track wins the race"<<endl;
            cout<<"2-Decide who will be the first and second player"<<endl;
            cout<<endl;
            cout<<"--- Polls ---"<<endl;
            for(int i = 0 ; i<x ; i++){
                for(int j = 0 ; j < y ; j++){
                    cout<<"\t"<<track[i][j];
                }
                cout<<endl;
            }
        }
        if(track[0][0]=='O'){
            cout<<"Player 1 win !!"<<endl;
            exit(0);
        }
        if(track[0][1]=='X'){
            cout<<"Player 2 win !!"<<endl;
            exit(0);
        }
        if(track[0][1]=='X'&&track[0][0]=='O'){
            cout<<"Draw Match !!"<<endl;
            exit(0);
        }
        //16
        cout<<endl;
        cout<<"Player 1 turn "<<endl<<"Enter 1 to start rolling dice"<<endl;
        while (true) {
            cin>>play;
            if(play==1)break;
        }
        system("clear");
        if(play==1){
            cout<<"Player no 1 turn "<<endl;
            cout<<"Dice is rolling---"<<endl;
            srand((unsigned) time(NULL));
            roll1=rand()%6;
            cout<<"Points for player 1 = "<<roll1<<endl;
            cout<<endl;
            while(roll1!=0){
                roll1--;
                p1--;
                track[p1][0]='O';
            }
            cout<<"###----Poll Race Game----###"<<endl;
            cout<<endl;
            cout<<"Rules : "<<endl;
            cout<<"1-One who complete the track wins the race"<<endl;
            cout<<"2-Decide who will be the first and second player"<<endl;
            cout<<endl;
            cout<<"--- Polls ---"<<endl;
            for(int i = 0 ; i<x ; i++){
                for(int j = 0 ; j < y ; j++){
                    cout<<"\t"<<track[i][j];
                }
                cout<<endl;
            }
        }
        cout<<endl;
        cout<<"Player 2 turn "<<endl<<"Enter 1 to start rolling dice"<<endl;
        while (true) {
            cin>>play;
            if(play==1)break;
        }
        system("clear");
        if(play==1){
            cout<<"Prayer no 2 turn "<<endl;
            cout<<"Dice is rolling---"<<endl;
            srand((unsigned) time(NULL));
            roll2=rand()%6;
            cout<<"Points for player 2 = "<<roll2<<endl;
            cout<<endl;
            while(roll2!=0){
                roll2--;
                p2--;
                track[p2][1]='X';
            }
            cout<<"###----Poll Race Game----###"<<endl;
            cout<<endl;
            cout<<"Rules : "<<endl;
            cout<<"1-One who complete the track wins the race"<<endl;
            cout<<"2-Decide who will be the first and second player"<<endl;
            cout<<endl;
            cout<<"--- Polls ---"<<endl;
            for(int i = 0 ; i<x ; i++){
                for(int j = 0 ; j < y ; j++){
                    cout<<"\t"<<track[i][j];
                }
                cout<<endl;
            }
        }
        if(track[0][0]=='O'){
            cout<<"Player 1 win !!"<<endl;
            exit(0);
        }
        if(track[0][1]=='X'){
            cout<<"Player 2 win !!"<<endl;
            exit(0);
        }
        if(track[0][1]=='X'&&track[0][0]=='O'){
            cout<<"Draw Match !!"<<endl;
            exit(0);
        }
        //17
        cout<<endl;
        cout<<"Player 1 turn "<<endl<<"Enter 1 to start rolling dice"<<endl;
        while (true) {
            cin>>play;
            if(play==1)break;
        }
        system("clear");
        if(play==1){
            cout<<"Player no 1 turn "<<endl;
            cout<<"Dice is rolling---"<<endl;
            srand((unsigned) time(NULL));
            roll1=rand()%6;
            cout<<"Points for player 1 = "<<roll1<<endl;
            cout<<endl;
            while(roll1!=0){
                roll1--;
                p1--;
                track[p1][0]='O';
            }
            cout<<"###----Poll Race Game----###"<<endl;
            cout<<endl;
            cout<<"Rules : "<<endl;
            cout<<"1-One who complete the track wins the race"<<endl;
            cout<<"2-Decide who will be the first and second player"<<endl;
            cout<<endl;
            cout<<"--- Polls ---"<<endl;
            for(int i = 0 ; i<x ; i++){
                for(int j = 0 ; j < y ; j++){
                    cout<<"\t"<<track[i][j];
                }
                cout<<endl;
            }
        }
        cout<<endl;
        cout<<"Player 2 turn "<<endl<<"Enter 1 to start rolling dice"<<endl;
        while (true) {
            cin>>play;
            if(play==1)break;
        }
        system("clear");
        if(play==1){
            cout<<"Prayer no 2 turn "<<endl;
            cout<<"Dice is rolling---"<<endl;
            srand((unsigned) time(NULL));
            roll2=rand()%6;
            cout<<"Points for player 2 = "<<roll2<<endl;
            cout<<endl;
            while(roll2!=0){
                roll2--;
                p2--;
                track[p2][1]='X';
            }
            cout<<"###----Poll Race Game----###"<<endl;
            cout<<endl;
            cout<<"Rules : "<<endl;
            cout<<"1-One who complete the track wins the race"<<endl;
            cout<<"2-Decide who will be the first and second player"<<endl;
            cout<<endl;
            cout<<"--- Polls ---"<<endl;
            for(int i = 0 ; i<x ; i++){
                for(int j = 0 ; j < y ; j++){
                    cout<<"\t"<<track[i][j];
                }
                cout<<endl;
            }
        }
        if(track[0][0]=='O'){
            cout<<"Player 1 win !!"<<endl;
            exit(0);
        }
        if(track[0][1]=='X'){
            cout<<"Player 2 win !!"<<endl;
            exit(0);
        }
        if(track[0][1]=='X'&&track[0][0]=='O'){
            cout<<"Draw Match !!"<<endl;
            exit(0);
        }
        //18
        cout<<endl;
        cout<<"Player 1 turn "<<endl<<"Enter 1 to start rolling dice"<<endl;
        while (true) {
            cin>>play;
            if(play==1)break;
        }
        system("clear");
        if(play==1){
            cout<<"Player no 1 turn "<<endl;
            cout<<"Dice is rolling---"<<endl;
            srand((unsigned) time(NULL));
            roll1=rand()%6;
            cout<<"Points for player 1 = "<<roll1<<endl;
            cout<<endl;
            while(roll1!=0){
                roll1--;
                p1--;
                track[p1][0]='O';
            }
            cout<<"###----Poll Race Game----###"<<endl;
            cout<<endl;
            cout<<"Rules : "<<endl;
            cout<<"1-One who complete the track wins the race"<<endl;
            cout<<"2-Decide who will be the first and second player"<<endl;
            cout<<endl;
            cout<<"--- Polls ---"<<endl;
            for(int i = 0 ; i<x ; i++){
                for(int j = 0 ; j < y ; j++){
                    cout<<"\t"<<track[i][j];
                }
                cout<<endl;
            }
        }
        cout<<endl;
        cout<<"Player 2 turn "<<endl<<"Enter 1 to start rolling dice"<<endl;
        while (true) {
            cin>>play;
            if(play==1)break;
        }
        system("clear");
        if(play==1){
            cout<<"Prayer no 2 turn "<<endl;
            cout<<"Dice is rolling---"<<endl;
            srand((unsigned) time(NULL));
            roll2=rand()%6;
            cout<<"Points for player 2 = "<<roll2<<endl;
            cout<<endl;
            while(roll2!=0){
                roll2--;
                p2--;
                track[p2][1]='X';
            }
            cout<<"###----Poll Race Game----###"<<endl;
            cout<<endl;
            cout<<"Rules : "<<endl;
            cout<<"1-One who complete the track wins the race"<<endl;
            cout<<"2-Decide who will be the first and second player"<<endl;
            cout<<endl;
            cout<<"--- Polls ---"<<endl;
            for(int i = 0 ; i<x ; i++){
                for(int j = 0 ; j < y ; j++){
                    cout<<"\t"<<track[i][j];
                }
                cout<<endl;
            }
        }
        if(track[0][0]=='O'){
            cout<<"Player 1 win !!"<<endl;
            exit(0);
        }
        if(track[0][1]=='X'){
            cout<<"Player 2 win !!"<<endl;
            exit(0);
        }
        if(track[0][1]=='X'&&track[0][0]=='O'){
            cout<<"Draw Match !!"<<endl;
            exit(0);
        }
        //19
        cout<<endl;
        cout<<"Player 1 turn "<<endl<<"Enter 1 to start rolling dice"<<endl;
        while (true) {
            cin>>play;
            if(play==1)break;
        }
        system("clear");
        if(play==1){
            cout<<"Player no 1 turn "<<endl;
            cout<<"Dice is rolling---"<<endl;
            srand((unsigned) time(NULL));
            roll1=rand()%6;
            cout<<"Points for player 1 = "<<roll1<<endl;
            cout<<endl;
            while(roll1!=0){
                roll1--;
                p1--;
                track[p1][0]='O';
            }
            cout<<"###----Poll Race Game----###"<<endl;
            cout<<endl;
            cout<<"Rules : "<<endl;
            cout<<"1-One who complete the track wins the race"<<endl;
            cout<<"2-Decide who will be the first and second player"<<endl;
            cout<<endl;
            cout<<"--- Polls ---"<<endl;
            for(int i = 0 ; i<x ; i++){
                for(int j = 0 ; j < y ; j++){
                    cout<<"\t"<<track[i][j];
                }
                cout<<endl;
            }
        }
        cout<<endl;
        cout<<"Player 2 turn "<<endl<<"Enter 1 to start rolling dice"<<endl;
        while (true) {
            cin>>play;
            if(play==1)break;
        }
        system("clear");
        if(play==1){
            cout<<"Prayer no 2 turn "<<endl;
            cout<<"Dice is rolling---"<<endl;
            srand((unsigned) time(NULL));
            roll2=rand()%6;
            cout<<"Points for player 2 = "<<roll2<<endl;
            cout<<endl;
            while(roll2!=0){
                roll2--;
                p2--;
                track[p2][1]='X';
            }
            cout<<"###----Poll Race Game----###"<<endl;
            cout<<endl;
            cout<<"Rules : "<<endl;
            cout<<"1-One who complete the track wins the race"<<endl;
            cout<<"2-Decide who will be the first and second player"<<endl;
            cout<<endl;
            cout<<"--- Polls ---"<<endl;
            for(int i = 0 ; i<x ; i++){
                for(int j = 0 ; j < y ; j++){
                    cout<<"\t"<<track[i][j];
                }
                cout<<endl;
            }
        }
        if(track[0][0]=='O'){
            cout<<"Player 1 win !!"<<endl;
            exit(0);
        }
        if(track[0][1]=='X'){
            cout<<"Player 2 win !!"<<endl;
            exit(0);
        }
        if(track[0][1]=='X'&&track[0][0]=='O'){
            cout<<"Draw Match !!"<<endl;
            exit(0);
        }
        //20
        cout<<endl;
        cout<<"Player 1 turn "<<endl<<"Enter 1 to start rolling dice"<<endl;
        while (true) {
            cin>>play;
            if(play==1)break;
        }
        system("clear");
        if(play==1){
            cout<<"Player no 1 turn "<<endl;
            cout<<"Dice is rolling---"<<endl;
            srand((unsigned) time(NULL));
            roll1=rand()%6;
            cout<<"Points for player 1 = "<<roll1<<endl;
            cout<<endl;
            while(roll1!=0){
                roll1--;
                p1--;
                track[p1][0]='O';
            }
            cout<<"###----Poll Race Game----###"<<endl;
            cout<<endl;
            cout<<"Rules : "<<endl;
            cout<<"1-One who complete the track wins the race"<<endl;
            cout<<"2-Decide who will be the first and second player"<<endl;
            cout<<endl;
            cout<<"--- Polls ---"<<endl;
            for(int i = 0 ; i<x ; i++){
                for(int j = 0 ; j < y ; j++){
                    cout<<"\t"<<track[i][j];
                }
                cout<<endl;
            }
        }
        cout<<endl;
        cout<<"Player 2 turn "<<endl<<"Enter 1 to start rolling dice"<<endl;
        while (true) {
            cin>>play;
            if(play==1)break;
        }
        system("clear");
        if(play==1){
            cout<<"Prayer no 2 turn "<<endl;
            cout<<"Dice is rolling---"<<endl;
            srand((unsigned) time(NULL));
            roll2=rand()%6;
            cout<<"Points for player 2 = "<<roll2<<endl;
            cout<<endl;
            while(roll2!=0){
                roll2--;
                p2--;
                track[p2][1]='X';
            }
            cout<<"###----Poll Race Game----###"<<endl;
            cout<<endl;
            cout<<"Rules : "<<endl;
            cout<<"1-One who complete the track wins the race"<<endl;
            cout<<"2-Decide who will be the first and second player"<<endl;
            cout<<endl;
            cout<<"--- Polls ---"<<endl;
            for(int i = 0 ; i<x ; i++){
                for(int j = 0 ; j < y ; j++){
                    cout<<"\t"<<track[i][j];
                }
                cout<<endl;
            }
        }
        if(track[0][0]=='O'){
            cout<<"Player 1 win !!"<<endl;
            exit(0);
        }
        if(track[0][1]=='X'){
            cout<<"Player 2 win !!"<<endl;
            exit(0);
        }
        if(track[0][1]=='X'&&track[0][0]=='O'){
            cout<<"Draw Match !!"<<endl;
            exit(0);
        }
        //21
        cout<<endl;
        cout<<"Player 1 turn "<<endl<<"Enter 1 to start rolling dice"<<endl;
        while (true) {
            cin>>play;
            if(play==1)break;
        }
        system("clear");
        if(play==1){
            cout<<"Player no 1 turn "<<endl;
            cout<<"Dice is rolling---"<<endl;
            srand((unsigned) time(NULL));
            roll1=rand()%6;
            cout<<"Points for player 1 = "<<roll1<<endl;
            cout<<endl;
            while(roll1!=0){
                roll1--;
                p1--;
                track[p1][0]='O';
            }
            cout<<"###----Poll Race Game----###"<<endl;
            cout<<endl;
            cout<<"Rules : "<<endl;
            cout<<"1-One who complete the track wins the race"<<endl;
            cout<<"2-Decide who will be the first and second player"<<endl;
            cout<<endl;
            cout<<"--- Polls ---"<<endl;
            for(int i = 0 ; i<x ; i++){
                for(int j = 0 ; j < y ; j++){
                    cout<<"\t"<<track[i][j];
                }
                cout<<endl;
            }
        }
        cout<<endl;
        cout<<"Player 2 turn "<<endl<<"Enter 1 to start rolling dice"<<endl;
        while (true) {
            cin>>play;
            if(play==1)break;
        }
        system("clear");
        if(play==1){
            cout<<"Prayer no 2 turn "<<endl;
            cout<<"Dice is rolling---"<<endl;
            srand((unsigned) time(NULL));
            roll2=rand()%6;
            cout<<"Points for player 2 = "<<roll2<<endl;
            cout<<endl;
            while(roll2!=0){
                roll2--;
                p2--;
                track[p2][1]='X';
            }
            cout<<"###----Poll Race Game----###"<<endl;
            cout<<endl;
            cout<<"Rules : "<<endl;
            cout<<"1-One who complete the track wins the race"<<endl;
            cout<<"2-Decide who will be the first and second player"<<endl;
            cout<<endl;
            cout<<"--- Polls ---"<<endl;
            for(int i = 0 ; i<x ; i++){
                for(int j = 0 ; j < y ; j++){
                    cout<<"\t"<<track[i][j];
                }
                cout<<endl;
            }
        }
        if(track[0][0]=='O'){
            cout<<"Player 1 win !!"<<endl;
            exit(0);
        }
        if(track[0][1]=='X'){
            cout<<"Player 2 win !!"<<endl;
            exit(0);
        }
        if(track[0][1]=='X'&&track[0][0]=='O'){
            cout<<"Draw Match !!"<<endl;
            exit(0);
        }
        //22
        cout<<endl;
        cout<<"Player 1 turn "<<endl<<"Enter 1 to start rolling dice"<<endl;
        while (true) {
            cin>>play;
            if(play==1)break;
        }
        system("clear");
        if(play==1){
            cout<<"Player no 1 turn "<<endl;
            cout<<"Dice is rolling---"<<endl;
            srand((unsigned) time(NULL));
            roll1=rand()%6;
            cout<<"Points for player 1 = "<<roll1<<endl;
            cout<<endl;
            while(roll1!=0){
                roll1--;
                p1--;
                track[p1][0]='O';
            }
            cout<<"###----Poll Race Game----###"<<endl;
            cout<<endl;
            cout<<"Rules : "<<endl;
            cout<<"1-One who complete the track wins the race"<<endl;
            cout<<"2-Decide who will be the first and second player"<<endl;
            cout<<endl;
            cout<<"--- Polls ---"<<endl;
            for(int i = 0 ; i<x ; i++){
                for(int j = 0 ; j < y ; j++){
                    cout<<"\t"<<track[i][j];
                }
                cout<<endl;
            }
        }
        cout<<endl;
        cout<<"Player 2 turn "<<endl<<"Enter 1 to start rolling dice"<<endl;
        while (true) {
            cin>>play;
            if(play==1)break;
        }
        system("clear");
        if(play==1){
            cout<<"Prayer no 2 turn "<<endl;
            cout<<"Dice is rolling---"<<endl;
            srand((unsigned) time(NULL));
            roll2=rand()%6;
            cout<<"Points for player 2 = "<<roll2<<endl;
            cout<<endl;
            while(roll2!=0){
                roll2--;
                p2--;
                track[p2][1]='X';
            }
            cout<<"###----Poll Race Game----###"<<endl;
            cout<<endl;
            cout<<"Rules : "<<endl;
            cout<<"1-One who complete the track wins the race"<<endl;
            cout<<"2-Decide who will be the first and second player"<<endl;
            cout<<endl;
            cout<<"--- Polls ---"<<endl;
            for(int i = 0 ; i<x ; i++){
                for(int j = 0 ; j < y ; j++){
                    cout<<"\t"<<track[i][j];
                }
                cout<<endl;
            }
        }
        if(track[0][0]=='O'){
            cout<<"Player 1 win !!"<<endl;
            exit(0);
        }
        if(track[0][1]=='X'){
            cout<<"Player 2 win !!"<<endl;
            exit(0);
        }
        if(track[0][1]=='X'&&track[0][0]=='O'){
            cout<<"Draw Match !!"<<endl;
            exit(0);
        }
        //23
        cout<<endl;
        cout<<"Player 1 turn "<<endl<<"Enter 1 to start rolling dice"<<endl;
        while (true) {
            cin>>play;
            if(play==1)break;
        }
        system("clear");
        if(play==1){
            cout<<"Player no 1 turn "<<endl;
            cout<<"Dice is rolling---"<<endl;
            srand((unsigned) time(NULL));
            roll1=rand()%6;
            cout<<"Points for player 1 = "<<roll1<<endl;
            cout<<endl;
            while(roll1!=0){
                roll1--;
                p1--;
                track[p1][0]='O';
            }
            cout<<"###----Poll Race Game----###"<<endl;
            cout<<endl;
            cout<<"Rules : "<<endl;
            cout<<"1-One who complete the track wins the race"<<endl;
            cout<<"2-Decide who will be the first and second player"<<endl;
            cout<<endl;
            cout<<"--- Polls ---"<<endl;
            for(int i = 0 ; i<x ; i++){
                for(int j = 0 ; j < y ; j++){
                    cout<<"\t"<<track[i][j];
                }
                cout<<endl;
            }
        }
        cout<<endl;
        cout<<"Player 2 turn "<<endl<<"Enter 1 to start rolling dice"<<endl;
        while (true) {
            cin>>play;
            if(play==1)break;
        }
        system("clear");
        if(play==1){
            cout<<"Prayer no 2 turn "<<endl;
            cout<<"Dice is rolling---"<<endl;
            srand((unsigned) time(NULL));
            roll2=rand()%6;
            cout<<"Points for player 2 = "<<roll2<<endl;
            cout<<endl;
            while(roll2!=0){
                roll2--;
                p2--;
                track[p2][1]='X';
            }
            cout<<"###----Poll Race Game----###"<<endl;
            cout<<endl;
            cout<<"Rules : "<<endl;
            cout<<"1-One who complete the track wins the race"<<endl;
            cout<<"2-Decide who will be the first and second player"<<endl;
            cout<<endl;
            cout<<"--- Polls ---"<<endl;
            for(int i = 0 ; i<x ; i++){
                for(int j = 0 ; j < y ; j++){
                    cout<<"\t"<<track[i][j];
                }
                cout<<endl;
            }
        }
        if(track[0][0]=='O'){
            cout<<"Player 1 win !!"<<endl;
            exit(0);
        }
        if(track[0][1]=='X'){
            cout<<"Player 2 win !!"<<endl;
            exit(0);
        }
        if(track[0][1]=='X'&&track[0][0]=='O'){
            cout<<"Draw Match !!"<<endl;
            exit(0);
        }
        //24
        cout<<endl;
        cout<<"Player 1 turn "<<endl<<"Enter 1 to start rolling dice"<<endl;
        while (true) {
            cin>>play;
            if(play==1)break;
        }
        system("clear");
        if(play==1){
            cout<<"Player no 1 turn "<<endl;
            cout<<"Dice is rolling---"<<endl;
            srand((unsigned) time(NULL));
            roll1=rand()%6;
            cout<<"Points for player 1 = "<<roll1<<endl;
            cout<<endl;
            while(roll1!=0){
                roll1--;
                p1--;
                track[p1][0]='O';
            }
            cout<<"###----Poll Race Game----###"<<endl;
            cout<<endl;
            cout<<"Rules : "<<endl;
            cout<<"1-One who complete the track wins the race"<<endl;
            cout<<"2-Decide who will be the first and second player"<<endl;
            cout<<endl;
            cout<<"--- Polls ---"<<endl;
            for(int i = 0 ; i<x ; i++){
                for(int j = 0 ; j < y ; j++){
                    cout<<"\t"<<track[i][j];
                }
                cout<<endl;
            }
        }
        cout<<endl;
        cout<<"Player 2 turn "<<endl<<"Enter 1 to start rolling dice"<<endl;
        while (true) {
            cin>>play;
            if(play==1)break;
        }
        system("clear");
        if(play==1){
            cout<<"Prayer no 2 turn "<<endl;
            cout<<"Dice is rolling---"<<endl;
            srand((unsigned) time(NULL));
            roll2=rand()%6;
            cout<<"Points for player 2 = "<<roll2<<endl;
            cout<<endl;
            while(roll2!=0){
                roll2--;
                p2--;
                track[p2][1]='X';
            }
            cout<<"###----Poll Race Game----###"<<endl;
            cout<<endl;
            cout<<"Rules : "<<endl;
            cout<<"1-One who complete the track wins the race"<<endl;
            cout<<"2-Decide who will be the first and second player"<<endl;
            cout<<endl;
            cout<<"--- Polls ---"<<endl;
            for(int i = 0 ; i<x ; i++){
                for(int j = 0 ; j < y ; j++){
                    cout<<"\t"<<track[i][j];
                }
                cout<<endl;
            }
        }
        if(track[0][0]=='O'){
            cout<<"Player 1 win !!"<<endl;
            exit(0);
        }
        if(track[0][1]=='X'){
            cout<<"Player 2 win !!"<<endl;
            exit(0);
        }
        if(track[0][1]=='X'&&track[0][0]=='O'){
            cout<<"Draw Match !!"<<endl;
            exit(0);
        }
        //25
        cout<<endl;
        cout<<"Player 1 turn "<<endl<<"Enter 1 to start rolling dice"<<endl;
        while (true) {
            cin>>play;
            if(play==1)break;
        }
        system("clear");
        if(play==1){
            cout<<"Player no 1 turn "<<endl;
            cout<<"Dice is rolling---"<<endl;
            srand((unsigned) time(NULL));
            roll1=rand()%6;
            cout<<"Points for player 1 = "<<roll1<<endl;
            cout<<endl;
            while(roll1!=0){
                roll1--;
                p1--;
                track[p1][0]='O';
            }
            cout<<"###----Poll Race Game----###"<<endl;
            cout<<endl;
            cout<<"Rules : "<<endl;
            cout<<"1-One who complete the track wins the race"<<endl;
            cout<<"2-Decide who will be the first and second player"<<endl;
            cout<<endl;
            cout<<"--- Polls ---"<<endl;
            for(int i = 0 ; i<x ; i++){
                for(int j = 0 ; j < y ; j++){
                    cout<<"\t"<<track[i][j];
                }
                cout<<endl;
            }
        }
        cout<<endl;
        cout<<"Player 2 turn "<<endl<<"Enter 1 to start rolling dice"<<endl;
        while (true) {
            cin>>play;
            if(play==1)break;
        }
        system("clear");
        if(play==1){
            cout<<"Prayer no 2 turn "<<endl;
            cout<<"Dice is rolling---"<<endl;
            srand((unsigned) time(NULL));
            roll2=rand()%6;
            cout<<"Points for player 2 = "<<roll2<<endl;
            cout<<endl;
            while(roll2!=0){
                roll2--;
                p2--;
                track[p2][1]='X';
            }
            cout<<"###----Poll Race Game----###"<<endl;
            cout<<endl;
            cout<<"Rules : "<<endl;
            cout<<"1-One who complete the track wins the race"<<endl;
            cout<<"2-Decide who will be the first and second player"<<endl;
            cout<<endl;
            cout<<"--- Polls ---"<<endl;
            for(int i = 0 ; i<x ; i++){
                for(int j = 0 ; j < y ; j++){
                    cout<<"\t"<<track[i][j];
                }
                cout<<endl;
            }
        }
        if(track[0][0]=='O'){
            cout<<"Player 1 win !!"<<endl;
            exit(0);
        }
        if(track[0][1]=='X'){
            cout<<"Player 2 win !!"<<endl;
            exit(0);
        }
        if(track[0][1]=='X'&&track[0][0]=='O'){
            cout<<"Draw Match !!"<<endl;
            exit(0);
        }
        //26
        cout<<endl;
        cout<<"Player 1 turn "<<endl<<"Enter 1 to start rolling dice"<<endl;
        while (true) {
            cin>>play;
            if(play==1)break;
        }
        system("clear");
        if(play==1){
            cout<<"Player no 1 turn "<<endl;
            cout<<"Dice is rolling---"<<endl;
            srand((unsigned) time(NULL));
            roll1=rand()%6;
            cout<<"Points for player 1 = "<<roll1<<endl;
            cout<<endl;
            while(roll1!=0){
                roll1--;
                p1--;
                track[p1][0]='O';
            }
            cout<<"###----Poll Race Game----###"<<endl;
            cout<<endl;
            cout<<"Rules : "<<endl;
            cout<<"1-One who complete the track wins the race"<<endl;
            cout<<"2-Decide who will be the first and second player"<<endl;
            cout<<endl;
            cout<<"--- Polls ---"<<endl;
            for(int i = 0 ; i<x ; i++){
                for(int j = 0 ; j < y ; j++){
                    cout<<"\t"<<track[i][j];
                }
                cout<<endl;
            }
        }
        cout<<endl;
        cout<<"Player 2 turn "<<endl<<"Enter 1 to start rolling dice"<<endl;
        while (true) {
            cin>>play;
            if(play==1)break;
        }
        system("clear");
        if(play==1){
            cout<<"Prayer no 2 turn "<<endl;
            cout<<"Dice is rolling---"<<endl;
            srand((unsigned) time(NULL));
            roll2=rand()%6;
            cout<<"Points for player 2 = "<<roll2<<endl;
            cout<<endl;
            while(roll2!=0){
                roll2--;
                p2--;
                track[p2][1]='X';
            }
            cout<<"###----Poll Race Game----###"<<endl;
            cout<<endl;
            cout<<"Rules : "<<endl;
            cout<<"1-One who complete the track wins the race"<<endl;
            cout<<"2-Decide who will be the first and second player"<<endl;
            cout<<endl;
            cout<<"--- Polls ---"<<endl;
            for(int i = 0 ; i<x ; i++){
                for(int j = 0 ; j < y ; j++){
                    cout<<"\t"<<track[i][j];
                }
                cout<<endl;
            }
        }
        if(track[0][0]=='O'){
            cout<<"Player 1 win !!"<<endl;
            exit(0);
        }
        if(track[0][1]=='X'){
            cout<<"Player 2 win !!"<<endl;
            exit(0);
        }
        if(track[0][1]=='X'&&track[0][0]=='O'){
            cout<<"Draw Match !!"<<endl;
            exit(0);
        }
        //27
        cout<<endl;
        cout<<"Player 1 turn "<<endl<<"Enter 1 to start rolling dice"<<endl;
        while (true) {
            cin>>play;
            if(play==1)break;
        }
        system("clear");
        if(play==1){
            cout<<"Player no 1 turn "<<endl;
            cout<<"Dice is rolling---"<<endl;
            srand((unsigned) time(NULL));
            roll1=rand()%6;
            cout<<"Points for player 1 = "<<roll1<<endl;
            cout<<endl;
            while(roll1!=0){
                roll1--;
                p1--;
                track[p1][0]='O';
            }
            cout<<"###----Poll Race Game----###"<<endl;
            cout<<endl;
            cout<<"Rules : "<<endl;
            cout<<"1-One who complete the track wins the race"<<endl;
            cout<<"2-Decide who will be the first and second player"<<endl;
            cout<<endl;
            cout<<"--- Polls ---"<<endl;
            for(int i = 0 ; i<x ; i++){
                for(int j = 0 ; j < y ; j++){
                    cout<<"\t"<<track[i][j];
                }
                cout<<endl;
            }
        }
        cout<<endl;
        cout<<"Player 2 turn "<<endl<<"Enter 1 to start rolling dice"<<endl;
        while (true) {
            cin>>play;
            if(play==1)break;
        }
        system("clear");
        if(play==1){
            cout<<"Prayer no 2 turn "<<endl;
            cout<<"Dice is rolling---"<<endl;
            srand((unsigned) time(NULL));
            roll2=rand()%6;
            cout<<"Points for player 2 = "<<roll2<<endl;
            cout<<endl;
            while(roll2!=0){
                roll2--;
                p2--;
                track[p2][1]='X';
            }
            cout<<"###----Poll Race Game----###"<<endl;
            cout<<endl;
            cout<<"Rules : "<<endl;
            cout<<"1-One who complete the track wins the race"<<endl;
            cout<<"2-Decide who will be the first and second player"<<endl;
            cout<<endl;
            cout<<"--- Polls ---"<<endl;
            for(int i = 0 ; i<x ; i++){
                for(int j = 0 ; j < y ; j++){
                    cout<<"\t"<<track[i][j];
                }
                cout<<endl;
            }
        }
        if(track[0][0]=='O'){
            cout<<"Player 1 win !!"<<endl;
            exit(0);
        }
        if(track[0][1]=='X'){
            cout<<"Player 2 win !!"<<endl;
            exit(0);
        }
        if(track[0][1]=='X'&&track[0][0]=='O'){
            cout<<"Draw Match !!"<<endl;
            exit(0);
        }
        //28
        cout<<endl;
        cout<<"Player 1 turn "<<endl<<"Enter 1 to start rolling dice"<<endl;
        while (true) {
            cin>>play;
            if(play==1)break;
        }
        system("clear");
        if(play==1){
            cout<<"Player no 1 turn "<<endl;
            cout<<"Dice is rolling---"<<endl;
            srand((unsigned) time(NULL));
            roll1=rand()%6;
            cout<<"Points for player 1 = "<<roll1<<endl;
            cout<<endl;
            while(roll1!=0){
                roll1--;
                p1--;
                track[p1][0]='O';
            }
            cout<<"###----Poll Race Game----###"<<endl;
            cout<<endl;
            cout<<"Rules : "<<endl;
            cout<<"1-One who complete the track wins the race"<<endl;
            cout<<"2-Decide who will be the first and second player"<<endl;
            cout<<endl;
            cout<<"--- Polls ---"<<endl;
            for(int i = 0 ; i<x ; i++){
                for(int j = 0 ; j < y ; j++){
                    cout<<"\t"<<track[i][j];
                }
                cout<<endl;
            }
        }
        cout<<endl;
        cout<<"Player 2 turn "<<endl<<"Enter 1 to start rolling dice"<<endl;
        while (true) {
            cin>>play;
            if(play==1)break;
        }
        system("clear");
        if(play==1){
            cout<<"Prayer no 2 turn "<<endl;
            cout<<"Dice is rolling---"<<endl;
            srand((unsigned) time(NULL));
            roll2=rand()%6;
            cout<<"Points for player 2 = "<<roll2<<endl;
            cout<<endl;
            while(roll2!=0){
                roll2--;
                p2--;
                track[p2][1]='X';
            }
            cout<<"###----Poll Race Game----###"<<endl;
            cout<<endl;
            cout<<"Rules : "<<endl;
            cout<<"1-One who complete the track wins the race"<<endl;
            cout<<"2-Decide who will be the first and second player"<<endl;
            cout<<endl;
            cout<<"--- Polls ---"<<endl;
            for(int i = 0 ; i<x ; i++){
                for(int j = 0 ; j < y ; j++){
                    cout<<"\t"<<track[i][j];
                }
                cout<<endl;
            }
        }
        if(track[0][0]=='O'){
            cout<<"Player 1 win !!"<<endl;
            exit(0);
        }
        if(track[0][1]=='X'){
            cout<<"Player 2 win !!"<<endl;
            exit(0);
        }
        if(track[0][1]=='X'&&track[0][0]=='O'){
            cout<<"Draw Match !!"<<endl;
            exit(0);
        }
        //29
        cout<<endl;
        cout<<"Player 1 turn "<<endl<<"Enter 1 to start rolling dice"<<endl;
        while (true) {
            cin>>play;
            if(play==1)break;
        }
        system("clear");
        if(play==1){
            cout<<"Player no 1 turn "<<endl;
            cout<<"Dice is rolling---"<<endl;
            srand((unsigned) time(NULL));
            roll1=rand()%6;
            cout<<"Points for player 1 = "<<roll1<<endl;
            cout<<endl;
            while(roll1!=0){
                roll1--;
                p1--;
                track[p1][0]='O';
            }
            cout<<"###----Poll Race Game----###"<<endl;
            cout<<endl;
            cout<<"Rules : "<<endl;
            cout<<"1-One who complete the track wins the race"<<endl;
            cout<<"2-Decide who will be the first and second player"<<endl;
            cout<<endl;
            cout<<"--- Polls ---"<<endl;
            for(int i = 0 ; i<x ; i++){
                for(int j = 0 ; j < y ; j++){
                    cout<<"\t"<<track[i][j];
                }
                cout<<endl;
            }
        }
        cout<<endl;
        cout<<"Player 2 turn "<<endl<<"Enter 1 to start rolling dice"<<endl;
        while (true) {
            cin>>play;
            if(play==1)break;
        }
        system("clear");
        if(play==1){
            cout<<"Prayer no 2 turn "<<endl;
            cout<<"Dice is rolling---"<<endl;
            srand((unsigned) time(NULL));
            roll2=rand()%6;
            cout<<"Points for player 2 = "<<roll2<<endl;
            cout<<endl;
            while(roll2!=0){
                roll2--;
                p2--;
                track[p2][1]='X';
            }
            cout<<"###----Poll Race Game----###"<<endl;
            cout<<endl;
            cout<<"Rules : "<<endl;
            cout<<"1-One who complete the track wins the race"<<endl;
            cout<<"2-Decide who will be the first and second player"<<endl;
            cout<<endl;
            cout<<"--- Polls ---"<<endl;
            for(int i = 0 ; i<x ; i++){
                for(int j = 0 ; j < y ; j++){
                    cout<<"\t"<<track[i][j];
                }
                cout<<endl;
            }
        }
        if(track[0][0]=='O'){
            cout<<"Player 1 win !!"<<endl;
            exit(0);
        }
        if(track[0][1]=='X'){
            cout<<"Player 2 win !!"<<endl;
            exit(0);
        }
        if(track[0][1]=='X'&&track[0][0]=='O'){
            cout<<"Draw Match !!"<<endl;
            exit(0);
        }
        //30
        cout<<endl;
        cout<<"Player 1 turn "<<endl<<"Enter 1 to start rolling dice"<<endl;
        while (true) {
            cin>>play;
            if(play==1)break;
        }
        system("clear");
        if(play==1){
            cout<<"Player no 1 turn "<<endl;
            cout<<"Dice is rolling---"<<endl;
            srand((unsigned) time(NULL));
            roll1=rand()%6;
            cout<<"Points for player 1 = "<<roll1<<endl;
            cout<<endl;
            while(roll1!=0){
                roll1--;
                p1--;
                track[p1][0]='O';
            }
            cout<<"###----Poll Race Game----###"<<endl;
            cout<<endl;
            cout<<"Rules : "<<endl;
            cout<<"1-One who complete the track wins the race"<<endl;
            cout<<"2-Decide who will be the first and second player"<<endl;
            cout<<endl;
            cout<<"--- Polls ---"<<endl;
            for(int i = 0 ; i<x ; i++){
                for(int j = 0 ; j < y ; j++){
                    cout<<"\t"<<track[i][j];
                }
                cout<<endl;
            }
        }
        cout<<endl;
        cout<<"Player 2 turn "<<endl<<"Enter 1 to start rolling dice"<<endl;
        while (true) {
            cin>>play;
            if(play==1)break;
        }
        system("clear");
        if(play==1){
            cout<<"Prayer no 2 turn "<<endl;
            cout<<"Dice is rolling---"<<endl;
            srand((unsigned) time(NULL));
            roll2=rand()%6;
            cout<<"Points for player 2 = "<<roll2<<endl;
            cout<<endl;
            while(roll2!=0){
                roll2--;
                p2--;
                track[p2][1]='X';
            }
            cout<<"###----Poll Race Game----###"<<endl;
            cout<<endl;
            cout<<"Rules : "<<endl;
            cout<<"1-One who complete the track wins the race"<<endl;
            cout<<"2-Decide who will be the first and second player"<<endl;
            cout<<endl;
            cout<<"--- Polls ---"<<endl;
            for(int i = 0 ; i<x ; i++){
                for(int j = 0 ; j < y ; j++){
                    cout<<"\t"<<track[i][j];
                }
                cout<<endl;
            }
        }
        if(track[0][0]=='O'){
            cout<<"Player 1 win !!"<<endl;
            exit(0);
        }
        if(track[0][1]=='X'){
            cout<<"Player 2 win !!"<<endl;
            exit(0);
        }
        if(track[0][1]=='X'&&track[0][0]=='O'){
            cout<<"Draw Match !!"<<endl;
            exit(0);
        }
    }
    return 0;
}
