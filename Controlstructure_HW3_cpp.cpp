//written by Bunlong Prak
#include <iostream>                // directive for input and output
using namespace std;               // use standard namespace
int main()                         // main function

{                                  // to open main function block
    int age;                       // declace variable
    string name;                   // declace variable

    cout<<"Enter age ";            // print Enter age
    cin>>age;                      // accept user input
    cout<<"Enter name ";           // print Enter name
    cin>>name;                     // accept user input

   if (age %2==0)                  // Asks the question, "does this an even number?"
      for (int i =0; i < 10;i++){  // print 10 times if it is an even number
       cout<< name << endl;        // accept user input and store in name
   }                               // to close main function block
   else                            // to specify a block of code to be executed, if the same condition is false
   for(int i=0;i <5;i++)       {   // print 5 times if it is not an even number
       cout<< name << endl;        // accept user input and store in name
   }                               // to close the main function block

    return 0;                      // return 0 to the OS
}                                  // to close the main function block