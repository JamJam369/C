#include <stdio.h> 
#include <ctype.h>

// constants
#define SIZE 6

// function prototypes
int blackJackValue (char card1, char card2);


int main() 
{ 

    // Variable Declarations
    char inputCard1;
    char inputCard2;
    int score;

    // Prompt user for input
    printf("Input Card 1: ");
    scanf(" %c", &inputCard1);

    printf("Input Card 2: ");
    scanf(" %c", &inputCard2);

    inputCard1 = toupper(inputCard1);
    inputCard2 = toupper(inputCard2);


    //confirm to upper is working
    printf("\nCard 1: %c", inputCard1);
    printf("\nCard 2: %c", inputCard2);

    printf("\n\nThe score is: %i\n\n", blackJackValue (inputCard1, inputCard2)); // function


    return (0);

}  // main


//**************************************************************
// Function: blackJackValue 
// 
// Purpose: Find score of black jack hand
//        
// 
// Parameters: 
//
//     card 1 - Input of first card
//     card 2 - Input of second card
// 
// Returns: score of black jack hand
//  
//**************************************************************

int blackJackValue (char card1, char card2)
{
  
  // tally for total score
  int totalScore = 0;  

    // Test card 1
    // Test for double Ace

    if (card1 == 'A' && card2 == 'A')
        {   
            totalScore=12;
            return totalScore;
        }
    else if (card1 == 'A')
        {
            totalScore += 11;
        }
    else if (card1 == 'T' || card1 == 'J' || card1 == 'Q' || card1 == 'K')
        {
            totalScore += 10;
        }
    else if (card1 >= '2' && card1 <= '9')
        {
            totalScore += (card1 - '0');
        }
    else
        {
            printf("\n\n*** Would be invalid, %c is not a valid card\n", card1);
            return 0;
        }

    // Test card 2
    // No need to test for double Ace again, already tested for in card 1

    if (card2 == 'A')
        {
            totalScore += 11;
        }
    else if (card2 == 'T' || card2 == 'J' || card2 == 'Q' || card2 == 'K')
        {
            totalScore += 10;
        }
    else if (card2 >= '2' && card2 <= '9')
        {
            totalScore += (card2 - '0');
        }
    else
        {
        printf("\n*** Would be invalid, %c is not a valid card\n", card2);
        return 0;
        }

return totalScore;

} // blackJackValue