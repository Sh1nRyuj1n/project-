#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX_STUDENTS 5

struct Student {
    char fname[100], mname[100], lname[100];
    char gender;
    int by;
    char b_month[50];
    int b_day;
    int currentyear;
    char address[100];
    char cel_telno[15];
    int age;
};

// Function prototypes
void addStudent(struct Student students[], int *numStudents, int currentYear);
void editStudent(struct Student students[], int numStudents, int currentYear);
void printStudent(struct Student students[], int numStudents);
int calculateAge(int by, int currentYear);
void writeToFile(struct Student students[], int numStudents);

int main() {
    struct Student students[MAX_STUDENTS];
    int numStudents = 0;
    int choice;
    int currentYear = 2024;

    do {
        printf("\nStudent Management System\n");
        printf("1. Add Student\n");
        printf("2. Edit Student\n");
        printf("3. Print Students\n");
        printf("4. Save Students to File\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addStudent(students, &numStudents, currentYear);
                break;
            case 2:
                editStudent(students, numStudents, currentYear);
                break;
            case 3:
                printStudent(students, numStudents);
                break;
            case 4:
                writeToFile(students, numStudents);
                break;
            case 5:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 5);

    return 0;
}

// Function to add a student
void addStudent(struct Student students[], int *numStudents, int currentYear) {
    if (*numStudents < MAX_STUDENTS) {
        printf("\nEnter first name: ");
        scanf("%s", students[*numStudents].fname);
        printf("Enter middle name: ");
        scanf("%s", students[*numStudents].mname);
        printf("Enter last name: ");
        scanf("%s", students[*numStudents].lname);
        printf("Enter gender M/F: ");
        scanf(" %c", &students[*numStudents].gender);
        printf("Enter your Birth Year: ");
        scanf("%d", &students[*numStudents].by);
        printf("Enter your Birth Month: ");
        scanf("%s", students[*numStudents].b_month);
        printf("Enter your Birth Day: ");
        scanf("%d", &students[*numStudents].b_day);
        printf("Enter complete address: ");
        scanf(" %[^\n]", students[*numStudents].address);
        printf("Enter Cel/TelNo: ");
        scanf("%s", students[*numStudents].cel_telno);
        students[*numStudents].currentyear = currentYear;
        students[*numStudents].age = calculateAge(students[*numStudents].by, currentYear); // Calculate age
        (*numStudents)++;
        printf("Student added successfully.\n");
    } else {
        printf("Student list is full. Cannot add more students.\n");
    }
}

// Function to edit a student
void editStudent(struct Student students[], int numStudents, int currentYear) {
    char fname[100], mname[100], lname[100];
    printf("\nEnter the name of the student you want to edit: ");
    scanf("%s %s %s", fname, mname, lname);

    int found = 0;
    for (int i = 0; i < numStudents; i++) {
        if (strcmp(students[i].fname, fname) == 0 &&
            strcmp(students[i].mname, mname) == 0 &&
            strcmp(students[i].lname, lname) == 0) {
            printf("Enter new name: ");
            scanf("%s", students[i].fname);
            printf("Enter middle name: ");
            scanf("%s", students[i].mname);
            printf("Enter last name: ");
            scanf("%s", students[i].lname);
            printf("Enter gender M/F: ");
            scanf(" %c", &students[i].gender);
            printf("Enter your Birth Year: ");
            scanf("%d", &students[i].by);
            printf("Enter your Birth Month: ");
            scanf("%s", students[i].b_month);
            printf("Enter your Birth Day: ");
            scanf("%d", &students[i].b_day);
            printf("Enter new address: ");
            scanf(" %[^\n]", students[i].address);
            printf("Enter new cel/telno: ");
            scanf("%s", students[i].cel_telno);
            printf("Student edited successfully.\n");
            students[i].age = calculateAge(students[i].by, currentYear); // Update age
            found = 1;
            break;
        }
    }

    if (!found)
        printf("Student not found.\n");
}

// Function to print all students
void printStudent(struct Student students[], int numStudents) {
    if (numStudents == 0) {
        printf("No students to display.\n");
        return;
    }
    printf("-----------------------------------------\n");
    printf("Students:\n");
    for (int i = 0; i < numStudents; i++) {
        printf("%d. \nName: %s %s %s\nGender: %c\nAge: %d\nYou born: %s / %d / %d\nAddress: %s\nCel/TelNo: %s\n",
            i + 1, students[i].fname, students[i].mname, students[i].lname, students[i].gender, students[i].age, students[i].b_month, students[i].b_day, students[i].by, students[i].address, students[i].cel_telno);
        printf("-----------------------------------------\n");
    }
}


// Function to write students to file
void writeToFile(struct Student students[], int numStudents) {
    FILE *file_pointer;
    file_pointer = fopen("inpr.txt", "w");

    if (file_pointer == NULL) {
        printf("Error opening file.");
        return;
    }

    for (int i = 0; i < numStudents; i++) {
       fprintf(file_pointer, "%d. \nName: %s %s %s\nGender: %c\nAge: %d\nYou born: %s / %d / %d\nAddress: %s\nCel/TelNo: %s\n",
            i + 1, students[i].fname, students[i].mname, students[i].lname, students[i].gender, students[i].age, students[i].b_month, students[i].b_day, students[i].by, students[i].address, students[i].cel_telno);
    }

    fclose(file_pointer);
    printf("Student data saved to file successfully.\n");
}

// Function to calculate age based on birth year and current year
int calculateAge(int by, int currentYear) {
    return currentYear - by;
}
