#include <stdio.h>
#include <time.h>

int main() {
char data[100]; 
    FILE *file_pointer;
    int birth_year, age;
    time_t current_time;
    struct tm *local_time;

  
    file_pointer = fopen("Armendarez.txt", "w");

    if (file_pointer == NULL) {
        perror("Error opening file");
        return 1;
    }


  	printf("Enter your full name here: ");
    fgets(data, sizeof(data), stdin); 
    fprintf(file_pointer, "%s", data); 

 
    printf("Enter your birth year: ");
    scanf("%d", &birth_year);

 
    current_time = time(NULL);
    local_time = localtime(&current_time);
    int current_year = local_time->tm_year + 1900;


    age = current_year - birth_year;

 
    fprintf(file_pointer, "Age: %d", age);

   
    fclose(file_pointer);

    printf("successfully.\n");

    return 0;
}
