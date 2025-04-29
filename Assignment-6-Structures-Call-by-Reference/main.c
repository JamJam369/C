//********************************************************
//
// Assignment 6 - Structures
//
// Name: James Feeney
//
// Class: C Programming, Spring 2024
//
// Date: 02/29/2024
//
// Description: Program which determines overtime and 
// gross pay for a set of employees with outputs sent 
// to standard output (the screen).
//
// Call by reference design
//
//********************************************************

// Define and Includes

#include <stdio.h>

// Define Constants
#define SIZE 5
#define STD_HOURS 40.0
#define OT_RATE 1.5

// Define a global structure to pass employee data between functions
// Note that the structure type is global, but you don't want a variable
// of that type to be global. Best to declare a variable of that type
// in a function like main or another function and pass as needed.

struct employee
{
    long clockNumber;
    float wageRate;
    float hours;
    float overtimeHrs;
    float grossPay;
};

// define prototypes here for each function except main

void getHours (struct employee employeeData[], int theSize);
void calculateOT (struct employee employeeData[], int theSize);
void calculateGross (struct employee employeeData[], int theSize);
void printHeader (void);
void printEmp (struct employee emp [ ], int theSize);

// TODO: add your function prototypes here

int main ()
{
    // Set up a local variable and initialize the clock and wages of my employees
    struct employee employeeData [SIZE] = {
        { 98401, 10.60 },
        { 526488, 9.75 },
        { 765349, 10.50 },
        { 34645, 12.25 },
        { 127615, 8.35 }
    };

    // Call function needed to read hours
    getHours (employeeData, SIZE);

    // TODO: Call functions calculate ot hours and gross pay
    calculateOT (employeeData, SIZE);

    // TODO: Call function to calculate gross pay
    calculateGross (employeeData, SIZE);

    // Print a table header
    printHeader();

    // Function call to output results to the screen in table format
    printEmp (employeeData, SIZE);

    return(0); // success

} // main

//**************************************************************
// Function: getHours 
// 
// Purpose: Obtains input from user, the number of hours worked 
// per employee and stores the result in an array of structures
// that is passed back to the calling function by reference. 
// 
// Parameters:
// 
//     employeeData - an array of structures containing Employees
//     theSize - number of employees to process
//
// Returns: Nothing (void)
//  
//**************************************************************

void getHours (struct employee employeeData[], int theSize) 
{

    int i; // loop and array index

    // read hours in for each employee
    for (i = 0; i < theSize ; ++i)
    {
        printf("\nEnter hours worked by emp # %06li: ", employeeData[i].clockNumber);
        scanf ("%f", &employeeData[i].hours);
    } // for

} // getHours




//**************************************************************
// Function: calculateOT
// 
// Purpose: Determine overtime based on hours worked
// 
// Parameters: 
//
//     employeeData - an array of structures containing Employees
//     theSize - Number of employees to process 
// 
// Returns: Overtime hours worked by each employee
//  
//**************************************************************

void calculateOT (struct employee employeeData[], int theSize)
{
  
    int i; // loop and array index

    for (i = 0; i < theSize; ++i)
        {
            if (employeeData[i].hours >= STD_HOURS)
                {
                  employeeData[i].overtimeHrs = employeeData[i].hours - STD_HOURS;  // calculate overtime hours
                }
            else // no OT
                {
                    employeeData[i].overtimeHrs = 0;
                }
        } 
       
} // calculateOT




//**************************************************************
// Function: calculateGross
// 
// Purpose: Caluclates the gross pay for each employee. If statement used to determine if overtime is to be applied.
// 
// Parameters: 
//
//     employeeData - an array of structures containing Employees
//     theSize - number of employees to process
// 
// Returns: Gross pay per employee
//  
//**************************************************************

void calculateGross (struct employee employeeData[], int theSize)
{
  
  int i; // loop and array index

  for (i = 0; i < theSize; ++i)
      {
          if (employeeData[i].hours > STD_HOURS)
              {
                employeeData[i].grossPay = (employeeData[i].overtimeHrs * employeeData[i].wageRate * OT_RATE) + (STD_HOURS * employeeData[i].wageRate);  // calculate overtime hours
              }
          else // no OT pay
              {
                employeeData[i].grossPay = employeeData[i].wageRate * employeeData[i].hours;
              }
      }
     
} // calulateGross




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




// ********************************************************************
// Function: printEmp
//
// Purpose: Outputs to screen in a table format the following
// information about an employee: Clock, Wage,
// Hours, Overtime Hours, and Gross Pay.
//
// Parameters:
//
//     employeeData - an array of structures containing Employees
//     theSize - number of employees to process
//
// Returns: Nothing (void)
//
// *********************************************************************

void printEmp ( struct employee employeeData[], int theSize )
{
    int i; // loop and array index

    // print information about each employee
    for (i = 0; i < theSize ; ++i)
    {
        printf("\t%06d  %10.2f  %10.1f  %10.1f  %10.2f\n",
        employeeData[i].clockNumber, employeeData[i].wageRate, employeeData[i].hours,
        employeeData[i].overtimeHrs, employeeData[i].grossPay);
    } /* for */

} // printEmp