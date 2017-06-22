/*
    Write a program to write the roll no and first name
    of five students to a data file "student.txt" using
    fprintf() and using fscanf() function display those
    information from the file.
*/


#include <stdio.h>

struct student {
    int roll_no;
    char first_name[20];
};

void main() {
    int i;
    FILE *p;
    struct student students[5], s[5];
    p = fopen("student.txt", "w");
    for(i = 0; i < 5; i++) {
        printf("\nEnter the first name and roll no of student %d\n", i+1);
        scanf("%s %d", students[i].first_name, &students[i].roll_no);
        fprintf(p, "%s %d\n", students[i].first_name, students[i].roll_no);
    }
    fclose(p);


    p = fopen("student.txt", "r");
    for(i = 0; i < 5; i++) {
        int n = fscanf(p, "%s %d", s[i].first_name, &s[i].roll_no);
        printf("\nFirst Name: %s, Roll No: %d", s[i].first_name, s[i].roll_no);
    }
    fclose(p);

}