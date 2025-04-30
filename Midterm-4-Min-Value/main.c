//********************************************************
//
// Midterm Testing - Question 4
//
// Name: James Feeney
//
// Class: C Programming, Spring 2024
//
// Date: 3/12/2024
//
// Description: Program which counts frequency of a specific number
//
//******************************************************** 

#include <stdio.h>

int main() 
{  
    int value1;
    int value2;
    int value3;
    int value4;

  printf ("Test for min of four #'s\n\n******\n"); 

  printf ("\nEnter number 1: "); 
  scanf("%d", &value1);
  printf ("\nEnter number 2: "); 
  scanf("%d", &value2);
  printf ("\nEnter number 3: "); 
  scanf("%d", &value3);
  printf ("\nEnter number 4: "); 
  scanf("%d", &value4);

  
int min4 = 
    (value1 < value2) && (value1 < value3) && (value1 < value4) ? value1 :
    ((value2 < value3) && (value2 < value4) ? value2 :
    (value3 < value4) ? value3 :
    value4);

  printf("min4 = %d", min4);




  
  
  return 0;

}
