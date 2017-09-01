//
// Created by amer0 on 8/31/2017.
//
#include <iostream>
#include "dayType.h"
using namespace std;



// Default constructor definition
dayType::dayType()
{
    presentDay = 0;
    nextDay = 0;
    previousDay = 0;

}


//Parametrized constructor
dayType::dayType(int day) {
    if(day<0 || day>6){
        cout<<"Sorry invalid day number"<<endl;
        exit(1);
    }
    else{
        presentDay = day;
    }
}


//return day function
int dayType::getDay() {
    return presentDay;
}


//return next day function definition
int dayType::getNextDay() {
    return nextDay;
}



//return previous day funtion definition
int dayType::getPreviousDay() {
    return previousDay;
}

//set day function
void dayType::setDay(int day) {
    if(day<0 || day>6){
        cout<<"Invalid day entry"<<endl;
        exit(1);
    }
    else{
        presentDay = day;
    }
}

// print day function using switch cmd
void dayType::printDay(int day) {
    switch(day){
        case 0:
            cout<<"Sun"<<endl;
        break;

        case 1:
            cout<<"Mon"<<endl;
            break;
        case 2:
            cout<<"Tue"<<endl;
            break;
        case 3:
            cout<<"Wed"<<endl;
            break;
        case 4:
            cout<<"Thu"<<endl;
            break;
        case 5:
            cout<<"Fri"<<endl;
            break;
        case 6:
            cout<<"Sat"<<endl;
            break;
    }
}


//function add days

int dayType::getDayAfter(int day) {
    int newDay = presentDay + day;
    if (newDay > 6) {
        //To ensure that the newday never exceed day 7
        newDay = newDay % 7;
        return newDay;
    }
}

int dayType::getDayBefore(int day) {
    int newDay = presentDay - day;
    if (newDay > 6) {
        //To ensure that the newday never exceed day 7
        newDay = newDay % 7;
        return newDay;
    }
}
