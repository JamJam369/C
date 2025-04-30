//********************************************************
//
// Midterm Testing - Question 2
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
int frequencyCounter (int theArray[], int n, int x);

int main() 
{  
  int theArray [SIZE] = {5, 7, 23, 8, 23, 67, 23, 10}; 
  
  int elementCheck;
  int lookupTo;

  printf ("See the below Array\n\n******\n", theArray[0]); 
  printf ("\ntheArray: %d", theArray[0]); 
  printf ("\ntheArray: %d", theArray[1]); 
  printf ("\ntheArray: %d", theArray[2]); 
  printf ("\ntheArray: %d", theArray[3]); 
  printf ("\ntheArray: %d", theArray[4]); 
  printf ("\ntheArray: %d", theArray[5]); 
  printf ("\ntheArray: %d", theArray[6]); 
  printf ("\ntheArray: %d", theArray[7]); 

  printf ("\n\nNumber to look for: "); 
  scanf ("%d", &elementCheck); 

  printf ("How deep into the Array do you want to look: "); 
  scanf ("%d", &lookupTo); 

  printf ("\n%d has been found %d times", elementCheck, frequencyCounter(theArray, lookupTo, elementCheck));
  
  return 0;
  
}



// **************************************************
// Function: frequencyCounter
//
// Description: counts the number of times the item x appears among the first n elements of theArray
// and returns that count as the frequency of x in theArray
//
//
// Parameters: theArray - Array of integers
//             n - number of elements in the array to check first
//             x - element to check for
//
// Returns:    frequency - how many times n is found
//
// ***************************************************

int frequencyCounter (int theArray[], int n, int x)
{
    int frequency; // how many times x is found
    int i; // index

    frequency = 0; // initialize count

    
    for (i = 0; i < n; i++) // loop through every element in theArray
    {
        if (theArray[i] == x) // check if element in theArray is equal to x
        {
          frequency++;
        } // if
      
    } // for

  return frequency; // return the frequency count
  
} // frequencyCounter