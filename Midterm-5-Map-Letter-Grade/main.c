//********************************************************
//
// Midterm Testing - Question 5
//
// Name: James Feeney
//
// Class: C Programming, Spring 2024
//
// Date: 3/13/2024
//
// Description: Program which counts frequency of a specific number
//
//******************************************************** 

#include <stdio.h>

// function prototypes
char calcLetterGrade (float score);

int main() 
{  
    
    float inputgrade;
  
    printf ("Grade to Letter Grade\n*********************\n\n"); 
    printf ("Score \t\t Grade\n"); 
    printf ("----- \t\t -----\n"); 
    printf ("90-100 \t\t A\n"); 
    printf ("80-89 \t\t B\n"); 
    printf ("70-79 \t\t C\n"); 
    printf ("60-69 \t\t D\n"); 
    printf ("0-59 \t\t F\n"); 
    printf ("Other \t\t I\n"); 

    printf ("\nPlease enter score: "); 
    scanf("%f", &inputgrade);

    printf ("\nConverted to letter grade: %c\n", calcLetterGrade(inputgrade));


  return 0;

}

// **************************************************
// Function: calcLetterGrade
//
// Description: Converts number score to char grade
//
// Parameters: score - number score
//
// Returns: result - the corresponding letter grade
//
// ***************************************************

char calcLetterGrade (float score)
{
    char result; //the corresponding letter value

// Check if A
    if (score >= 90 && score <= 100)
    {
        result = 'A';
    }
// Check if B
    else if (score >= 80 && score < 90)
    {
        result = 'B';
    }
// Check if C
    else if (score >= 70 && score < 80)
    {
        result = 'C';  
    }
// Check if D
    else if (score >= 60 && score < 70)
    {
        result = 'D';
    }
// Check if F
    else if (score >= 0 && score < 60)
    {
        result = 'F';
    }
// All other possibilities
    else
    {    
        result = 'I';
    }

return result;

} // end calcLetterGrade