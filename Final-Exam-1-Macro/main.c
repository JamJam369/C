//********************************************************
//
// Question 1 - Macros
//
// Name: James Feeney
//
// Class: C Programming, Spring 2024
//
// Date: 04/18/2024
//
// Description: Answer the following questions...
//
// a. Calculate the Area of a Circle (using the Radius)
// b. Calculate the Area of the Circle (using the Diameter)
// c. Calculate the Circumference of a Circle (using the Diameter) 
// d. Calculate the Circumference of a Circle (using the Radius) 
// e. Calculate the Diameter of a Circle using the Radius
// f. Calculate the Diameter of a Circle using the Circumference
//
// Tip: You can find circle formulas and detailed explanations at:
//
// https://www.mathsisfun.com/geometry/circle.html
// https://www.wikihow.com/Calculate-the-Diameter-of-a-Circle
// https://www.wikihow.com/Calculate-the-Circumference-of-a-Circle
//
//********************************************************

// define constants
#define PI 3.14159

// define macros
#define AREA_OF_CIRCLE_USING_RADIUS(r) (PI * (r) * (r))
#define AREA_OF_CIRCLE_USING_DIAMETER(d) (PI * ((d) / 2) * ((d) / 2))
#define CIRCUMFERENCE_OF_CIRCLE_USING_DIAMETER(d) (PI * (d))
#define CIRCUMFERENCE_OF_CIRCLE_USING_RADIUS(r) (2 * PI * (r))
#define DIAMETER_OF_CIRCLE_USING_RADIUS(r) ((r) * 2)
#define DIAMETER_OF_CIRCLE_USING_CIRCUMFERENCE(c) ((c) / PI)

#include <stdio.h>

int main(void) {

  float radius; // radius of circle
  float diameter; // diameter of circle
  float circumference; // circumference of circle
  
  printf("Input Radius: ");
  scanf("%f", &radius);
  printf("AREA_OF_CIRCLE_USING_RADIUS: %f\n", AREA_OF_CIRCLE_USING_RADIUS(radius));
  printf("CIRCUMFERENCE_OF_CIRCLE_USING_RADIUS: %f\n", CIRCUMFERENCE_OF_CIRCLE_USING_RADIUS(radius));
  printf("DIAMETER_OF_CIRCLE_USING_RADIUS: %f\n", DIAMETER_OF_CIRCLE_USING_RADIUS(radius));
  
  printf("\n");
  
  printf("Input Diameter: ");
  scanf("%f", &diameter);
  printf("AREA_OF_CIRCLE_USING_DIAMETER: %f\n", AREA_OF_CIRCLE_USING_DIAMETER(diameter));
  printf("CIRCUMFERENCE_OF_CIRCLE_USING_DIAMETER: %f\n", CIRCUMFERENCE_OF_CIRCLE_USING_DIAMETER(diameter));
  
  printf("\n");
  
  printf("Input Circumference: ");
  scanf("%f", &circumference);
  printf("DIAMETER_OF_CIRCLE_USING_CIRCUMFERENCE: %f\n", DIAMETER_OF_CIRCLE_USING_CIRCUMFERENCE(circumference));

  
    
  return 0;
}