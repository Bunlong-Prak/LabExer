#include <iostream>                           // directive for input and output
using namespace std;                          // use standard namespace
int main()                                    // main function 

 {                                            // to open main function
    int x = 20;                               // declare variable
    cout<<"Enter the current temperature: ";  // print Enter the current temperature
    cin>>x;                                   // accept user input
    if (x > 40 and x <= 54)                   // asks the question,"does this > 40 and <= 54?"
    {                                         // to open statement
        cout<<"Stay hydrated!";               // print Stay hydrated!
    }                                         // to close statement
    else if (x>32 and x <= 40)                // asks the question,"does this > 32 and <= 40?"
    {                                         // to open statement
        cout<<"Stay Cool and Safe!";          // print Stay Cool and Safe!
    }                                         // to close statement
    else if (x > 26 and x <= 31)              // asks the question,"does this > 26 and <= 31?"
    {                                         // to open statement
        cout<<"Keep a sunblock handy!";       // print Keep a sunblock handy!
    }                                         // to close statement
    else if (x > 20 and x <= 25){             // asks the question,"does this > 20 and <= 26?"
        cout<<"Always keep your cool!";       // print Always keep your cool!
    }                                         // to close statement
    else{                                     // the block of code range below 20
        cout<<"Cool breeze in the air";       // print Cool breeze in the air
    }                                         // to close statement
    return 0;                                 // return to OS
}                                             // to close the main function
