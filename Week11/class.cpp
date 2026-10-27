// Brayden Reiners Fall 2026 Coding 1
//Classes

#include <iostream>
#include <string>
using namespace std;

#include <chrono>
#include <thread>

// Classes are custom variables
// they have their own variables and functions
    // named "data members"
    // and "member functions"
    // they also have constructors and destructors
        // which run when the object is created
        // or destroyed


class Robot {
public:
    string name; 
    float charge;   // 0 to 1 as a percent

    // create a constructor
    Robot() {
        cout << "\tA new robot appears!\n";
    }

    // create a constructor that accepts a name and charge
    Robot(string givenName, float givenCharge) {
        cout << "\tA new robot appears!\n";
        name = givenName;
        charge = givenCharge;
        status();
    }

    void status() {
        cout << "Helloo, my name is " << name << ".\n";
        cout << "I have " << charge * 100 << "% batttery left.\n";
    }

    bool sleep() {
        charge += 0.2f;

        //clamp to ceiling
        if(charge > 1){ 
            charge = 1;
        } 

        this_thread::sleep_for(1s);

        cout << "\nAfter some recharging,\nmy battery level is now ";
        cout << charge * 100<< "%.\n";

        if(charge = 1) {
            cout << "Baymax is topped up!\n";
        }

    }

};  // don't fotget the semi-colon at the end of the class



int main() {
    cout << "Let's learn about Classes!\n";

    Robot rob;  // creating an instance of our class
    // use dot syntax tp access the data on the robot
    rob.name = "RB-1";
    rob.charge = .78f;

    cout << "We've just met " << rob.name << ".\n";
    rob.status();

    cout << "\nLet's make another robot!\n";
    Robot baymax("Baymax", 0.2f);

    while(baymax.charge < 1) {
    baymax.sleep();
    }


    return 0;
}