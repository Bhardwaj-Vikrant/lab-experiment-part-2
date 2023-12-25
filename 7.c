#include <stdio.h>

void writeFile() {
    FILE *filePointer;
    filePointer = fopen("example.txt", "w");
    if (filePointer == NULL) {
        printf("file doest not exist\n");
    }
    fprintf(filePointer, "This is a sample text written to the file.\n");
    fclose(filePointer);
}

void readFile() {
    FILE *filePointer;
    char ch;
    filePointer = fopen("example.txt", "r");
    if (filePointer == NULL) {
        printf("file doest not exist\n");
    }
    printf("Content of the file:\n");
    while ((ch = fgetc(filePointer)) != EOF) {
        putchar(ch);
    }
    fclose(filePointer);
}

void appendFile() {
    FILE *filePointer;
    filePointer = fopen("example.txt", "a");
    if (filePointer == NULL) {
        printf("file doest not exist\n");
    }
    fprintf(filePointer, "This data is appended to the file.\n");
    fclose(filePointer);
}

int main() {
    // File Write Operation
    writeFile();

    // File Read Operation
    readFile();

    // File Append Operation
    appendFile();

    return 0;
}
