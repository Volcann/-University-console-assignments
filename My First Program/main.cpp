#include<iostream>
#include<iomanip>
#include<string>
#include<cmath>
using namespace std;
#define  pi 3.14159
int main()

{
    //Variable decelerations
    int operation, number, marks_outof, percentage, h;
    float hours, area, decimal, length, width, minutes, denominator, numerator, radius;
    string c="volisend";
 
    double test1, test2, test3, average, total_number;
    char g='+';

    //Introduction
    cout<<"This software can perform multiple operations"<<endl;
    cout<<"Welcome please enter password"<<endl;
    cin>>c;

    //Program
    if (c!="volisend")
    {
        cout<<"Wrong password try again";
    }
    else
    {
        do {
            //Enter conditions
            cout<<"Password entered let's begin\n"<<endl;
            cout<<"Operation would you like to perform"<<endl;
            cout<<"Press 0 to exit"<<endl;
            cout<<"Press 1 to Calculate Area , volume , hypotenuse"<<endl;
            cout<<"Press 2 to Check Decimal values"<<endl;
            cout<<"Press 3 for Basic Arithmetic Calculator"<<endl;
            cout<<"Press 4 to convert time"<<endl;
            cout<<"Press 5 to calculate student marks and their percentage"<<endl;
            cout<<"Press 6 to convert dijits into alphabets symbols by ASKII"<<endl;
            cin>>operation;
            if(operation!=6&&operation!=5&&operation!=4&&operation!=3&&operation!=2&&operation!=1&&operation!=0)
            {
                cout<<"You can select only 0 to 6 number"<<endl;
            }
            else
            {
                switch(operation)
                {

                //Area
                case 1:
                    cout<<"What type of area you want to Calculate"<<endl;
                    cout<<"Press 1 to measure Area of rectangle"<<endl;
                    cout<<"Press 2 to measure Area of circle"<<endl;
                    cout<<"Press 3 to measure Volume of cube"<<endl;
                    cout<<"Press 4 to measure hypotenuse"<<endl;
                    cin>>h;
                    if (h!=4&&h!=3&&h!=2&&h!=1)
                    {
                        cout<<"You can select only 1 to 4 number"<<endl;
                    }
                    else
                    {
                        switch (h)
                        {
                        //Area of rectangle
                        case 1:
                            cout<<"You selected the area calculation"<<endl;
                            cout<<"Enter the length"<<endl;
                            cin>>length;
                            cout<<"Enter the width"<<endl;
                            cin>>width;
                            area = length * width ;
                            cout<<"Your area is = "<<area;
                            break;
                        //Area of Circle
                        case 2:
                            cout<<"You selected calculating the area of circle"<<endl;
                            cout<<"Enter Radius"<<endl;
                            cin>>radius;
                            area = pi * pow(radius,2.0);
                            cout<<"The area of circle is = "<<setw(2)<<area;
                            break;
                        //Volume of a Cube
                        case 3:
                            cout<<"You will now calculate Volume of cube"<<endl;
                            cout<<"Enter length"<<endl;
                            cin>>test1;
                            cout<<"Enter width"<<endl;
                            cin>>test2;
                            cout<<"Enter Height"<<endl;
                            cin>>test3;
                            minutes = test1 * test2 * test3 ;
                            cout<<"Volume of cube is = "<<setw(2)<<minutes<<setw(2)<<"per cube meter square";
                            break;
                        //Calculating the hypotenuse of a right triangle
                        case 4:
                            cout<<"You will now calculate the hypotenuse"<<endl;
                            cout<<"Enter A side"<<endl;
                            cin>>test1;
                            cout<<"Enter B side"<<endl;
                            cin>>test2;
                            area = sqrt(pow(test1,2.0)+pow(test2,2.0));
                            cout<<"The hypotenuse is "<<setw(2)<<area;
                            break;
                        }
                    }
                    break;

                //Decimal values
                case 2:
                    cout<<"You Selected the decimal value calculation"<<endl;
                    cout<<"Enter numerator"<<endl;
                    cin>>numerator;
                    cout<<"Enter denominator"<<endl;
                    cin>>denominator;
                    decimal = numerator / denominator;
                    cout<<"The decimal value is "<<decimal;
                    break;

                //Basic Calculator
                case 3:
                    cout<<"Now you can calculate basic Calculations"<<endl;
                    cout<<"Enter the first number"<<endl;
                    cin>>test1;
                    cout<<"Enter the second number"<<endl;
                    cin>>test2;
                    cout<<"Enter arithmetic operator"<<endl;
                    cin>>g;
                    if (g!='+'&&g!='-'&&g!='*'&&g!='/')
                    {
                        cout<<"Error Restart again"<<endl;
                    }
                    else
                    {
                        switch (g)
                        {
                        case '+':
                            cout<<"Addition is "<<setw(2)<<test1+test2;
                            break;
                        case '-':
                            cout<<"Subtraction is "<<setw(2)<<test1-test2;
                            break;
                        case '*':
                            cout<<"Multiplication is "<<setw(2)<<test1*test2;
                            break;
                        case '/':
                            cout<<"Division is "<<setw(2)<<test1/test2;
                            break;
                        }
                        break;

                    //Converting time
                    case 4:
                        cout<<"Now you can convert time into different units"<<endl;
                        cout<<"What you want to convert"<<endl;
                        cout<<"Press 1 to convert seconds into minutes"<<endl;
                        cout<<"Press 2 to convert minutes into hours"<<endl;
                        cout<<"Press 3 to convert minutes into seconds"<<endl;
                        cout<<"Press 4 to convert hours into minutes"<<endl;
                        cout<<"Press 5 to convert seconds into hours"<<endl;
                        cout<<"Press 6 to convert hours into seconds"<<endl;
                        cin>>h;
                        if (h!=6&&h!=5&&h!=4&&h!=3&&h!=2&&h!=1)
                        {
                            cout<<"You can select only 1 to 6 number"<<endl;
                        }
                        else
                        {

                            switch(h)
                            {
                            //Converting Seconds into minutes
                            case 1:
                                cout<<"You selected converting minutes into hours"<<endl;
                                cout<<"Enter Seconds"<<endl;
                                cin>>minutes;
                                hours = minutes / 60 ;
                                cout<<"total Seconds are = "<<hours<<"s";
                                break;

                            //Converting Minutes into hours
                            case 2:
                                cout<<"You selected converting minutes into hours"<<endl;
                                cout<<"Enter Minutes"<<endl;
                                cin>>minutes;
                                hours = minutes / 60 ;
                                cout<<"total hours are = "<<hours<<"hrs";
                                break;

                            //Converting Minutes into seconds
                            case 3:
                                cout<<"You selected converting minutes into hours"<<endl;
                                cout<<"Enter Minutes"<<endl;
                                cin>>minutes;
                                hours = minutes * 60 ;
                                cout<<"total Seconds are = "<<hours<<"s";
                                break;

                            //Converting hours into minutes
                            case 4:
                                cout<<"You selected converting minutes into hours"<<endl;
                                cout<<"Enter Hours"<<endl;
                                cin>>minutes;
                                hours = minutes * 60 ;
                                cout<<"total hours are = "<<hours<<"mins";
                                break;

                            //Converting seconds into hours
                            case 5:
                                cout<<"You selected converting minutes into hours"<<endl;
                                cout<<"Enter Seconds"<<endl;
                                cin>>minutes;
                                hours = minutes / 60 / 60 ;
                                cout<<"total hours are = "<<hours<<"hrs";
                                break;

                            //Converting hours into seconds
                            case 6:
                                cout<<"You selected converting minutes into hours"<<endl;
                                cout<<"Enter Hours"<<endl;
                                cin>>minutes;
                                hours = minutes * 60 * 60 ;
                                cout<<"total Seconds are = "<<hours<<"s";
                                break;
                            }
                        }
                        break;
                    }
                //Calculating students marks
                case 5:
                    cout<<"Now you can calculate marks"<<endl;
                    cout<<"Press 1 to calculate average marks"<<endl;
                    cout<<"Press 2 to calculate total marks"<<endl;
                    cout<<"Press 3 to calculate percentage of marks"<<endl;
                    cin>>h;
                    if(h!=3&&h!=2&&h!=1)
                    {
                        cout<<"You can select only 1 to 3 number"<<endl;
                    }
                    else
                    {

                        switch (h)
                        {

                        //Students Average Marks
                        case 1:
                            cout<<"You selected calculating Average marks"<<endl;
                            cout<<"Enter test 1 numbers"<<endl;
                            cin>>test1;
                            cout<<"Enter test 2 numbers"<<endl;
                            cin>>test2;
                            cout<<"Enter test 3 numbers"<<endl;
                            cin>>test3;
                            average = (test1 + test2 + test3)/3.0;
                            cout<<"The Average marks were ="<<average;
                            break;

                        //Total Marks
                        case 2:
                            cout<<"You selected calculating total marks"<<endl;
                            cout<<"Enter test 1 numbers"<<endl;
                            cin>>test1;
                            cout<<"Enter test 2 numbers"<<endl;
                            cin>>test2;
                            cout<<"Enter test 3 numbers"<<endl;
                            cin>>test3;
                            average = test1 + test2 + test3 ;
                            cout<<"The total marks were ="<<average;
                            break;

                        //Calculating Percentage
                        case 3:
                            cout<<"You selected calculating percentage"<<endl;
                            cout<<"Enter test 1 number"<<endl;
                            cin>>test1;
                            cout<<"Enter test 2 number"<<endl;
                            cin>>test2;
                            cout<<"Enter test 3 number"<<endl;
                            cin>>test3;
                            total_number = test1 + test2 + test3;
                            cout<<"Enter marks out of"<<endl;
                            cin>>marks_outof;
                            percentage = (total_number/marks_outof)*100;
                            cout<<"Your percentage is = "<<percentage<<"%";
                            break;
                        }
                    }
                    break;

                //Converting number to ASKII assigned alphabets
                case 6:
                    cout<<"Enter the number for ASCII"<<endl;
                    cin>>number;
                    cout <<"The Alphabet is"<<setw(2)<<static_cast<char>(number) << endl;
                    break;
                }
            }

        } while(operation<0);
    }
    return 0;
}
