//Written by Bunlong Prak
//CS125 to check grade
#include <iostream>                                                                // directive for input and output streams
using namespace std;                                                              // using standard namespace
int main()                                                                       // main function
{                                                                               // open main function
    int i,num,count_A = 0,count_B = 0 , count_C = 0, count_D =0, count_F = 0;  // declare variable
        cout<< " Enter Exam Scores: ";                                        // print Enter Exam Scores
        do{                                                                  // execute the code block once, before checking if the condition is true
            cin>> num;                                                      // get number input from user
            if(num<0){                                                     // number must be over 0
                break;                                                    // jump out
            }                                                            // close statement
            else if(num>100){                                           // number must be less than 100
                cout<<" number "<<num << " is invalid input" << endl;  // print number is invalid
            }                                                         // close statement   
            else if(num>=90 && num<=100){                            // number between 90 and 100
                count_A++;                                          // print grade A
            }                                                      // close statement
            else if(num>=80 && num<=89){                          // number between 80 and 89
                count_B++;                                       // print grade B
            }                                                   // close statement
            else if(num>=70 && num<=79){                       // number between 70 and 79
                count_C++;                                    // print grade C
            }                                                // close statement    
            else if(num>=60 && num<=69){                    // number between 60 and 69
                count_D++;                                 // print grade D
            }                                             // close statement    
            else                                         // if not
                count_F++;                              // print grade F
            i++;                                       // increment
        }while(i<=20);                                // code block to be executed
        cout<< " Number of A's : "<< count_A << endl;                             //print Number of A's
        cout<< " Number of B's : "<< count_B << endl;                            //print Number of B's
        cout<< " Number of C's : "<< count_C << endl;                           //print Number of C's
        cout<< " Number of D's : "<< count_D << endl;                          //print Number of D's
        cout<< " Number of F's : "<< count_F << endl;                         //print Number of F's
        cout<< " Total Number of Scores : "<< count_A + count_B + count_C + count_D + count_F << endl; //print Total Number of Scores
        return 0;                                                                                     // return os
        }                                                                                            // close main function