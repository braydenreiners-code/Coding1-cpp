// this is a comment
//Brayden Reiners Coding 1 Fall 2026

#include <iostream> // for cout
#include <string>   // for string
using namespace std; // for cout

// the start of the program is 'int main()'
int main() {
    cout << "Hello world! I watched an anime that had that title.\n"; // \n for new line
    cout << "It started out pretty good but then it got very meta and sad.\n";
    cout << "what do you think?\n";

    // let's get user INPUT with cin (console-in)
    // we want to store what the user typed in a string variable
    string input;   // creat a new variable named "input"
    cin >> input;   //get input from the user
    cout << "You said " << input << ".\n"; // display their input
    cout << "all the sudden, a bomb fell from the sky.\n";
    // let's talk about varibles some more.
    int count = 10;

   
    // a while loop will keep running until it's condition is false
    //while 'count' is greater than zero... keep looping
    while(count > 0) {
        if(count % 2 == 0) {    // "if the remainer of count / 2 = 0"
        cout << "Hey! The bomb's timer is down to " << count << "\n";
        }
    else {  // this runs if the if statement is false
        cout << "Oh my gosh! It's gonna blow!\n";
    }
        

        count = count - 1;  // subtract 1 from count.
    }
    if (count = 0); { cout << "BOOOM!\n";}
} // the end of main()