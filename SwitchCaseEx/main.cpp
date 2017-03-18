//
//  main.cpp
//  SwitchCaseEx
//
//  Created by Alicia Dale on 3/1/16.
//  Copyright © 2016 Alicia Dale. All rights reserved.
//

#include <iostream>
    //switch_statement1.cpp
#include <stdio.h>
using namespace std;

int main(int argc, const char * argv[]) {
    
        //Declare variables
    char grade = ' ';
    const int HOW_MANY_TESTS = 5;
    int totalTestScores = 0;
    double testScores = 0.0;
    double average = 0.0;
    
        //Prompt the user to enter value of all 5 tests added together
        //cout << "Enter total percentage of all test scores added together: " << endl;
    for (int test = 1; test <= 5; test ++)
    {
        cout << "Enter score for test " << test << ": \t";
        cin >> testScores;
        
            //ADD ALL THE SCORES TOGETHER
        
        totalTestScores += testScores;
    }
    
    cout << "Your total test scores are: " << totalTestScores << endl;
    

    
        //Calcualte average
    average = totalTestScores / HOW_MANY_TESTS;
    
    
    if (average >= 90)
    {
        cout << "Your percentage score is equivalent to the letter grade: ";
        grade = 'A';
        cout << grade << endl;
    }

    else if (average <= 80)
    {
        cout << "Your percentage score is equivalent to the letter grade: ";
        grade = 'B';
        cout <<  grade << endl;
        
    }
    
    else if (average <= 70)
    {
        cout << "Your percentage score is equivalent to the letter grade: ";
        grade = 'C';
        cout << grade << endl;
    }
    
    else if (average <= 60)
    {
        cout << "Your percentage score is equivalent to the letter grade: ";
        grade = 'D';
        cout << grade << endl;
    }
    
    else if (average <= 50)
    {
        cout << "Your percentage score is equivalent to the letter grade: ";
        grade = 'F';
        cout << grade << endl;
    }
    
        //Converts letter grade varialbe to uppercase
    grade = toupper(grade);
    
        switch (grade)
            {
                case 'A':
                cout << "Excellent!" << endl;
                break;
                
                case 'B':
                cout << "Almost to an A!, Try harder!" << endl;
                break;
                
                case 'C':
                cout << "Satisfactory" << endl;
                break;
                
                case 'D':
                cout << "Almost failing!:(" << endl;
                break;
                
                case 'F':
                cout<< "Failing" << endl;
                break;
                
            default:
                cout << "Invalid Grade" << endl;
          }
    
    
    cout<< "Your grade is: "<< grade << endl;
       return 0;
}
