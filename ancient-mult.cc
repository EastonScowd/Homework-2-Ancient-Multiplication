/*
 *        File: ancient-mult.cc
 *      Author: Easton Scowden
 *        Date: 09/24/2019
 * Description: Ask the user to enter 2 positive integers in which it will display the product by the process ancient multiplication.
 * Then ask if the user if they want to enter two more numbers or end the program. 
 */ 

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

//function prototypes

int main(int argc, char const *argv[]) {
    
    int firstInt ; 
    int secondInt ; 
    
    int firstIntHolder ; // I'm using these two holders so I can display the original numbers instead of the manipulated ones when I print the total line
    int secondIntHolder ; 
    

    char yesNo = 'y' ; // declaring as y so the do statement runs right away 
    do{
        int total  = 0 ;
        do{
            cout << "Enter two positive integers(int int): " ;
            cin >> firstInt ; // declares the two integer variables
            cin >> secondInt ; 
            firstIntHolder = firstInt ; // declaring holders to original numbers inputted
            secondIntHolder = secondInt ; 
        } while (firstInt < 0 || secondInt < 0) ; // if either number is negative it will ask you again to enter two new numbers

        do {
            if(secondInt%2 != 0){ // testing to see if number is negative(will not have remainder of 0 when divided by two) or positive using modulo
                total = total + firstInt ;  // if number is negative it will add the corresponding integer to the total
            }
            firstInt = firstInt * 2 ; 
            secondInt = secondInt / 2 ; 
        } while (secondInt > 0) ; // this will keep going until the number you are dividing is less than 0 

        cout << firstIntHolder << " times " << secondIntHolder << " is equal to " << total << endl << endl ; // prints the total line
        cout << "Would you like to enter two more integers(y/n)? " ; // ask the user if they want to enter another set of two numbers
        cin >> yesNo ; 

    }while(yesNo == 'y') ; // if user enters y it will then restart the program, if n it will break the program

    cout << "Okay thanks for using the program!" ;
    return 0;
}// main