//********************************************************
//
// Assignment 11 - Object Oriented Design
//
// Name: James Feeney
//
// Class: C Programming, Spring 2024
//
// Date: 04/16/2024
//
// Description: An object oriented program design using
// C++ that will process our existing set of employees.
// It utilizes a class called Employee and generates an 
// array of objects that are used to store, calculate,
// and print out a simple report of inputted and calculated
// values.
//
//
// Object Oriented Design (using C++)
//
//********************************************************

#include <iomanip>   // std::setprecision, std::setw
#include <iostream>  // std::cout, std::fixed
#include <string>    // string functions

// define constants
#define EMP_SIZE 5
#define STD_HOURS 40.0
#define OT_RATE 1.5
#define MA_TAX_RATE 0.05
#define NH_TAX_RATE 0.0
#define VT_TAX_RATE 0.06
#define CA_TAX_RATE 0.07
#define DEFAULT_TAX_RATE 0.08
#define NAME_SIZE 20
#define TAX_STATE_SIZE 3
#define FED_TAX_RATE 0.25
#define FIRST_NAME_SIZE 10
#define LAST_NAME_SIZE 10

using namespace std;

// class Employee
class Employee
{
    private:

        // private data available only to member functions

        string firstName;     // Employee First Name
        string lastName;      // Employee Last Name
        string taxState;      // Employee Tax State
        int clockNumber;      // Employee Clock Number
        float wageRate;       // Hourly Wage Rate
        float hours;          // Hours worked in a week
        float overTimeHrs;    // Overtime Hours worked
        float grossPay;       // Weekly Gross Pay
        float stateTax;       // State Tax
        float fedTax;         // Fed Tax
        float netPay;         // Net Pay

        // private member function to calculate Overtime Hours
        float calcOverTimeHrs ( )
        {
            // Calculate the overtime hours for the week
            if (hours > STD_HOURS)
                overTimeHrs = hours - STD_HOURS;  // ot hours
            else
                overTimeHrs = 0;  // no ot hours

            // the calculated overtime hours
            return (overTimeHrs);

        } // calcOverTimeHrs

        // private member function to calculate Gross Pay
        float calcGrossPay ( )
        {
            // Process gross pay based on if there is overtime 
            if (overTimeHrs > 0)
            {
                // overtime
                grossPay = (STD_HOURS * wageRate) // normal pay 
                           + (overTimeHrs * (wageRate * OT_RATE)); // ot pay
            }
            else  // no overtime pay
            {
                grossPay = wageRate * hours;  // normal pay
            }

            // the calculated gross pay
            return (grossPay);

        } // calcGrossPay

        // private member function to calculate State Tax        
        float calcStateTax ()
        {

            float theStateTax; // calculated state tax

            theStateTax = grossPay;  // initialize to gross pay

            // calculate state tax based on where employee resides

            if (taxState.compare("MA") == 0)
                theStateTax *= MA_TAX_RATE;
            else if (taxState.compare("VT") == 0)
                theStateTax *= VT_TAX_RATE;
            else if (taxState.compare("NH") == 0)
                theStateTax *= NH_TAX_RATE;
            else if (taxState.compare("CA") == 0)
                theStateTax *= CA_TAX_RATE;
            else
                theStateTax *= DEFAULT_TAX_RATE;  // any other state

            // return the calculated state tax  
            return (theStateTax);

        } // calcStateTax

        // private member function to calculate Federal Tax
        float calcFedTax ()
        {

            float theFedTax; // The calculated Federal Tax

            // Federal Tax is the same for all regardless of state
            theFedTax = grossPay * FED_TAX_RATE;

            // return the calculated federal tax
            return (theFedTax);

        } // calcFedTax

        // private member function to calculate Net Pay
        float calcNetPay ()
        {

            float theNetPay;      // total take home pay (minus taxes)
            float theTotalTaxes;  // total taxes owed

            // calculate the total taxes owed
            theTotalTaxes = stateTax + fedTax;

            // calculate the net pay
            theNetPay = grossPay - theTotalTaxes;

            // return the calculated net pay
            return (theNetPay);

        } // calcNetPay

    public:

        // public member functions that can be called
        // to access private data member items

        // public no argument constructor with defaults
        Employee() {firstName=""; lastName=""; taxState=""; 
                    clockNumber=0; wageRate=0; hours=0;}

        // public constructor with arguments passed to it
        Employee (string myFirstName, string myLastName, string myTaxState, 
                  int myClockNumber, float myWageRate, float myHours);

        ~Employee();  // destructor

        // public getter function prototypes to retrieve private data
        string getFirstName();
        string getLastName();
        string getTaxState();
        int getClockNumber();
        float getWageRate();
        float getHours();
        float getOverTimeHrs();
        float getGrossPay();

        // TODO - DONE - Add public getter function prototype to retrieve stateTax
        float getStateTax();

        // TODO - DONE -  Add public getter function prototype to retrieve fedTax
        float getFedTax();

        // TODO - DONE - Add public getter function prototype to retrieve netPay
        float getNetPay();

        // member function prototype to print an Employee object
        void printEmployee(Employee e);  // passes an object

};  // class Employee

