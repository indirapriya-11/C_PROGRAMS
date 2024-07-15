#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    char data[100];

    // Open file in write mode
    fp = fopen("file.txt", "w");
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    // Write to file
    printf("Enter data to write to the file:\n");
    fgets(data, sizeof(data), stdin);
    fputs(data, fp);

    // Close file
    fclose(fp);
    printf("Data written to file successfully.\n");

    // Open file in read mode
    fp = fopen("file.txt", "r");
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    // Read from file and display content
    printf("Contents of file:\n");
    while (fgets(data, sizeof(data), fp) != NULL) {
        printf("%s", data);
    }

    // Close file
    fclose(fp);

    return 0;
}

