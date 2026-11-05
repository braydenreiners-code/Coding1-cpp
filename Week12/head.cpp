// Brayden Reiners Coding 1 Fall 2026
// Headers

#include "robot.hpp"
#include "adv.hpp"
#include <iostream>
#include <string>
using namespace std;

int main() {
    setup();
    robot artoo;
    artoo.status();

    robot baymax("Baymax", dieRoll());
    baymax.status();


    // creating a vecor of places
    vector<string> places;
    places.push_back("Rome");
    places.push_back("London");
    places.push_back("Belize");

    cout << "Someday I want to go to ";
    cout << randomElement(places) << ".\n";

    vector<robot> bots;
    for(int i = 0; i < 10; i++) {
        bots.push_back(robot(randomElement(places), dieRoll()));
    }

    cout << "Let's talk to ... ";
    randomElement(bots).status();

    return 0;
}