/*
Title: Chapter 3 Exercise 17 - Math Tutor Part A
File Name : Ch3Ex17_CSC221_Assignment
Programmer : Brion Blais
Date : 10 / 2024
Requirements :
    Write a program that can be used as a math tutor for a young student.
    The program should display two random numbers to be added, such as 247 + 129.
    The program should then pause while the student works on the problem.  When the student
    is ready to check their answer, he/she can press a key and the program will display the correct solution.
    
    Create a second branch that revises your code so that before the answer is displayed allow the user to enter an answer.
    Then display the correct answer and tell the student either "You are correct" or "Your answer is not correct."
*/


#include <iostream>
#include <random>
#include <iomanip>
using namespace std;


int main()
{
    random_device myNumbers;
    uniform_int_distribution<int> randomInt(1, 1000);
    
    int firstNumber = randomInt(myNumbers);
    int secondNumber = randomInt(myNumbers);
    
    cout << "Welcome to the math tutor!  Press enter to check your answer.\nHere is your first problem:\n" << endl;
    cout << right << "     " << setw(5) << firstNumber << endl;
    cout << right << "     " << "+" << setw(4) << secondNumber << endl;
    cout << "   -------";
    cin.get();
    cout << right << "    " << setw(6) << firstNumber + secondNumber << endl;
    cout << "Run the program again for a new problem.";

}