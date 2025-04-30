//********************************************************
//
// Final Exam - Question 6
//
// Name: James Feeney
//
// Class: C Programming, Spring 2024
//
// Date: 4/21/2024
//
// Description: 
//
// 6) Write a function definition that will return in a structure the 
// following characteristics of a given string:
//
// a. the length of the string
// b. number of upper case characters 
// c. number of lower case characters 
// d. number of digits
// e. number of blank spaces
// f. number of non-alphanumeric characters.
//
//******************************************************** 

#include <stdio.h>
#include <string.h>

// Define a structure to hold the counts
struct stringStats 
{
    int length;
    int upperCaseCount;
    int lowerCaseCount;
    int digitCount;
    int spaceCount;
    int specialCount;
};

// Function prototype
struct stringStats count(char* inputString);

int main()
{
    char inputString[100];

    printf("Please enter a string: "); 
    scanf(" %[^\n]", inputString); 

    // Call the count function and store the result in a structure
    struct stringStats result = count(inputString);

    // Print the results
    printf("Length of the string: %i\n", result.length); // a. the length of the string
    printf("Upper case characters: %i\n", result.upperCaseCount); // b. number of upper case characters 
    printf("Lower case characters: %i\n", result.lowerCaseCount); // c. number of lower case characters 
    printf("Digits: %i\n", result.digitCount); // d. number of digits
    printf("Blank spaces: %i\n", result.spaceCount); // e. number of blank spaces
    printf("Non-alphanumeric characters: %i\n", result.specialCount); // f. number of non-alphanumeric characters

    return 0;
}
//**************************************************************
// Function: count 
// 
// Purpose: Answer the following questions:
// a. the length of the string
// b. number of upper case characters 
// c. number of lower case characters 
// d. number of digits
// e. number of blank spaces
// f. number of non-alphanumeric characters.   
// 
// Parameters: 
//
//     inputString - The string of characters to be analyzed
// 
// Returns: Return the structure containing the counts
//  
//**************************************************************

struct stringStats count(char* inputString)
{
    struct stringStats counts = {0,0,0,0,0,0}; // Initialize all counts to 0

    counts.length = strlen(inputString); // Calculate the length of the string

    // Count the characters in the string
    for (int i = 0; i < counts.length; i++)
    {
        if (inputString[i] >= 'A' && inputString[i] <= 'Z')
            counts.upperCaseCount++;
        else if (inputString[i] >= 'a' && inputString[i] <= 'z')
            counts.lowerCaseCount++;
        else if (inputString[i] >= '0' && inputString[i] <= '9')
            counts.digitCount++;
        else if (inputString[i] == ' ')
            counts.spaceCount++;
        else
            counts.specialCount++;
    }

    return counts; // Return the structure containing the counts
}








