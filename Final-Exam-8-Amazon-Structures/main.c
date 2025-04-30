//********************************************************
//
// Final Exam - Question 8
//
// Name: James Feeney
//
// Class: C Programming, Spring 2024
//
// Date: 4/21/2024
//
// Description: 
//
// (Code Segment)  The way back machine takes you back to July 16, 1995, 
// where Amazon officially opens for business as an online bookseller. 
// Within a month, the emerging retailer had shipped books to all 50 U.S. states 
// and to 45 countries. Your mission for this question is to develop a set 
// of structures that could be used to model the information about books and 
// book customers.  What type of information would you want to collect and 
// store about these types of items?  What would be the right types in C 
// for that information?  Define supporting structures as needed and have 
// two final structure types that are made up of various members (some 
// members may be in some structure type, others may be simple integers, 
// floats, chars, arrays, etc) for book and customer.
//
// Do look to use the various things we learned about in Week 12 such as 
// typedefs, unions, enumerated types, macros, etc.
//
// No program is needed although you might want to create a simple main 
// function and include your structure types just to test that everything 
// compiles.  This question is similar to the final question on the midterm, 
// but you have learned about many different types since then.  Here is a 
// template to use to get started that indicates what I am looking for in 
// your answer.
//
//******************************************************** 

#include <stdio.h>

// Define an enumerated type for book genres
typedef enum 
{
    FICTION,
    NON_FICTION,
    SCIENCE_FICTION,
    MYSTERY,
    ROMANCE,
    HORROR,
    THRILLER
} Genre;

// Define an enumerated type for states
typedef enum 
{
    MA,
    NY,
    FL,
    CA
} States;

// Define an enumerated type for countries
typedef enum 
{
    USA,
    ITALY,
    POLAND,
    SPAIN
} Countries;

// Define a structure to represent a name
typedef struct 
{
    char suffix [10];
    char firstName[50];
    char middleName[50];
    char lastName[50];
} Name;

// Define a structure to represent dimensions
typedef struct 
{
    float height;
    float width;
    float depth;
} Dimensions;

// Define a structure to represent a book
typedef struct 
{
    char isbn[50];          // Unique book ID
    Name author;            // Primary author
    char title[100];        // Title of the book
    char publisher[100];    // Publisher of the book
    Genre genre;            // Genre of the book
    char subject[50];       // Subject of the book
    char description[500];  // Description of the book
    float price;            // Price of the book
    Dimensions dimensions;  // Dimensions of the book
    float weight;           // Weight of the book
} Book;

// Define a structure to represent a customer
typedef struct 
{
    int customerID;         // Unique customer ID
    Name name;              // Customer's name
    char emailAddress[100]; // Customer's email address
    char phoneNumber[20];   // Customer's phone number
    char address[100];      // Customer's address
    char city[50];          // Customer's city
    Countries countries;     // Customer's country
} Customer;

// Define constants for the maximum number of books and customers
#define MAX_BOOKS 1000
#define MAX_CUSTOMERS 1000

int main() 

{
    // Sample data for books
    Book book1 = {
        "9780316769488",
        {"J.D.", "", "Salinger"},
        "The Catcher in the Rye",
        "Little, Brown and Company",
        FICTION,
        "Coming-of-age",
        "Classic novel about teenage angst",
        8.99,
        {5.5, 8.25, 0.75},
        0.45
    };

    // Sample data for customers
    Customer customer1 = {
        1001,
        {"John", "David", "Smith"},
        "john.smith@example.com",
        "555-1234",
        "123 Main St",
        "Anytown"
    };

    // Print sample book data
    printf("Sample book data:\n");
    printf("ISBN: %s\n", book1.isbn);
    printf("Author: %s %s %s\n", book1.author.firstName, book1.author.middleName, book1.author.lastName);
    printf("Title: %s\n", book1.title);
    printf("Publisher: %s\n", book1.publisher);
    printf("Genre: %d\n", book1.genre);
    printf("Subject: %s\n", book1.subject);
    printf("Description: %s\n", book1.description);
    printf("Price: $%.2f\n", book1.price);
    printf("Dimensions (H x W x D): %.2f x %.2f x %.2f inches\n", book1.dimensions.height, book1.dimensions.width, book1.dimensions.depth);
    printf("Weight: %.2f lbs\n", book1.weight);

    // Print sample customer data
    printf("\nSample customer data:\n");
    printf("Customer ID: %d\n", customer1.customerID);
    printf("Name: %s %s %s\n", customer1.name.firstName, customer1.name.middleName, customer1.name.lastName);
    printf("Email Address: %s\n", customer1.emailAddress);
    printf("Phone Number: %s\n", customer1.phoneNumber);
    printf("Address: %s\n", customer1.address);
    printf("City: %s\n", customer1.city);

    return 0;
}
