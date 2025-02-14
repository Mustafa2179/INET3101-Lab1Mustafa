#include "definitions.h"
#include <stdio.h>

void displayMenu() {
    printf("\nMenu:\n");
    printf("1. Print all records\n");
    printf("2. Add record\n");
    printf("3. Delete the last record\n");
    printf("4. Print number of records\n");
    printf("5. Print database size\n");
    printf("6. Print number of changes\n");
    printf("7. Exit\n");
}

void processMenuSelection(int choice) {
    switch (choice) {
    case 1:
        printAllRecords();
        break;
    case 2:
        addRecord();
        break;
    case 3:
        deleteLastRecord();
        break;
    case 4:
        printNumberOfRecords();
        break;
    case 5:
        printDatabaseSize();
        break;
    case 6:
        printNumberOfChanges();
        break;
    default:
        printf("Invalid selection. Please try again.\n");
        break;
    }
}

void printAllRecords() {
    printf("Currently stored records:\n");
    for (int i = 0; i < recordCount; i++) {
        printf("Record %d: Part Number = %d, Part Name = %s, Part Size = %.2f %s, Part Cost = $%.2f\n",
            i + 1, records[i].partNumber, records[i].partName, records[i].partSize, records[i].partSizeMetric, records[i].partCost);
    }
}

void addRecord() {
    if (recordCount >= MAX_RECORDS) {
        printf("Database full. Cannot add more records.\n");
        return;
    }

    printf("Enter part number: ");
    scanf("%d", &records[recordCount].partNumber);
    printf("Enter part name: ");
    scanf("%99s", records[recordCount].partName);
    printf("Enter part size: ");
    scanf("%f", &records[recordCount].partSize);
    printf("Enter part size metric: ");
    scanf("%9s", records[recordCount].partSizeMetric);
    printf("Enter part cost: ");
    scanf("%f", &records[recordCount].partCost);
    recordCount++;

    printf("Record added successfully.\n");
}

void deleteLastRecord() {
    if (recordCount > 0) {
        recordCount--;
        printf("Last record deleted successfully.\n");
    }
    else {
        printf("No records to delete.\n");
    }
}

void printNumberOfRecords() {
    printf("Total number of records: %d\n", recordCount);
}

void printDatabaseSize() {
    printf("Database size: %d records\n",MAX_RECORDS);
}

void printNumberOfChanges() {
    static int changes = 0;
    printf("You have modified the database %d times\n", ++changes);
}
