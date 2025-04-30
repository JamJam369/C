//******************************************************* 
// 
// Homework: 2
// 
// Name: James Feeney
// 
// Class: C Programming, Spring 2024
// 
// Date: 01/31/2024
// 
// Description: Program which determines gross pay
// and outputs are sent to standard output (the screen).
// 
// 
//******************************************************** 

#include <stdio.h>  
int main ( ) 
{ 

    int clockNumber;          // employee clock number
    float grossPay;           // gross pay for week (wage * hours)
    float hours;              // number of hours worked per week
    float wageRate;           // hourly wage
  
    // TODO - Add two variables, one for a loop index, another for a loop test
    int numberofemployees;    // number of employees to process
    int index;                // loop index





  
    printf ("*** Pay Calculator ***\n"); 


    // TODO - Add your prompt to capture how many employees to process
    printf ("\nEnter the number of employees: "); 
    scanf ("%d", &numberofemployees); 
  

    // TODO - Add a loop of your choice here (for, while, or do) to process each employee
    for (index = 1; index <= numberofemployees; index++)
    {

            
        // Prompt for input values from the screen
        printf ("\nEnter clock number for employee: "); 
        scanf ("%d", &clockNumber); 
        printf ("\nEnter hourly wage for employee: "); 
        scanf ("%f", &wageRate); 
        printf ("\nEnter the number of hours the employee worked: "); 
        scanf ("%f", &hours); 
    
        // calculate gross pay
        grossPay = wageRate * hours; 
    
        // print out employee information
        printf ("\n\n\t----------------------------------------------------------\n"); 
        printf ("\tEmployee #: %i\n",index); 
        printf ("\t----------------------------------------------------------\n"); 
        printf ("\tClock # Wage Hours Gross\n"); 
        printf ("\t----------------------------------------------------------\n"); 
    
        // print the data for the current employee
        printf ("\t%06i %5.2f %5.1f %7.2f\n",clockNumber, wageRate, hours, grossPay);
    
        
    } // TODO - end your loop here

    return (0); // success

} // main