//Brayden Reiners Fall 2026 Coding 1

#include <iostream>
#include <string>
#include <cstdlib>      // c standard library for rand()
#include <ctime>        // c for srand(time(0))
#include <chrono>
#include <thread>
using namespace std;

bool AskYN(string question = "Delve Deeper?") {

    string input;
    while(true) {
        cout << question << " (y/n)\n";
        getline(cin, input);

        if(input == "y") {
            return true;
        }
        else if(input == "n") {
            return false;
        }
        else {
            cout << "Couldn't quite hear you... I'm gonna assume you said yes!\n";
        }
        
    }
}



class alien {
public:

int limbCount;
bool canFly;
string Fly;
float threatLevel;
string homePlanet = "Fluffy Bluff Galaxy";
int waitTime = 0;
   
// Constructor
alien() {
    limbCount = rand() % 10 + 2;
    canFly = rand() % 2;

    if(canFly = 0) {
        Fly = "can";
    }
    else {
        Fly = "can not";
    }

    threatLevel = rand() % 100 + 0;
}

void Contact() {
    cout << "There's an alian infront of you.\n";
    cout << "Greetings Earthling, I have "<< limbCount << " limbs.\n\n";
}

void Scan() {
    while(waitTime < 2) {
        cout << ".";
        this_thread::sleep_for(1s);  
        waitTime += 1; 
    }
    cout << ".";
    this_thread::sleep_for(1s);  

    cout << "This alien has a threat level of " << threatLevel << "\n";
    cout << "This alien " << Fly << " fly.\n";
}

void Depart() {
    cout << "\nWell, goodbye Earthling, I must return to my home planet, "<< homePlanet << ".\nFair well!\n";

    while(waitTime < 4) {
        cout << ".";
        this_thread::sleep_for(1s);  
        waitTime += 1; 
    }
    cout << ".";
    this_thread::sleep_for(1s);

    cout << "\nThe alien has left.\n";
}

};

int main() {
    srand(time(0));

    alien ET;
    ET.Contact();
    
    if (AskYN("Do you want to scan the alien?")) {
        cout << "Scanning";
        ET.Scan();
    }
    else {
        cout << "You're right, it's kinda rude to scan without asking.\n";
    }

    ET.Depart();


    return 0;
}