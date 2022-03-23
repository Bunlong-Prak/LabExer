//Written by Bunlong Prak
//CS125 check prime or composite number
#include <iostream>                                                                    // directive for input and output streams
using namespace std;                                                                  // using standard namespace
int main()                                                                           // main function
{                                                                                   // open main function
    int number = 0;                                                                // declare variable
    bool is_prime = true;                                                         // give boolean prime equal true to check prime or composite number 
    cout << "Enter a number to check prime or composite number: ";               // print "Enter a number to check prime or composite number: "
    cin >> number;                                                              // get number input from user
 //to check prime or composite number 
    for (int i = 2; i <= number/2 ; i++){                                               
        if ( number % i == 0)                    
        is_prime = false;
        }                                                                   // end of block mentioned above.
        if (number < 1){                                                   // number must be less than 1
            cout << "Number must be over 1!";                             // print Number must be over 1!
        } else if (number == 0 || number == 1){                          // else if number equal 0 or equal 1
            cout << number <<" is neither prime or composite" << endl;  // print number that is nor a prime nor a composite
        } else if (is_prime){                                          // else if it's prime number
            cout << number <<" is prime number" << endl;              // print number which is prime number
        } else if (!is_prime){                                       // else if,if it is not prime number
            cout << number <<" is composite number" << endl;        // print number which is composite number
            cout << "The factors of " << number << " is: ";        // find factors of composite number    
                for (int j = 1; j <= number; j++) {               // this loop will compare if j less than number, increment j by 1
                    if (number % j == 0)                         // if number / j == 0
                        cout << j << " ";                       // print j value
                }                                              // close statement
        } 
              
    return 0;                                                // reture os
}                                                           // close main funtion block