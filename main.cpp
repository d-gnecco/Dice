#include <stdio.h>
#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <string>
#include <math.h>
#include <unistd.h>
#include <time.h>
#include <stdlib.h>

using namespace std;

int main()
{
    cout << "*=/\\=/\\=/\\=*  +--------------------------------+  *=/\\=/\\=/\\=*" << endl;
    cout << "| || || || |   Type ENTER to roll or Q to quit.   | || || || |    " << endl;
    cout << "*=\\/=\\/=\\/=*  +--------------------------------+  *=\\/=\\/=\\/=*\n" << endl;
    
    string input;
    int die1, die2;
    int doubleCount = 0;
    bool doubless = false;
    bool doublesStreak = false;
    
    getline(cin, input);
    
    
    srand((unsigned) time(NULL));
    while((input != "Q" && input != "q") && doubleCount < 3)
    {
        for(int i = 1; i < 10; i++)
        {
            
            die1 = rand() % 6 + 1;
            die2 = rand() % 6 + 1;
            
            cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
            cout << "       Rolling .";
            if(i % 3 == 2)
            {
                cout << ".";
            }
            else if(i % 3 == 0)
            {
                cout << "..";
            }
            cout << endl;
            cout << "       ___    ___" << endl;
            cout << "      /   \\  /   \\" << endl;
            cout << "      | " << die1 << " |  | " << die2 << " |";
            cout << "\n      \\___/  \\___/\n\n\n" << endl;
            usleep(250 * 1000);
        }
        
        die1 = rand() % 6 + 1;
        die2 = rand() % 6 + 1;
        
        if((rand() % 4) == 0)
        {
            die2 = die1;
            cout << "!! SET !!";
        }

        if(die1 == die2)
        {
            doubleCount++;
        }
        else
        {
            doubleCount = 0;
        }
        
        cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
        cout << "         ______" << endl;
        cout << " -o=0=-</ ROLL \\>-=0=o-" << endl;
        cout << "-o=0=- < [ ";
        if(die1 + die2 < 10)
        {
            cout << "0";
        }
        cout << (die1 + die2) << " ] > -=0=o-" << endl;
        cout << "       ___    ___" << endl;
        cout << "      /   \\  /   \\" << endl;
        cout << "      | " << die1 << " |  | " << die2 << " |";
        if(die1 == die2)
        {
            cout << "     !!! DOUBLES !!! x" << doubleCount;
        }
        cout << "\n      \\___/  \\___/\n" << endl;
        if(doubleCount < 3)
        {
            cout << "Type ENTER to roll or Q to quit. \n" << endl;
            getline(cin, input);
        }
        else
        {
            cout << "You have been put in JAIL. Game over.";
        }
    }
}


