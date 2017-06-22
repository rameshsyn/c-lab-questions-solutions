/*
    Write a program to write and read a record to/from a data file using 
    fwrite() and fread() functions.
*/

#include <stdio.h>
#include <string.h>

void main() {
    char favrite_color[] = "green", copied[10];
    FILE *p;
    p = fopen("test.txt", "wb+");
    fwrite(favrite_color, sizeof(favrite_color), 1, p);
    fseek(p, 0, SEEK_SET);
    fread(copied, sizeof(favrite_color), 1, p);
    printf("%s", copied);

    fclose(p);
}