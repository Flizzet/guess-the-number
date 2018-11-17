//
//  main.cpp
//  GuessTheNumber
//
//  Created by Flizzet on 4/9/17.
//  Copyright © 2017 Flizzet. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

/* Prompts the user to guess a number, the user wins when they guess "4" */
void guessNumber() {
    string numberGuessed;
    int intNumberGuessed = 0;
    
    do {
        /* Tell the user to guess */
        cout << "Guess between 1 and 10: ";
        
        /* Gets user input */
        getline(cin, numberGuessed);
        
        /* stoi converts a string so an int */
        intNumberGuessed = stoi(numberGuessed);
        
        
    } while(intNumberGuessed != 4);
    
    cout << "You win!" << endl;
}


int main() {
    guessNumber();
    
    return 0;
}
