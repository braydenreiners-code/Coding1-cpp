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
int totalEncounter = 0;
bool debug = false;      // set to false when shipping game


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
            cout << "Couldn't quite hear you... I'm gonna assume you said yes!\n";
        }
        
    }
}


void Encounter() {
    while(health >= 1) {
        int playerRoll = DieRoll();
        int enemyRoll = DieRoll();
        string input = "";

        if(playerRoll >= enemyRoll) {
                totalGold += (rand() % 10 +1) + totalEncounter;
                cout << "You won! You now have " <<totalGold << " gold!\n";
            }
            // else
                // subtract enemy roll from play
            else {
                health -= enemyRoll + totalEncounter - playerRoll;
                cout << "Ouch! You lost! You only have " << health << " health remaining.\n";
            }
    
        totalEncounter += 1;
        
        if(debug) {
            cout << "DEBUG playerRoll = " << playerRoll << "\n";
            cout <<  "DEBUG enemyRoll = " << enemyRoll << "\n";

            }

        if(health <= 0) {
            break;
        }

        if (AskYN("Want to journey deeper?")){
            cout << "Let's keep going!\n";
            }
            else {
                break;
            }
        }

}

void Ending(){
    if(health > 9) {
        cout << "Congratualtions on returning home with " << totalGold << " gold.\n";
    }
    else if (health < 10, health > 0) {
        cout << "Your back is broken but now you can afford a doctor with your " << totalGold << " gold.\n";
    }   
    else {
        cout << "Ya dead son. Your " <<totalGold << " gold lies next to your cold body ripe for the taking.\n";
    }
}

int main(){
    // set up
    srand(time(0));     // seed the random number generator

    if (AskYN("You see a mysterious cave ahead. Would you like to explore it?")) {
        cout << "Alright, let's go!\n";
    }
    else {
        cout << "Oh, okay. bye I guess...\nI hope you don't get stuck by lighting...\n(You got struck by lighting and died)\n";
        return 0;
    }
    
    Encounter();
        
    Ending();

    return 0;
}