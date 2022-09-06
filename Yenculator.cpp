#include <iostream>

using namespace std;

int main ()
{

    string NAME;
    char alp;

    // Lobby
    cout << "---------------------------------------------" << endl;
    cout << "Welcome to Yenculator! What is your name?" << endl;
    cout << "Enter your name : " << endl;
    cin >> NAME;

    cout << endl;

    cout << "----------------------------------------------" << endl;
    cout << "Okay," << NAME << "!" << endl;
    cout << "I am very smart!" << endl;
    cout << "I will help you with your math homework!" << endl;

    cout << endl;
    cout << "Enter any alphabet to continue : " << endl;
    cin >> alp;

    cout << endl;

    char Y;
    char sym;
    float ans1;
    float ans2;
    float equal;
    
     cout << "----------------------------------------------" << endl;
     cout << "This is the Yenculator Instruction." << endl;
     cout << "1. Put your first value on A." << endl;
     cout << "2. Choose a symbol (+,-,*,/)" << endl;
     cout << "3. Put your second value on B." << endl;
     cout << "4. Press 'Enter' after placing" << endl;
     cout << "   your second value to calculate" << endl;
     cout << endl;
     cout << "Example : " << endl;
     cout << "A : 1 " << endl;
     cout << "Symbol : + " << endl;
     cout << "B : 2 " << endl;
     cout << "Answer : 3" << endl;
     cout << "----------------------------------------------" << endl;
     
     cout << endl;
     cout << "Enter any alphabet to start. " << endl;
     cin >> Y;


     cout << endl;
     cout << " ------------" << endl;


     cout << "A : ";
     cin >> ans1;
     cout << endl;
     cout << "Symbol : ";
     cin >> sym;
     cout << endl;
     cout << "B : ";
     cin >> ans2; 
     cout << endl;

        if ( sym == '+' ) {
             equal = ans1 + ans2;
            cout << "Answer : " << equal << endl;
          } 
          else if ( sym == '-' ) {
             equal = ans1 - ans2;
            cout << "Answer : " << equal << endl;
          }
          else if ( sym == '*' ) {
             equal = ans1 * ans2;
            cout << "Answer : " << equal << endl;
          }   
          else if ( sym == '/' ) {
             equal = ans1 / ans2;
            cout << "Answer : " << equal << endl;
          }
          else {
            cout << "Oops! Error." << endl;
          }

         cout << endl;
         cout << "Thanks for using Yenculator!" << endl;
         cout << "Bye bye " << NAME << "!" << endl;
         cout << "Please come again later~" << endl;
         cout << endl;
     

 return 0;
 }