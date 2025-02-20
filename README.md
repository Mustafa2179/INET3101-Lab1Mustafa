# INET3101-Lab1Mustafa

## Simple commandline menu for an Inventory Management System

Written by: Mustafa Dayib
Date: Feb 12th 2024
Collaborators: NA

Program Description:
This program works on your computer's command line to help you manage a list of parts. It lets you add, delete, and view items in the list directly through the command line.
When you start the program you need to give it the name of the list as an input. It uses a simple menu where you can choose what you want to do by typing your input.

List of Files
definitions.h - Header file: Contains declarations of structures, global variables, and function prototypes.
main.c - C source code file: Contains the main function and global variable definitions.
function.c - C source code file: Contains implementations of all functions declared in the header.

The program menu looks like this:
Menu:
1. Print all records
2. Add record
3. Delete the last record
4. Print number of records
5. Print database size
6. Print number of changes
7. Exit
Users input a number to select an option. The program executes the function then returns to the menu until the user chooses to exit.

Function Definitions
void displayMenu()
Input: None
Output: outputs menu to standard output
Description: Displays the main menu options to the user.
void processMenuSelection(int choice)
Input: Integer (choice) representing the menu option selected by the user.
Output: None
Description: Calls the corresponding function based on user input. Does not return a value but triggers other actions in the program.
void printAllRecords()
Input: None
Output: outputs details of all records to standard output
Description: Iterates through the global array records and prints details of each record to the console.
void addRecord()
Input: User inputs from console for part number, name, size, size metric, and cost.
Output: modifies global array records
Description: Prompts the user for details about a new record and adds it to the database if space is available.
void deleteLastRecord()
Input: None
Output: modifies global array records
Description: Removes the most recently added record from the database.
void printNumberOfRecords()
Input: None
Output: outputs the count of records to standard output
Description: Prints the total number of records currently stored in the database.
void printDatabaseSize()
Input: None
Output: outputs the current size of the database to standard output
Description: Calculates and displays the current size of the database based on the number of records.
void printNumberOfChanges()
Input: None
Output: outputs the number of modifications to standard output
Description: Tracks and displays the number of times the database has been modified.
