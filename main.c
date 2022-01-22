#include <stdio.h>
#include <stdlib.h>
int MAX_FILE_SIZE = 10000;

int main(int argc, char *argv[]) {

    if (argc < 2) {
        printf("Missing filename argument.");
        return -1;
    }

    FILE* inStream;
    inStream = fopen(argv[1], "r");
    char input[MAX_FILE_SIZE];
    int index = 0;

    if (inStream == NULL) {
        perror("Error");
        return -1;
    }

    while (!feof(inStream)) {
        char nextChar = fgetc(inStream);
        input[index] = nextChar;
        index++;
    }

    // Uncomment below to test input reading
    // printf("%s", input);
    fclose(inStream);
    return 0;
}