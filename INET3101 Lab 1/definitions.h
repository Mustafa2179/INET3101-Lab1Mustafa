#pragma once

#include <stdbool.h>

#define MAX_RECORDS 100

typedef struct {
    int partNumber;
    char partName[100];
    float partSize;
    char partSizeMetric[10];
    float partCost;
} Record;

extern Record records[MAX_RECORDS];
extern int recordCount;

void printAllRecords();
void addRecord();
void deleteLastRecord();
void printNumberOfRecords();
void printDatabaseSize();
void printNumberOfChanges();
void processMenuSelection(int choice);
void displayMenu();
