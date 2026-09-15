// Brayden Reiners Coding 1 Fall 2026
// Adventure Program

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
    srand(time(0));

    // pseudocode
    //what do we wanna do?
    // setup
        // player health
        int playerHealth = 10;
        // total treasure
        int totalTreasure = 1;
        // player dice roll
        int playerDiceRoll = 0;
        // enemy dice roll
        int enemyDiceRoll = 0;
        // player input
        string input;
    // greet the player
     cout << "Hello player!\n";
    // start the game loop
    while(playerHealth > 0) {
        // ask if they want to go adventuring
        cout << "would you like to go adventuring? \n";
        // get input
        cin >> input;

        // if they DONT, Say goodbye then end program
        if(input == "no") {
            cout << "Alright, Bye!\n";
            break;      // this gets us out of a loop
        }
        else if(input == "yes") {
            cout << "I like your enthusiasm! Let's go! \n";
        }
        else {      // else is a 'catch-all' case
            cout << "I don't understand, but let's go anyway!\n";
        }
        // if they DO, start an encounter
        // roll dice for player
        playerDiceRoll = rand() % 6 + 1;
        // roll dice for enemy
        enemyDiceRoll = rand() % 6 + 1;
        // if player roll is equal or higher
            // roll for gold amount and give to player
        if(playerDiceRoll >= enemyDiceRoll) {
            totalTreasure += rand() % 10 +1;
            cout << "You won! You now have " <<totalTreasure << " gold!\n";
        }
        // else
            // subtract enemy roll from play
        else {
            playerHealth -= enemyDiceRoll;
            cout << "Ouch! You lost! You only have " << playerHealth << " health remaining.\n";
        }

    }// end of while(playerHealth < 0)
    
    if(playerHealth > 0) {
        cout << "Congratualtions on returning home with " << totalTreasure << " gold.\n";
    }
    else if (playerHealth > 0) {
        cout << "you need to see a doctor. You can afford it with your " << totalTreasure << " gold.\n";
    }   
    else {
        cout << "You have died." <<totalTreasure << " lies next to your cold body.\n";
    }
        
        // if player is still alive
            // keep loop
        // else
            // tell player how much gold they lost
    // end loop

    return 0;
} // end of entire program