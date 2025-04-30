//********************************************************
//
// Midterm Testing - Question 6
//
// Name: James Feeney
//
// Class: C Programming, Spring 2024
//
// Date: 3/13/2024
//
// Description: Program which counts letter grades
//
//******************************************************** 

#include <stdio.h>

// Structure of the letter grades
 struct gradeStats 
{
       int total_A;
       int total_B;
       int total_C;
       int total_D;
       int total_F;
       int total_I;
};

// function prototypes
struct gradeStats frequencyOfLetterGrades(char grades[], int size);

int main() 
{  
    char gradesInput [] = {'A', 'b', 'C', 'x', 'D', 'c', 'F', 'B', 'Y', 'B', 'B', 'A', 'A', 'A'};
    
    int size = sizeof(gradesInput);
  
    struct gradeStats studentstats = frequencyOfLetterGrades(gradesInput, size);
  
    printf ("Total A:\t%i\n", studentstats.total_A);
    printf ("Total B:\t%i\n", studentstats.total_B);
    printf ("Total C:\t%i\n", studentstats.total_C);
    printf ("Total D:\t%i\n", studentstats.total_D);
    printf ("Total F:\t%i\n", studentstats.total_F);
    printf ("Total I:\t%i\n", studentstats.total_I);

  return 0;

}

// **************************************************
// Function: frequencyOfLetterGrades
//
// Description: function that is passed an array of characters 
// containing letter grades of exams and returns a structure that
// contains the total number of occurrences of each letter grade.
//
// Parameters:  char grades - array of grades
//              int size - size of the array
//           
//
// Returns: myStats - Grade stats within a structure
//
// ***************************************************

struct gradeStats frequencyOfLetterGrades(char grades[], int size)
{

    struct gradeStats myStats = {0,0,0,0,0,0};  // holds each of the grade counts
                                                // and initializes them to zero

    // Review each of the grades in the array
    for(int i = 0; i < size; i++)
    {
        // increments the frequency of the current character
        switch (grades[i])
          
        {
            case 'A': // Check for an A
                myStats.total_A++; // increments the frequency of the character
                break;
          
            case 'a': // Check for an a
                myStats.total_A++; // increments the frequency of the character
                break;
  
            case 'B': // Check for an B
                myStats.total_B++; // increments the frequency of the character
                break;

            case 'b': // Check for an b
                myStats.total_B++; // increments the frequency of the character
                break;
          
            case 'C': // Check for an C
                myStats.total_C++; // increments the frequency of the character
                break;

            case 'c': // Check for an c
                myStats.total_C++; // increments the frequency of the character
                break;
          
            case 'D': // Check for an D
                myStats.total_D++; // increments the frequency of the character
                break;

            case 'd': // Check for an d
                myStats.total_D++; // increments the frequency of the character
                break;
  
            case 'F': // Check for an F
                myStats.total_F++; // increments the frequency of the character
                break;

            case 'f': // Check for an f
                myStats.total_F++; // increments the frequency of the character
                break;
  
            default : // No valid grade letter is found
                myStats.total_I++; // increments the frequency of the character
                break;
          
        } // switch
    } // for

    return (myStats);

} // gradeStats