// Brayden Reiners Coding 1 Fall 2026
// Functions

#include <iostream>
#include <string>
#include <vector>       // the easy to use array.
using namespace std;

// delaring and defining a function
void SayHello() {
    cout << "Hello!\n";
}

// declaring and defining a function
// this time with input parameters
void Say(string something) {
    cout << something << endl; //end line
}

void SpaceSay(string something) {
    for(int i = 0; i < something.size(); i++) {
        cout << something[i] << " ";
    }
    cout << endl;       // end Line
}

// Declaring and defining a function
// thing one has two inputs and returns an int
int Add(int numA, int numB) {
    return numA + numB;
}

bool AskYN(string question = "Keep playing?") {

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
            cout << "Invalid input. Please type 'y' or 'n'.\n";
        }
        
    }
}

// die roll function

void DisplayVector(vector<string> vec) {
    // cout << "The first element in vec is "<< vec[0] << ".\n";

    for(int i = 0; i < vec.size(); i++) {
        Say(vec[i]);
    }
}

int Triple( int numA){ 
    return numA * 3;
}

int main() {
    cout << "Finally, functions!!\n";

    cout << "What is 5 tripled?\n" << Triple(5) << endl;

    // calling the function
    SayHello();
    Say("What's up buddy?");
    Say("Not much, you?");
    SpaceSay("PEAK");

    cout << "2 + 5 = " << Add(2, 5) << endl;
    cout << "345 + -344 = " << Add(345, -344) << endl;

    if(AskYN()) {
        Say("Let's start another round of the game!\n");
    }
    else {
        Say("Thanks for playing!\n");
    }

    if(AskYN("Do you like green eggs and ham?")) {
        Say("THAT'S WEIRD! YOU ARE WEIRD!!\n");
    }
    else {
        Say("Yeah, that makes sense.\n");
    }


    //--------------------------------------
    vector<string> names = {"Finn", "Jake", "Marceline", "Simon"};
    DisplayVector(names);


    return 0;
}