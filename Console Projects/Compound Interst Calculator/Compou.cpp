#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    
//intialization
              float money,
                   days=0,
                  month=0,
                   year=0,
            actualmoney=0,
                  interst,
          interstamount=0;
                char time;
    
//Inputs
    cout<<"----Interst calculator----"<<endl;
    cout<<"Enter Money : ";
    cin>>money;
    cout<<"Enter interst in percent : ";
    cin>>interst;
    cout<<"Enter Time (NOTE::D for DAY,M for MONTH,Y for YEAR) : ";
    cin.ignore();
    while (true) {
        cin.get(time);
        if(time=='d'||time=='D'){
            cout<<"How many Days : ";
            cin>>days;
            break;
        }
        if(time=='m'||time=='M'){
            cout<<"How many Month : ";
            cin>>month;
            break;
        }
        if(time=='y'||time=='Y'){
            cout<<"How many Years : ";
            cin>>year;
            break;
        }
        if(!((time=='y'||time=='Y')||(time=='m'||time=='M')||(time=='d'||time=='D'))){
            cout<<"Wrong Input LAST TRY !! "<<endl;
            cout<<"Enter Time (NOTE::D for DAY,M for MONTH,Y for YEAR) : ";
            cin.ignore();
            cin.get(time);
            if(time=='d'||time=='D'){
                cout<<"How many Days : ";
                cin>>days;
                break;
            }
            if(time=='m'||time=='M'){
                cout<<"How many Month : ";
                cin>>month;
                break;
            }
            if(time=='y'||time=='Y'){
                cout<<"How many Years : ";
                cin>>year;
                break;
            }
            if(!((time=='y'||time=='Y')||(time=='m'||time=='M')||(time=='d'||time=='D'))){
                cout<<"Wrong Input ENDED !! "<<endl;
                exit(0);
            }
        }
    }
//Whole program
    cout<<endl;
    if((time=='d'||time=='D')&&(days>0)){
        cout<<"Days"<<setw(15)<<"Money"<<setw(15)<<"Interst"<<setw(15)<<"Actualmoney";
        cout<<endl;
        cout<<endl;
        for(int i = 1 ; i<=days ; i++){
            interstamount=((money/100)*interst);
            actualmoney=(money+interstamount);
            cout<<i<<setw(15)<<money<<setw(15)<<interstamount<<setw(15)<<actualmoney<<endl;
            money=actualmoney;
        }
        cout<<endl;
        cout<<"Total amount "<<money<<" you gain from "<<interst<<"% interst.."<<endl;
        cout<<endl;
    }
    if((time=='m'||time=='M')&&(month>0)){
        cout<<"Months"<<setw(15)<<"Money"<<setw(15)<<"Interst"<<setw(15)<<"Actualmoney";
        cout<<endl;
        cout<<endl;
        for(int i = 1 ; i<=month ; i++){
            interstamount=((money/100)*interst);
            actualmoney=(money+interstamount);
            cout<<i<<setw(15)<<money<<setw(15)<<interstamount<<setw(15)<<actualmoney<<endl;
            money=actualmoney;
        }
        cout<<endl;
        cout<<"Total amount "<<money<<" you gain from "<<interst<<"% interst.."<<endl;
        cout<<endl;
    }
    if((time=='y'||time=='Y')&&(year>0)){
        cout<<"Years"<<setw(15)<<"Money"<<setw(15)<<"Interst"<<setw(15)<<"Actualmoney";
        cout<<endl;
        cout<<endl;
        for(int i = 1 ; i<=year ; i++){
            interstamount=((money/100)*interst);
            actualmoney=(money+interstamount);
            cout<<i<<setw(15)<<money<<setw(15)<<interstamount<<setw(15)<<actualmoney<<endl;
            money=actualmoney;
        }
        cout<<endl;
        cout<<"Total amount "<<money<<" you gain from "<<interst<<"% interst.."<<endl;
        cout<<endl;
    }
    return 0;
}
