//*******************************************************
//
// Assignment 4 - Arrays
//
// Name: James Feeney
//
// Class: C Programming, Spring 2024
//
// Date: 2/12/2024
//
// Description: Program which determines overtime and 
// gross pay for a set of employees with outputs sent 
// to standard output (the screen).
//
//********************************************************

#include <stdio.h>

// constants to use
#define SIZE 5           // number of employees to process
#define STD_HOURS 40.0   // normal work week hours before overtime
#define OT_RATE 1.5      // time and half overtime setting

int main()
{


    // Declare variables needed for the program
    // Recommend an array for clock, wage, hours,
    // ... and overtime hours and gross.
    // Recommend arrays also for normal pay and overtime pay                
    // It is OK to pre-fill clock and wage values ... or you can prompt for them

    // unique employee identifier
    long int clockNumber [SIZE] = {98401, 526488, 765349, 34645, 127615};
    
    // hourly pay for each employee
    float wageRate [SIZE] = {10.6, 9.75, 10.5, 12.25, 8.35}; 
  
    float grossPay [SIZE];     // weekly gross pay - normal pay + overtime pay         
    float hours [SIZE];        // hours worked in a given week
    int i;                     // loop and array index
    float normalPay [SIZE];    // normal weekly pay without any overtime
    float overtimeHrs[SIZE];   // overtime hours worked in a given week
    float overtimePay [SIZE];  // overtime pay for a given week

    

    printf ("\n*** Pay Calculator ***\n\n");

    // Process each employee one at a time
    for (i = 0; i < SIZE; i++)
    {

        // TODO - Prompt and Read in hours worked for employee
        printf("\nEnter number of hours worked for employee %i: ", clockNumber [i]);
        scanf("%f", &hours[i]);

        // Calculate overtime and gross pay for employee
        if (hours[i] >= STD_HOURS)
        {
            overtimeHrs[i] = hours[i] - STD_HOURS;
            // TODO: Calculate arrays normalPay and overtimePay with overtime

            normalPay[i] = wageRate[i] * STD_HOURS; // Calculate the normal pay
            overtimePay[i] = overtimeHrs[i] * wageRate[i] * OT_RATE; // Calcualte the overtime pay

        }
        else // no OT
        {
            overtimeHrs[i] = 0;
            // TODO: Calculate arrays normalPay and overtimePay without overtime
            normalPay[i] = wageRate[i] * hours[i]; // Pay if no overtime
            overtimePay[i] = 0;
        }

        // Calculate Gross Pay
        grossPay[i] = normalPay[i] + overtimePay[i];
    }

  // TODO: Print a nice table header
  printf("\n\n\t----------------------------------------------------------\n");
  printf("\tClock#\t\tWage\t\tHours\t\tOT\t\tGross\n");
  printf("\t----------------------------------------------------------\n");

    // Now that we have all the information in our arrays, we can
    // Access each employee and print to screen or file
    for (i = 0; i < SIZE; i++)
    {
        // TODO: Print employee information from your arrays
        printf("\t%06d\t\t%1.2f\t\t%1.1f\t\t%1.1f\t\t%1.2f\n", clockNumber[i], wageRate[i], hours[i], overtimeHrs[i], grossPay[i]);
    }

    return(0);
}