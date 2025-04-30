//********************************************************
//
// Midterm Testing - Question 9
//
// Name: James Feeney
//
// Class: C Programming, Spring 2024
//
// Date: 3/14/2024
//
// Description: A program to keep track of its officer info
//
//******************************************************** 

#include <stdio.h>

// Define Constants
#define SIZE 2

// Define Structures
struct name // Name of the officer
{
    char suffix[10]; 
    char firstName[30];
    char middleName[30];
    char lastName[30];
};

struct dob // Date of birth of the officer
{
    int monthNumber;
    int dayNumber;
    int yearNumber;
    char month[10];
};

struct address // Adress of the officer
{
    int houseNumber;
    char street[50];
    char city[50];
    char state[50];
    char zipCode[20];
    char planet[50];
};

struct lastPromotionDate // Last date of promotion of the officer
{
    int monthNumber;
    int dayNumber;
    int yearNumber;
    char month[10];
};

struct starfleetGraduationDate // Starfleet graduation date of the officer
{
    int monthNumber;
    int dayNumber;
    int yearNumber;
    char month[10];
};

struct officer // Officer info
{
    struct name sName;
    struct dob sDOB;
    struct address sAddress;
    char rank[30];
    struct lastPromotionDate sLastPromotionDate;
    char ship[100];
    char nickName[30];
    char starfleetID[50];
    float hourlyPay;
    char favoriteSaying[100];
    float startingStardate;
    char martialStatus[30];
    struct starfleetGraduationDate sStarfleetGraduationDate;
};



// Function Prototypes
void printHeader (void);
void printOfficerData (struct officer officerData [], int theSize);

int main() 
{  
    // Set up a local variable and initialize the first 2 officers data
    struct officer officerData [SIZE] =
            {
                {          
                    {"","","",""}, // sName - suffix, firstName, middleName, lastName
                    {0,0,0,""}, // sDOB - month, day, year, letter month
                    {0,"","","","",""}, // sAddress - houseNumber, street, city, state, zipCode, planet
                    "", // rank
                    {0,0,0,""}, // sLastPromotionDate  
                    "", // ship
                    "", // nickName
                    "", // starfleetID
                    0.0, // hourlyPay
                    "", // favoriteSaying  
                    0.0, // startingStardate
                    "", // martialStatus
                    {0,0,0,""} // sStarfleetGraduationDate - month, day, year, letter month
                },
                {
                    {"","","",""}, // sName - suffix, firstName, middleName, lastName
                    {0,0,0,""}, // sDOB - month, day, year, letter month
                    {0,"","","","",""}, // sAddress - houseNumber, street, city, state, zipCode, planet
                    "", // rank
                    {0,0,0,""}, // sLastPromotionDate  
                    "", // ship
                    "", // nickName
                    "", // starfleetID
                    0.0, // hourlyPay
                    "", // favoriteSaying  
                    0.0, // startingStardate
                    "", // martialStatus
                    {0,0,0,""} // sStarfleetGraduationDate - month, day, year, letter month
                }
            };
        
        printHeader();
        printOfficerData(officerData, SIZE);
  
  
    return 0;
}



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

    printf ("\n\n*** Officer Data ***\n");

    // print the table header
    printf("\n\n\t----------------------------------------------------------\n");
    printf("\t%i Officer's Data Found\n", SIZE);
    printf("\t----------------------------------------------------------\n");

} // printHeader




// ********************************************************************
// Function: printOfficerData
//
// Purpose: Outputs to screen all officer data in the struct
//
// Parameters:
//
//     officerData - an array of structures containing Employees
//     theSize - number of officers to process
//
// Returns: Nothing (void)
//
// *********************************************************************

void printOfficerData ( struct officer officerData[], int theSize )
{
    int i; // loop and array index

    // print information about each officer
    for (i = 0; i < theSize ; ++i)
    {
        printf("\n Name: ........................ %s", officerData[i].sName.suffix);
        printf("\n Name: ........................ %s", officerData[i].sName.firstName);
        printf("\n Name: ........................ %s", officerData[i].sName.middleName);
        printf("\n Name: ........................ %s", officerData[i].sName.lastName);
        printf("\n Date Of Birth: ............... %i", officerData[i].sDOB.monthNumber);
        printf("\n Date Of Birth: ............... %i", officerData[i].sDOB.dayNumber);
        printf("\n Date Of Birth: ............... %i", officerData[i].sDOB.yearNumber);
        printf("\n Date Of Birth: ............... %s", officerData[i].sDOB.month);
        printf("\n Address: ..................... %i", officerData[i].sAddress.houseNumber);
        printf("\n Address: ..................... %s", officerData[i].sAddress.street);
        printf("\n Address: ..................... %s", officerData[i].sAddress.city);
        printf("\n Address: ..................... %s", officerData[i].sAddress.state);
        printf("\n Address: ..................... %s", officerData[i].sAddress.zipCode);
        printf("\n Address: ..................... %s", officerData[i].sAddress.planet);
        printf("\n Rank: ........................ %s", officerData[i].rank);
        printf("\n Last Promotion Date: ......... %i", officerData[i].sLastPromotionDate.monthNumber);
        printf("\n Last Promotion Date: ......... %i", officerData[i].sLastPromotionDate.dayNumber);
        printf("\n Last Promotion Date: ......... %i", officerData[i].sLastPromotionDate.yearNumber);
        printf("\n Last Promotion Date: ......... %s", officerData[i].sLastPromotionDate.month);
        printf("\n Ship: ........................ %s", officerData[i].ship);
        printf("\n Nickname: .................... %s", officerData[i].nickName);
        printf("\n Starfleet ID: ................ %s", officerData[i].starfleetID);
        printf("\n Hourly Pay: .................. %.2f", officerData[i].hourlyPay);
        printf("\n Favorite Saying: ............. %s", officerData[i].favoriteSaying);
        printf("\n Starting Stardate: ........... %.1f", officerData[i].startingStardate);
        printf("\n Martial Status: .............. %s", officerData[i].martialStatus);
        printf("\n Starfleet Graduation Date: ... %i", officerData[i].sStarfleetGraduationDate.monthNumber);
        printf("\n Starfleet Graduation Date: ... %i", officerData[i].sStarfleetGraduationDate.dayNumber);
        printf("\n Starfleet Graduation Date: ... %i", officerData[i].sStarfleetGraduationDate.yearNumber);
        printf("\n Starfleet Graduation Date: ... %s\n\n", officerData[i].sStarfleetGraduationDate.month);
    } // for

} // printOfficerData


