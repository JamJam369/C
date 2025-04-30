//********************************************************
//
// Midterm Testing - Question 3
//
// Name: James Feeney
//
// Class: C Programming, Spring 2024
//
// Date: 3/12/2024
//
// Description: Program which counts frequency of a specific number
//
//******************************************************** 

#include <stdio.h>

// Size of the array
#define SIZE 8

// function prototypes
int max5 (int value1, int value2, int value3, int value4, int value5);

int main() 
{  
  int theArray [SIZE] = {5, 7, 23, 8, 23, 67, 23, 10}; 
  
  int number1;
  int number2;
  int number3;
  int number4;
  int number5;

  printf ("Test for max of five #'s\n\n******\n"); 
  
  printf ("\nEnter number 1: "); 
  scanf("%d", &number1);
  printf ("\nEnter number 2: "); 
  scanf("%d", &number2);
  printf ("\nEnter number 3: "); 
  scanf("%d", &number3);
  printf ("\nEnter number 4: "); 
  scanf("%d", &number4);
  printf ("\nEnter number 5: "); 
  scanf("%d", &number5);

  printf ("\n%d is the max", max5(number1, number2, number3, number4, number5));
  
  return 0;

}



// **************************************************
// Function: max5
//
// Description: tests values 1, 2, 3, 4, 5 to find the max
//
// Parameters: value 1 - integer to test for max
//             value 2 - integer to test for max
//             value 3 - integer to test for max
//             value 4 - integer to test for max
//             value 5 - integer to test for max
//
// Returns:    theMax - return the max value 
//
// ***************************************************

int max5 (int value1, int value2, int value3, int value4, int value5)
{
    int theMax; //the max value
// Test 1  
        if (value1 > value2 && value1 > value3 && value1 > value4 && value1 > value5)
        {    
            theMax = value1;
        }
// Test 2          
        else if (value2 > value3 && value2 > value4 && value2 > value5)
        {    
            theMax = value2;
        }
// Test 3 
        else if (value3 > value4 && value3 > value5)
        {    
            theMax = value3;
        }
// Test 4 
        else if (value4 > value5)
        {    
            theMax = value4;
        }
// 5 is the only one left
        else
        {    
            theMax = value5;
        }

    return theMax; // return theMax

} // end max5