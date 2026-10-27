//Brayden Reiners Fall 2026 Coding 1

#include <iostream>
#include <string>
#include <cstdlib>      // c standard library for rand()
#include <ctime>        // c for srand(time(0))
#include <chrono>
#include <thread>
using namespace std;

class alien {
public:

int limbCount;
bool canFly;
float threatLevel;
string homePlanet;
   
// Constructor
alien() {
    limbCount = rand() % 10 + 0;
    canFly = rand() % 2;
    threatLevel = rand() % 100 + 0;
    threatLevel = threatLevel * .01;
    // Do an array for homePlanet
    // homePlanet = rand()
}

void Contact() {
    cout << "Greetings Earthling, I have "<< limbCount << " limbs,\n";
    // cout <<
}

void Depart() {

}

};

int main() {
    srand(time(0));
    cout << "There's an alian infront of you.\n";

    alien ET;
    alien.Contact();
    alien.Depart();

}