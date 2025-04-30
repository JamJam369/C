//********************************************************
//
// Midterm Testing - Question 8
//
// Name: James Feeney
//
// Class: C Programming, Spring 2024
//
// Date: 3/13/2024
//
// Description: Sum, Min, Average of an array of numbers
//
//******************************************************** 

#include <stdio.h>

// function prototypes
float arraySum(int theArray[], int size);
float arrayAvg(int theArray[], int size);
float arrayMin(int theArray[], int size);

int main() 
{  
    int arrayNumbers[] = {5,4,3,2,2,100,1};
  
    int arraySize = (sizeof arrayNumbers) / (sizeof arrayNumbers[0]);

    printf ("Data in Array\n*************\n");

    for(int i = 0; i < arraySize; i++)
        {
        printf ("Address %i : %i\n", i, arrayNumbers[i]);
        } // end for
    
    printf( "\nSum of Array: %.2f\n", arraySum(arrayNumbers, arraySize));
    printf( "Average of Array: %.2f\n", arrayAvg(arrayNumbers, arraySize));
    printf( "Minimum of Array: %.2f\n", arrayMin(arrayNumbers, arraySize));
  
  return 0;

}


// **************************************************
// Function: arraySum
//
// Description: finds the sum of the array
//
// Parameters: theArray - values contained within the array
//             size - size of the array
//
// Returns:    Result - the resulting sum
//
// ***************************************************

float arraySum(int theArray[], int size)
{
    float result; // declate local variable result
    result = 0; // initialize result
  
    for(int i = 0; i < size; i++)
        {
        result = result + theArray[i]; // sum the array
        }
  
    return result; // return resulting sum
  
} // end arraySum





// **************************************************
// Function: arrayAvg
//
// Description: finds the average of the array
//
// Parameters: theArray - values contained within the array
//             size - size of the array
//
// Returns:    Result - the resulting average
//
// ***************************************************

float arrayAvg(int theArray[], int size)
{
    float result; // declate local variable result
    result = 0; // initialize result

    for(int i = 0; i < size; i++)
        {
        result = result + theArray[i]; // sum the array
        }

    result = result / size; // average = the array sum / size 
    return result; // return resulting average

} // end arrayAvg





// **************************************************
// Function: arrayMin
//
// Description: finds the minimum of the array
//
// Parameters: theArray - values contained within the array
//             size - size of the array
//
// Returns:    Result - the resulting minimum
//
// ***************************************************

float arrayMin(int theArray[], int size)
{
    float result; // declate local variable result
    result = theArray[0]; // initialize result to the first value of the array

    for(int i = 0; i < size; i++)
        {
        if(theArray[i] < result) // if the array element is less than result
            {
            result = theArray[i]; // if array value is lower, update to new minimum
            }
        }
    return result; // return resulting minimum

} // end arrayMin