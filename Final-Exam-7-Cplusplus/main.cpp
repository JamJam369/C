//********************************************************
//
// Question 7
//
// Name: James Feeney
//
// Class: C Programming, Spring 2024
//
// Date: 04/17/2024
//
// Description: Prints the smallest and largest value of a set of integers.
//
//********************************************************

class Math
{
private:

    int num1; // one of the numbers
    int num2; // another one
    int num3; // another one
    int num4; // another one
    int num5; // another one

public:

    Math (int first, int second, int third, int fourth, int fifth); // the class constructor

    int Largest (); // member to return the largest number
    int Smallest (); // member to return the smallest number

};


// definitions for the class member functions follow.
//
//
// The first member function is Math.  Its job is to initialize the data in the class
// to those values provided by whoever calls it.
//

Math::Math (int first, int second, int third, int fourth, int fifth)
{
    num1 = first;       // save the first int
    num2 = second ;     // save the second int
    num3 = third;       // save the third int
    num4 = fourth;      // save the fourth int
    num5 = fifth;       // save the fifth int

    return;
}

//
// The second member function is Largest.  It examines the data held by the
// class and returns the largest of the five data values.
//

int Math::Largest ()
{
    int answer;            // answer will be the largest we find

    answer = num1;         // assume the first is the largest

    if (num2 > answer)     // if the second number is larger
         answer = num2;    // then update the answer

    if (num3 > answer)     // now look at the third number
        answer = num3;     // update the answer if we found a greater one

    if (num4 > answer)     // now look at the fourth number
      answer = num4;       // update the answer if we found a greater one
  
    if (num5 > answer)     // now look at the fifth number
      answer = num5;       // update the answer if we found a greater one

    return answer;         // return the answer to the caller
}

//
// The third member function is Smallest.  It examines the data held by the
// class and returns the smallest of the five data values.
//

int Math::Smallest ()
{
    int answer;            // answer will be the smallest we find

    answer = num1;         // assume the first is the smallest

    if (num2 < answer)     // if the second number is smaller
         answer = num2;    // then update the answer

    if (num3 < answer)     // now look at the third number
        answer = num3;     // update the answer if we found a smaller one

    if (num4 < answer)     // now look at the fourth number
        answer = num4;     // update the answer if we found a smaller one

    if (num5 < answer)     // now look at the fifth number
        answer = num5;     // update the answer if we found a smaller one

    return answer;         // return the answer to the caller
}

//
//  Main to show it works

#include <iostream>
using namespace std;

int main ()
{
    // Three objects to hold the numbers using the user defined data type
    // ... The value for num1, num2, num3, num4, and num5 will get "constructed" with Object1
    // Object2, and Object3 thanks to our class member function Math

    Math Object1 (10, 20, 99, 50, 70);          // The object type is Math, the object is
                                                // called Object1

    Math Object2 (5, 10, 6, 15, 1);             // The object type is Math, the object is
                                                // called Object2

    Math Object3 (115, 183, 192, 200, 101);     // The object type is Math, the object is
                                                // called Object3

    int solution;    //declare a variable to hold the solution
    
    solution = Object1.Largest(); // call the Largest member function & return value to solution
    cout << "Largest Object 1 is  " << solution << endl; // print the Largest member function

    // Same for the second object
    solution = Object2.Largest();
    cout << "Largest Object 2 is  " << solution << endl;
  
    // Same for the third object
    solution = Object3.Largest();
    cout << "Largest Object 3 is  " << solution << endl;

    solution = Object1.Smallest(); // call the Smallest member function & return value to solution
    cout << "Smallest Object 1 is  " << solution << endl; // print the Smallest member function
  
    // Same for the second object
    solution = Object2.Smallest();
    cout << "Smallest Object 2 is  " << solution << endl;

    // Same for the third object
    solution = Object3.Smallest();
    cout << "Smallest Object 3 is  " << solution << endl;

    // all done, so return
    return 0;
}