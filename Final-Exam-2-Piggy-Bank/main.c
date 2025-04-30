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
// Calculate total value of piggy bank money.
//
//******************************************************** 

#include <stdio.h> 

// constants
#define SIZE 6

// function prototypes
float getSum (float typeValue[], int count[], float typeSum[], int theSize);
void printHeader (void);
void printPiggy (float typeValue[], int count[], float typeSum[], float piggyTotal, int theSize);


int main() 
{ 

    // Variable Declarations

    //char type[] = {Dollar,Half-Dollar,Quarter,Dime,Nickle,Pennie}; // Money Type
    float typeValue[SIZE] = {1,0.5,0.25,0.1,0.05,0.01}; // Value per unit of currency
    int count[SIZE] = {0,11,7,3,12,17}; // count of each type of currency
    float typeSum[SIZE] = {0,0,0,0,0,0}; // total value of each type of currency
    float piggyTotal = 0; // total value of all currency


    // Read in the hours worked for each employee
    piggyTotal = getSum (typeValue, count, typeSum, SIZE); 

    // Print the initial table header
    printHeader ();

    // Function call to output results to the screen
    printPiggy (typeValue, count, typeSum, piggyTotal, SIZE);
    

    return (0);

}  // main


//**************************************************************
// Function: getSum 
// 
// Purpose: Multiplies count and demonimation value
//          to get total money in piggy bank
// 
// Parameters: 
//
//     typeValue - Array of value of each type of currency 
//                 (dollar = 1.00, half-dollar = 0.50, etc.)
//     count - Array of the count of quarters, dimes, etc.
//     typeSum - Array of total value of each denomination (typeValue * count)
//     theSize - Number of denominations in the arrays
// 
// Returns: Total sum of all money in the piggy bank
//  
//**************************************************************

float getSum (float typeValue[], int count[], float typeSum[], int theSize)
{
  int i; // loop and array index
  float sum = 0; // initialize sum to 0

  for (i = 0; i < theSize; ++i)
      {
          typeSum[i] = typeValue[i] * count[i];  // calculate sum by currency
          sum += typeSum[i]; // running total
      }

      return sum;
  
} // getSum


//**************************************************************
// Function: printHeader
// 
// Purpose: Prints the initial table header information.
// 
// Parameters: none
// 
// Returns: void
//  
//**************************************************************

void printHeader (void) 
{ 

    printf ("\n\n*** Piggy Bank ***\n");

    // print the table header
    printf("\n\t-----------------------\n");
    printf("\tUnit     Count     Sum\n");
    printf("\t-----------------------\n");

} // printHeader


//**************************************************************
// Function: printPiggy 
// 
// Purpose: Prints out all piggy bank info
// 
// Returns: Piggy bank info
//  
//**************************************************************

void printPiggy (float typeValue[], int count[], float typeSum[], float piggyTotal, int theSize)
{
    int i; // loop and array index

    // access and print each employee
    for (i = 0; i < theSize; ++i)
    {
        printf("\t%4.2f     %5i    %5.2f\n", typeValue[i], count[i], typeSum[i]);
    }

  printf("\n\nPiggy Bank Total: $%.2f\n", piggyTotal);

  
} //printPiggy


