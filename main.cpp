#include <iostream>
#include "dayType.h"
using namespace std;


int main() {

    cout << "~~~~~~~Testing all the function of dayType class~~~~~~~~~~~~~~~~~~" << endl;

    // display program
    cout
            << "value 0-6 represent the following days:\n 0-Sunday \n 1-Monday \n 2-Tuesday \n 3-wednesday \n 4-Thursday \n 5-Friday \n 6-Saturday"
            << endl;

    //constructor test
    dayType day1;

    //testing the default day values below from the constructor
    cout << "Today: " << day1.getDay() << endl;

    cout << "Previous Day: " << day1.getPreviousDay()<<endl;

    cout << "Next Day: " << day1.getNextDay() << endl;

    //testing parametrized constructor & day incrementer // testing for sunday(0)
    dayType day2(4);
    cout<<"\n\nRunning 2nd test"<<endl;
    cout << "The day should be Thursday: ";
    day2.printDay(day2.getDay());
    cout << "Testing the next and previous day functions" << endl;
    cout << "Next Day will be: ";
    day2.printDay(day2.getDayAfter(1));
    cout << "Previous day was: ";
    day2.printDay((day2.getDayBefore(1)));
    cout << "After tomorrow will be on: " << endl;
    day2.printDay(day2.getDayAfter(2));
    cout << "10 days from will be on: " << endl;
    day2.printDay(day2.getDayAfter(10));


    dayType day3;
    int pickDay;
    cout << "Please input a value from 0-6 to select a day referencing the text at the beginning of this program"
         << endl;
    cin >> pickDay;
    if (pickDay < 0 || pickDay > 6) {
        cout << "Invalid day entry" << endl;
        exit(1);
    } else {
        cout << "The day you chose is: ";
        day3.setDay(pickDay);
        day3.printDay(day3.getDay());
    }
    cout << "The previous day was: ";
    day3.printDay((day3.getDayBefore(1)));
    cout << "The next day will be: ";
    day3.printDay(day3.getDayAfter(1));

    return 0;

}

