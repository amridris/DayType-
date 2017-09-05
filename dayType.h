//
// Created by amer0 on 8/31/2017.
//

#ifndef UNTITLED1_DAYTYPE_H
#define UNTITLED1_DAYTYPE_H


class dayType {
private:

    //Variables needed to implement the class definition
    int presentDay, nextDay, previousDay;


    //functions needed to implement the DayType class
public:
    //Constructor
    dayType();

    //parametrized constructor to initialize current day
    dayType(int day);

    //set Day function
    void setDay(int day);

    //print Day function
    void printDay(int day);

    //Day return function
    int getDay();

    //Return the next day function
    int getNextDay();

    //Return the previous day function
    int getPreviousDay();

    //function toincrement Day by given x value
    int getDayAfter(int day);

    //Function to decrement day by a given x vaule
    int getDayBefore(int day);

}; // End of dayType header


#endif //UNTITLED1_DAYTYPE_H
