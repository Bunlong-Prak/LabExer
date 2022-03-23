// written by Bunlong Prak
// this program will compile all laboratory activities
#include <iostream>
#include <math.h>
using namespace std;
void clear()
{
    system("cls");
}

int main()
{
    int cases, select;
    char chars, key;
    string nameyou;
    bool prime = true;
    int A = 0, B = 0, C = 0, D = 0, F = 0;
again:
    cout << " MAIN MENU Select Laboratory Activity" << endl;
    cout << " [1] On Arithmetic Operators Sum, Product, and Average" << endl;
    cout << " [2] On Arithmetic Operators Area and Circumference of a Circle, and Temperature " << endl;
    cout << " [3] Control Structure Print name based on Odd or Even " << endl;
    cout << " [4] Control Structure Range Message " << endl;
    cout << " [5] Control Structure Prime or Composite " << endl;
    cout << " [6] Control Structure A List of exam scores " << endl;
    cout << " [7] Control Structure Conditionals with switch" << endl;
    cout << " [X] Exit" << endl;
    cout << " Your choice ";
    cin >> cases || cin >> chars;
    if (chars == 'x' || chars == 'X')
    {
        cout << "Thank you for using Lord Seakmeng's program!....";
    }
    else if (cases)
    {
        switch (cases)
        {
        case 1:
            cout << "\nThis is a program to calculate the sum, average, and product" << endl;
            cout << "Press any key to continue..." << endl;
            cin >> key;
            clear();
            int n1, n2, n3;

            cout << "Enter the first number: ";
            cin >> n1;
            cout << "Enter the second number: ";
            cin >> n2;
            cout << "Enter the third number: ";
            cin >> n3;

            int sum, average, product;
            sum = n1 + n2 + n3;
            average = sum / 3;
            product = n1 * n2 * n3;

            cout << "The sum of " << n1 << ", " << n2 << ", and " << n3 << " is " << sum << "." << endl;
            cout << "The average of " << n1 << ", " << n2 << ", and " << n3 << " is " << average << "." << endl;
            cout << "The product of " << n1 << ", " << n2 << ", and " << n3 << " is " << product << "." << endl;
            goto again;
        case 2:
            cout << "There are 2 problems for lab activity 2!" << endl;
            cout << "Select programs" << endl;
            cout << "[1] Circumference and Area" << endl;
            cout << "[2] Temperature Conversion" << endl;
            cout << "[Any number besides 1 and 2] Go back to the main menu" << endl;
            cin >> select;

            switch (select)
            {
            case 1:
                cout << "\nThis is a program to calculate the Circumference and Area" << endl;
                cout << "Press any key to continue..." << endl;
                cin >> key;
                clear();
                double pi, a, c, r;
                pi = 3.14159265;
                cout << "Enter radius: ";
                cin >> r;
                a = pi * pow(r, 2);
                c = 2 * pi * r;
                cout << "The area of the circle is: " << a << endl;
                cout << "The circumference of the circle is: " << c << endl;
                goto again;
            case 2:
                cout << "\nThis is a program to convert Temperature" << endl;
                cout << "Press any key to continue..." << endl;
                cin >> key;
                clear();
                float cel, kel, fah;
                cout << "Enter degrees in Celsius: ";
                cin >> cel;
                kel = cel + 273.15;
                fah = (cel * 9 / 5) + 32;
                cout << "The value of " << cel << " degrees C in K is: " << kel << endl;
                cout << "The value of " << cel << " degrees C in F is: " << fah << endl;
                goto again;
            }
        case 3:
            cout << "\nThis is a program to print name 5 or 10 times based on user's age" << endl;
            cout << "Press any key to continue..." << endl;
            cin >> key;
            clear();
            int age;
            cout << "Enter age: ";
            cin >> age;
            cout << "Enter name: ";
            cin >> nameyou;

            if (age % 2 == 0)
            {
                for (int i = 0; i < 10; i++)
                {
                    cout << nameyou << endl;
                }
                goto again;
            }
            else
            {
                for (int i = 0; i < 5; i++)
                {
                    cout << nameyou << endl;
                }
                goto again;
            }
        case 4:
            cout << "\nThis is a program display message based on temperature" << endl;
            cout << "Press any key to continue..." << endl;
            cin >> key;
            clear();
            int x;
            cout << "Enter Temperature: ";
            cin >> x;

            if (cin.fail())
            {
                cout << "Invalid input!";
            }
            else if (x < 20)
            {
                cout << "Cool breeze in the air!";
                goto again;
            }
            else if (x >= 20 && x <= 25)
            {
                cout << "Always keep your cool!";
                goto again;
            }
            else if (x >= 26 && x <= 31)
            {
                cout << "Keep a sunblock handy1";
                goto again;
            }
            else if (x >= 32 && x <= 40)
            {
                cout << "Stay cool and safe!";
                goto again;
            }
            else if (x >= 41 && x <= 54)
            {
                cout << "Stay hydrated!";
                goto again;
            }
            else
            {
                cout << "Out of range!";
                goto again;
            }
        case 5:
            cout << "\nThis is a program calculate prime and composite number, it also show the factors of composite" << endl;
            cout << "Press any key to continue..." << endl;
            cin >> key;
            clear();
            int number;
        primevalue:
            cout << "Enter a number to check prime or composite number: ";
            cin >> number;

            for (int i = 2; i <= number / 2; i++)
            {
                if (number % i == 0)
                    prime = false;
            } // end of block mentioned above.

            if (number < 0)
            {
                cout << "Enter a valid number!" << endl;
                goto primevalue;
            }
            else if (number == 0 || number == 1)
            {
                cout << number << " is neither prime or composite" << endl;
                goto again;
            }
            else if (prime)
            {
                cout << number << " is prime number" << endl;
                goto again;
            }
            else if (!prime)
            {
                cout << number << " is composite number" << endl;
                cout << "The factors of " << number << " is: ";
                for (int j = 1; j <= number; j++)
                {
                    if (number % j == 0)
                        cout << j << " ";
                }
                goto again;
            }
        case 6:
            cout << "\nThis is a program to display total of grades entered by user" << endl;
            cout << "Press any key to continue..." << endl;
            cin >> key;
            clear();
            int score, totalscore;
            for (;;)
            {
                cout << "Enter Exam Scores: ";
                cin >> score;
                if (score < 0 || cin.fail())
                {
                    break;
                }
                else if (score >= 0 && score <= 59)
                {
                    F += 1;
                }
                else if (score >= 60 && score <= 69)
                {
                    D += 1;
                }
                else if (score >= 70 && score <= 79)
                {
                    C += 1;
                }
                else if (score >= 80 && score <= 89)
                {
                    B += 1;
                }
                else if (score >= 90 && score <= 100)
                {
                    A += 1;
                }
                else if (score > 100)
                {
                    cout << "Invalid input, Please try again!" << endl;
                }
            }
            totalscore = A + B + C + D + F;
            cout << "Number of A's:" << A << endl;
            cout << "Number of B's:" << B << endl;
            cout << "Number of C's:" << C << endl;
            cout << "Number of D's:" << D << endl;
            cout << "Number of F's:" << F << endl;
            cout << "Total Number of Scores: " << totalscore << endl;
            goto again;
        case 7:
            cout << "\nThis is a program  for user to choose a program to run" << endl;
            cout << "Press any key to continue..." << endl;
            cin >> key;
            clear();
            goto again;
        }
    }
    return 0;
}