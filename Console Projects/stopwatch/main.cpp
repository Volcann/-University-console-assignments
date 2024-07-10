#include<iostream>
using namespace std;

int main() {
//intitlization
    int min = 0,
        sec = 0,
        milisec = 0,
        start,
        tillmin,
        hours = 0;
//Actual program
    cout<<"Type 1 to start the infinite stopwatch\n";
    cout<<"Type 2 to start stopwatch at till minutes\n";
//Input validation for start
    while(true) {
        cin>>start;
        if(start==1)break;
        if(start==2)break;
        else {
            system("clear");
            cout<<"Wrong input \n";
        }
    }
//Start stop watch infinite
    if(start==1) {
        while(true) {
            while (true) {
                milisec++;
                if(milisec==30) {
                    milisec=0;
                    sec++;
                }
                if(sec==60) {
                    sec=0;
                    min++;
                }
                system("clear");
                cout<<"\t\t----Stop watch----\n";
                endl(cout);
                cout<<"\t\t"<<sec<<" : "<<milisec<<endl;
                if(min==1)break;
            }
            while(true) {
                milisec++;
                if(milisec==30) {
                    milisec=0;
                    sec++;
                }
                if(sec==60) {
                    sec=0;
                    min++;
                }
                if(min==60) {
                    min=0;
                    hours++;
                }
                system("clear");
                cout<<"\t\t----Stop watch----\n";
                endl(cout);
                cout<<"\t\t"<<min<<" : "<<sec<<" : "<<milisec<<endl;
            }
        }
    }
//start stopwatch finite according to user
    if(start==2) {
        cout<<"Enter minutes till stopwatch work : ";
        cin>>tillmin;
        while(true) {
            while (true) {
                milisec++;
                if(milisec==30) {
                    milisec=0;
                    sec++;
                }
                if(sec==60) {
                    sec=0;
                    min++;
                }
                if(min==tillmin)exit(0);
                system("clear");
                cout<<"\t\t----Stop watch----\n";
                cout<<"\t\t"<<sec<<" : "<<milisec<<endl;
                if(min==1)break;
            }
            while(true) {
                milisec++;
                if(milisec==140000000) {
                    milisec=0;
                    sec++;
                }
                if(sec==60) {
                    sec=0;
                    min++;
                }
                if(min==60) {
                    min=0;
                    hours++;
                }
                if(min==tillmin)exit(0);
                system("clear");
                cout<<"\t\t----Stop watch----\n";
                cout<<"\t\t"<<min<<" : "<<sec<<" : "<<milisec<<endl;
            }
        }
    }
    return 0;
}
