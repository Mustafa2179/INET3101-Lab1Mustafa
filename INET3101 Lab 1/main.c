#include "definitions.h"
#include <stdio.h>
#include <stdlib.h> 

Record records[MAX_RECORDS];
int recordCount = 0;

int main(int argc, char* argv[]) {
    if (argc < 2) {
        fprintf(stderr, "Error: No database name provided.\nUsage: %s <database_name>\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    char* databaseName = argv[1];
    printf("Database Name: %s\n", databaseName);

    int choice;
    while (true) {
        displayMenu();
        printf("Please enter your selection > ");
        scanf("%d", &choice);

        if (choice == 7) {
            printf("Exiting program...\n");
            break;
        }

        processMenuSelection(choice);
    }

    return 0;
}
