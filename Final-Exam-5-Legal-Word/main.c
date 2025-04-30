//********************************************************
//
// Final Exam - Question 2
//
// Name: James Feeney
//
// Class: C Programming, Spring 2024
//
// Date: 4/19/2024
//
// Description: 
//    5) Write a function to determine is a given word is legal. A word 
//       is illegal if it contains no vowels. For this problem, the letter Y 
//       is considered to be a legal vowel. Pass in a word to this //function 
//       and it will determine if the word is legal or not. You can make the 
//       following assumptions about the word you a passing to this function.
//
//       1) The string being passed is a combination of letters only (no non-letter check needed)
//       2) The string being passed is null terminated
//       3) Letters may be capital or lower case and it has no effect on whether its a word
//
//        Examples:   
//
//              sch  - is illegal, no vowels            
//              apple - legal, contains a vowel 
//              APPle - legal, uppercase letter combinations do not matter          
//              try - legal, no vowel, but contains the letter 'y' 
//
//******************************************************** 

#include <stdio.h>
#include <ctype.h>
#include <string.h>

// constants

// function prototypes
void isLegal (char theString[]);


int main() 
{ 
    
    // Variable Declarations
    char theString[20];

  
    // Prompt user for input
    printf("Input word: ");
    scanf("%s", &theString);

    isLegal(theString);
    

    return (0);

}  // main


//**************************************************************
// Function: isLegal 
// 
// Purpose: Determine if a given word is legal.
//        
// 
// Parameters: 
//
//     theString - Input of the word to be checked
// 
// Returns: "The word is legal" or "The word is not legal".
//  
//**************************************************************

void isLegal (char theString[])    /* function prototype to get started, or better yet, use pointers */
{
int i;
    int stringLength;
    //int legalCount = 0;
    int isLegalWord = 0; // Flag variable to track if the word is legal

    stringLength = strlen(theString); // calculate the length of the string

    for (i = 0; i < stringLength; i++) // loop
        {
        switch (theString[i]) 
            {
            case 'A':
            case 'a':
            case 'E':
            case 'e':
            case 'I':
            case 'i':
            case 'O':
            case 'o':
            case 'U':
            case 'u':
            case 'Y':
            case 'y':
                isLegalWord = 1; // Set the flag to indicate the word is legal
                break; // Exit the switch statement

            default:
                break; // Exit the switch statement
              
        } // switch

        if (isLegalWord) 
        {
            break; // Break out of the loop once a legal letter is found
        } // if
          
    } // for

    if (isLegalWord) 
    {
        printf("\nThe word is legal");
    } // if
      
    else 
    {
        printf("\nThe word is illegal");
    } // else

    return 0;
}