// constructor with arguments
Employee::Employee (string myFirstName, string myLastName, string myTaxState,
                    int myClockNumber, float myWageRate, float myHours)
{
    // initialize all member data items
    firstName = myFirstName;           // input
    lastName = myLastName;             // input

    // Convert myTaxState to uppercase if entered in lowercase
    if (std::islower(myTaxState[0]))
        myTaxState[0] = std::toupper(myTaxState[0]);
    if (std::islower(myTaxState[1]))
        myTaxState[1] = std::toupper(myTaxState[1]);

    taxState = myTaxState;             // input
    clockNumber = myClockNumber;       // input
    wageRate = myWageRate;             // input
    hours = myHours;                   // input
    overTimeHrs = calcOverTimeHrs();   // calculated overtime hours
    grossPay = calcGrossPay();         // calculated gross pay

    // TODO - DONE - set stateTax as the return from calcStateTax member function
    stateTax = calcStateTax();

    // TODO - DONE - set fedTax as the return from calcFedTax member function
    fedTax = calcFedTax();

    // TODO - DONE - set netPay as the return from calcNetPay member function
    netPay = calcNetPay();

} // Employee constructor

// Employee's destructor
Employee::~Employee()
{
    // nothing to print here, but could ...
}

// A "getter" function that will retrieve the First Name
string Employee::getFirstName() {
            return firstName;
}

// A "getter" function that will retrieve the employee Last Name
string Employee::getLastName() {
            return lastName;
}

// A "getter" function that will retrieve the employee Tax State
string Employee::getTaxState() {
            return taxState;
}

// A "getter" function that will retrieve the employee Clock Number
int Employee::getClockNumber() {
            return clockNumber;
}

// A "getter" function that will retrieve the employee Wage Rate
float Employee::getWageRate() {
            return wageRate;
}

// A "getter" function that will retrieve the employee Hours Worked
float Employee::getHours() {
            return hours;
}

// A "getter" function that will retrieve the employee Overtime Hours
float Employee::getOverTimeHrs() {
            return overTimeHrs;
}

// A "getter" function that will retrieve the employee Gross Pay
float Employee::getGrossPay() {
            return grossPay;
}

// TODO - DONE - Add a "getter" function that will retrieve the employee stateTax
float Employee::getStateTax() {
            return stateTax;
}

// TODO - DONE - Add a "getter" function that will retrieve the employee fedTax
float Employee::getFedTax() {
            return fedTax;
}

// TODO - DONE - Add a "getter" function that will retrieve the employee netPay
float Employee::getNetPay() {
            return netPay;
}


// a member function to print out the info in a given Employee object
void Employee::printEmployee(Employee e) {

    // Display the entered input on the Employee
    cout<<"\n\n *** Entered Details are *** \n";
    cout<<"\n First Name: "<< e.getFirstName();
    cout<<"\n Last Name: "<< e.getLastName();
    cout<<"\n Tax State: "<< e.getTaxState();
    cout <<"\n Clock Number: "<< e.getClockNumber();
    cout <<"\n Wage Rate: "<< e.getWageRate ();
    cout <<"\n Hours: "<< e.getHours ();

    // Display the calculated values of the Employee
    cout<<"\n\n *** Calculated Values are *** \n";

    // print out overtime hours based on the employee information entered
    cout <<"\n Overtime Hours : " <<  e.getOverTimeHrs();

    // print out gross pay based on the employee information entered
    cout <<"\n Gross Pay : $" <<  e.getGrossPay();

    // TODO - DONE - Add cout statement with call to stateTax getter function
    cout <<"\n State Tax : $" <<  e.getStateTax();

    // TODO - DONE - Add cout statement with call to fedTax getter function
    cout <<"\n Fed Tax : $" <<  e.getFedTax();

    // TODO - DONE - Add cout statement with call to netPay getter function
    cout <<"\n Net Pay : $" <<  e.getNetPay();

    // add a new line to separate the next employee
    cout <<"\n";

} // printEmployee

// main function to start the processing 
int main ()
{
  // local variables to collect user input

    string myFirstName;       // First Name to input
    string myLastName;        // Last Name to input
    string myTaxState;        // Tax State to input
    int myClockNumber;        // Clock Number to input
    float myWageRate;         // Wage Rate to input
    float myHours;            // Hours to input

    cout << fixed             // fix the number of decimal digits
         << setprecision(2);  // to 2

    // Array of Objects to store each of our employees
    Employee e[EMP_SIZE];

    // prompt for information to read in employee information
    for (int i = 0; i < EMP_SIZE; ++i)
    {
        // Enter Employee Information
        cout <<"\n\n Enter Employee First Name: ";
        cin>>myFirstName ;
        cout <<"\n Enter Employee Last Name: ";
        cin>>myLastName ;
        cout <<"\n Enter Employee Tax State: ";
        cin>>myTaxState ;
        cout<<"\n Enter Employee Clock Number: ";
        cin>>myClockNumber;
        cout <<"\n Enter Employee Hourly Wage Rate: ";
        cin>>myWageRate;
        cout <<"\n Enter Employee Hours Worked for the Week: ";
        cin>>myHours;

        // Call our constructor to create an employee object
        // using the input entered above.  The constructor
        // will also put into motion the execution of the 
        // various private member functions which will
        // calculate the overtime, gross pay, state tax, federal
        // tax, and net pay for the current employee.

        // The updated object will be returned and placed in the
        // the element of our array of objects named "e", using the index
        // of the current value of our loop index "i" ... thus: e[i]
        e[i] = {myFirstName, myLastName, myTaxState, 
                myClockNumber, myWageRate, myHours};

        // Call the printEmployee public member function to display all
        // the inputted and calculated values for the current employee
        e[i].printEmployee(e[i]);

    } // for

    return 0;

} // main