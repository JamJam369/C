//********************************************************
//
// Midterm Testing - Area of Triangle
//
// Name: James Feeney
//
// Class: C Programming, Spring 2024
//
// Date: 3/11/2024
//
// Description: Program which calculates area of a triangle 
//
//******************************************************** 

#include <stdio.h>

// function prototypes
float calcAreaOfTriangle (float base, float height);

int main() 
{  
  float b;
  float h;
  
  printf ("\nEnter the base of the triangle: "); 
  scanf ("%f", &b); 
  
  printf ("\nEnter the height of the triangle: "); 
  scanf ("%f", &h); 
  
  printf ("\nArea of triangle: %.1f", calcAreaOfTriangle (b, h)); 
  
  return 0;
}

// **************************************************
// Function: calcAreaOfTriangle
//
// Description: Calculates the area of a triangle
//
//
// Parameters: base   - base of the triangle
//             height - height of the triangle
//
// Returns:    area - area of triangle
//
// ***************************************************

float calcAreaOfTriangle(float base, float height)
{

    float area; // calculate area
  
    area = (base*height) /2; // calculate area   
    return (area);

} //calcAreaOfTriangle