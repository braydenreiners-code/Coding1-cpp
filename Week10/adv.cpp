// Brayden Reiners Coding 1 Fall 2026
// Adventure 2.0

#include <iostream>
#include <string>
#include <cstdlib>      // c standard library for rand()
#include <ctime>        // c for srand(time(0))
using namespace std;    // comp sci says don't do this

// GLOBAL VARIABLES (accessible by any function)
int health = 10;
int totalGold = 0;
bool debug = true;      // set to false when shipping game


// DieRoll Complete
int DieRoll(int HighRoll = 6, int LowRoll = 1){
    return rand() % ((HighRoll - LowRoll) + 1) + LowRoll;
}

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
            cout << "Couldn't quite hear you. Please type 'y' or 'n'.\n";
        }
        
    }
}


void Encounter() {
    int playerRoll = DieRoll();
    int enemyRoll = DieRoll();
    string input = "";

    if(debug) {
        cout << "DEBUG playerRoll = " << playerRoll << "\n";
        cout <<  "DEBUG enemyRoll = " << enemyRoll << "\n";
    }

    cin >> input;

}

void Ending(){
    if(health = 0) {
        cout << "Ya dead son.\n";
    }
    if(health = 10) {
        cout << "Wow, you got out untouched!\n";
    }
    if(health <= 5) {
        cout << "Cutting it close there big guy.\n";
    }
}

int main(){
    // set up
    srand(time(0));     // seed the random number generator

    if (AskYN("You see a mysterious cave ahead. Would you like to explore it?")) {
        cout << "Alright, let's go!\n";
    }
    else {
        cout << "Oh, okay. bye I guess...\n" << break;
    }

    while(health > 0) {
        Encounter();

    }
    



    return 0;
}