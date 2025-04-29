//********************************************************
//
// Assignment 5 - Functions (Call by Reference)
//
// Name: James Feeney
//
// Class: C Programming, Spring 2024
//
// Date: 2/22/2024
//
// Description: Program which determines overtime and 
// gross pay for a set of employees with outputs sent 
// to standard output (the screen).
//
// All functions called by reference
//
//******************************************************** 

#include <stdio.h> 

// constants
#define SIZE 5 
#define OVERTIME_RATE 1.5f 
#define STD_WORK_WEEK 40.0f 

// function prototypes
void getHours (long int clockNumber[], float hours[], int theSize);
void printHeader (void);
void printEmp (long int clockNumber[], float wageRate[], float hours[], float overtimeHrs[], float grossPay[], int theSize);
void calculateOvertimeHrs (float hours[], float overtimeHrs[], int theSize);
void calculateGrossPay (float wageRate[], float hours[], float overtimeHrs[], float grossPay[], int theSize);

int main() 
{ 

    // Variable Declarations

    long  int clockNumber[SIZE] = {98401,526488,765349,34645,127615}; // ID
    float grossPay[SIZE];     // gross pay
    float hours[SIZE];        // hours worked in a given week
    float overtimeHrs[SIZE];  // overtime hours
    float wageRate[SIZE] = {10.60,9.75,10.50,12.25,8.35}; // hourly wage rate
 

    // Read in the hours worked for each employee
    getHours (clockNumber, hours, SIZE); 

    // TODO: Function call to calculate overtime hours
    calculateOvertimeHrs (hours, overtimeHrs, SIZE);

    // TODO: Function call to calculate gross pay
    calculateGrossPay (wageRate, hours, overtimeHrs, grossPay, SIZE);

    // Print the initial table header
    printHeader ();

    // Function call to output results to the screen
    printEmp (clockNumber, wageRate, hours, overtimeHrs, grossPay, SIZE);

    return (0);

}  // main


//***************************************************************
//  Function: getHours  
// 
//  Purpose: Obtains input from user, the number of hours worked 
//  per employee and stores the results in an array that is 
//  passed back to the calling function by reference. 
// 
//  Parameters: 
//
//      clockNumber - Array of employee clock numbers for each employee
//      hours - Array of hours worked by each employee
//      theSize - Number of employees to process
// 
//  Returns: Nothing (call by reference)
//  
//**************************************************************

void getHours (long int clockNumber[], float hours[], int theSize)
{

    int i; // loop and array index

    // Read in hours for each employee
    for (i= 0; i < theSize; ++i)
    {
        printf("\nEnter hours worked by emp # %06li: ", clockNumber[i]);
        scanf ("%f", &hours[i]);
    }

} // getHours


//**************************************************************
// Function: calculateOvertimeHrs 
// 
// Purpose: Determine overtime based on hours worked
// 
// Parameters: 
//
//     hours - Array of number of hours worked by an employee
//     overtimeHrs - Array of overtime hours for each employee
//     theSize - Number of employees to process 
// 
// Returns: Overtime hours worked by each employee
//  
//**************************************************************

void calculateOvertimeHrs (float hours[], float overtimeHrs[], int theSize)
{
    int i; // loop and array index
  
    for (i = 0; i < theSize; ++i)
        {
            if (hours[i] >= STD_WORK_WEEK)
                {
                    overtimeHrs[i] = hours[i] - STD_WORK_WEEK;  // calculate overtime hours
                }
            else // no OT
                {
                    overtimeHrs[i] = 0;
                }
        } 
} // calculateOvertimeHrs


//**************************************************************
// Function: calculateGrossPay 
// 
// Purpose: Caluclates the gross pay for each employee. If statement used to determine if overtime is to be applied.
// 
// Parameters: 
//
//     wageRate - Array of employee wages per hour
//     hours - Array of number of hours worked by an employee
//     overtimeHrs - Array of overtime hours for each employee
//     grossPay - Array of gross pay calculations for each employee
//     theSize - Number of employees to process 
// 
// Returns: Gross pay per employee
//  
//**************************************************************

void calculateGrossPay (float wageRate[], float hours[], float overtimeHrs[], float grossPay[], int theSize)
{
  int i; // loop and array index

  for (i = 0; i < theSize; ++i)
      {
          if (hours[i] > STD_WORK_WEEK)
              {
                  grossPay[i] = (overtimeHrs[i] * wageRate[i] * OVERTIME_RATE) + (STD_WORK_WEEK * wageRate[i]);  // calculate overtime hours
              }
          else // no OT pay
              {
                  grossPay[i] = wageRate[i] * hours[i];
              }
      }
} // calculateGrossPay


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

    printf ("\n\n*** Pay Calculator ***\n");

    // print the table header
    printf("\n\n\t----------------------------------------------------------\n");
    printf("\tClock#\t\t  Wage\t\t Hours\t\t    OT\t\t Gross\n");
    printf("\t----------------------------------------------------------\n");

} // printHeader


//**************************************************************
// Function: printEmp 
// 
// Purpose: Prints out all the employee information in an
// orderly table format.
// 
// Parameters: 
//
//     clockNumber - Array of employee clock numbers
//     wageRate - Array of employee wages per hour
//     hours - Array of number of hours worked by an employee
//     overtimeHrs - Array of overtime hours for each employee
//     grossPay - Array of gross pay calculations for each employee
//     theSize - Number of employees to process 
// 
// Returns: Prints employee information to the screen
//  
//**************************************************************

void printEmp (long int clockNumber[], float wageRate[], float hours[], float overtimeHrs[], float grossPay[], int theSize)
{
    int i; // loop and array index

    // access and print each employee
    for (i = 0; i < theSize; ++i)
    {
        // TODO: add code to print out each employee one at a time
        printf("\t%06d  %10.2f  %10.1f  %10.1f  %10.2f\n", clockNumber[i], wageRate[i], hours[i], overtimeHrs[i], grossPay[i]);

    }
} //printEmp
