//********************************************************
//
// Question 3 - Functions (Fahrenheit to degrees Celsius)
//
// Name: James Feeney
//
// Class: C Programming, Spring 2024
//
// Date: 4/19/2024
//
// Description: One macro and one function for converting
//
//******************************************************** 

#include <stdio.h> 

// constants

// marcos
#define CONVERT_TO_FAHRENHEIT(c) ((c) * (9/5) + 32.0)

// function prototypes
float convertToCelsius (float FahrenheitValue);

int main() 
{ 

    // Variable Declarations

    float fahrenheitInput; // to be used in function
    float celsiusInput;   // to be used in macro

    // statements

    
    printf("Part A - Input F: ");
    scanf("%f", &fahrenheitInput);
    printf("In Celsius: %f\n\n", convertToCelsius(fahrenheitInput)); // function

    printf("Part B - Input C: ");
    scanf("%f", &celsiusInput);
    printf("In Fahrenheit: %f\n", CONVERT_TO_FAHRENHEIT(celsiusInput)); // macro
    
  

    

return 0;

}  // main


//***************************************************************
//  Function: convertToCelsius  
// 
//  Purpose: Convert fahrenheit to Celsius
// 
//  Parameters: 
//
//      FahrenheitValue - Input value of fahrenheit degree
//      result - output value of celsius degree
// 
//  Returns: float fahrenheit value
//  
//**************************************************************

float convertToCelsius (float FahrenheitValue)
{

    float result; // result
    result = (FahrenheitValue - 32) * 5 / 9; // formula to convert fahrenheit to celsius

return result;
  
} // convertToCelsius

