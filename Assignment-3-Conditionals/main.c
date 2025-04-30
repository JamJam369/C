//*******************************************************
//
// Assignment 3 - Conditionals
//
// Name: James Feeney
//
// Class: C Programming, Spring 2024
//
// Date: 02/09/2024
//
// Description: Program which determines overtime and
// gross pay for a set of employees with outputs sent
// to standard output (the screen).
//
//********************************************************

#include <stdio.h>

// Declare constants
#define STD_HOURS 40.0
#define NUM_EMPLOYEES 5
#define OT_RATE 1.5

int main() {

  int clockNumber; // Employee clock number
  float grossPay; // The weekly gross pay which is the normalPay + any overtimePay
  float hours;  // Total hours worked in a week
  float normalPay;   // Standard weekly normal pay without overtime
  float overtimeHrs; // Any hours worked past the normal scheduled work week
  float overtimePay; // Additional overtime pay for any overtime hours worked
  float wageRate;    // Hourly wage for an employee

  printf("\n*** Pay Calculator ***");

  // Process each employee
  for (int i = 1; i <= NUM_EMPLOYEES; i++) {

    // Prompt the user for the clock number
    printf("\n\nEnter clock number: ");
    scanf("%d", &clockNumber);



    // Prompt the user for the number of hours worked
    printf("\nEnter number of hours worked: ");
    scanf("%f", &hours);

    // Calculate the overtime hours, normal pay, and overtime pay
    if (hours > STD_HOURS) {
      normalPay = wageRate * STD_HOURS; // Calculate the normal pay
      overtimeHrs = hours - STD_HOURS;  // Calculate the overtime hours
      overtimePay = overtimeHrs * wageRate * OT_RATE; // Calcualte the overtime pay
    } else {
      normalPay = wageRate * hours; // Pay if no overtime
      overtimeHrs = 0;
      overtimePay = 0;
    }

    // Calculate the gross pay with normal pay and any additional overtime pay
    grossPay = normalPay + overtimePay;

    // Print out information on the current employee
    // Optional TODO:  Feel free to also print out normalPay and overtimePay
    printf("\n\n\t----------------------------------------------------------\n");
    printf("\tEmployee #: %i\n", i);
    printf("\t----------------------------------------------------------\n");
    printf("\tClock#\t\tWage\t\tHours\t\tOT\t\tGross\n");
    printf("\t----------------------------------------------------------\n");
    printf("\t%06d\t\t%1.2f\t\t%1.1f\t\t%1.1f\t\t%1.2f\n", clockNumber, wageRate, hours, overtimeHrs, grossPay);
  }

  return 0;
}