#include <stdio.h>

int main()
{
	char firstname[10], lastname[10], gender[10];
	char course[10], birth_month[10], school[10];
	int birth_day, birth_year, age;
	
	printf("Enter First Name: ");
    scanf("%s", firstname);
    
    printf("Enter Last Name: ");
    scanf("%s", lastname);
    
    printf("\nEnter Gender: ");
    scanf("%s", gender);
    
    printf("\n\nEnter Course: ");
    scanf("%s", course);
    
    printf("\nEnter Birth month: ");
    scanf("%s", birth_month);
    
    printf("\nEnter Birth day: ");
    scanf("%d", &birth_day);
	
	printf("\nEnter Birth year: ");
    scanf("%d", &birth_year);

	printf("\n\n\nEnter Age: ");
    scanf("%d", &age);
    	
    printf("\nEnter School: ");
    scanf("%s", school);

	/*SUMMARY*/	

	printf("\n\n\nName: %s %s ",firstname, lastname);
	
	printf("\n\nGender: %s", gender);
	
	printf("\n\nBirthday: %s %d %d ", birth_month, birth_day, birth_year);
	
	/*welcome*/
	
	printf("\n\n\nHello %s %s, you are enrolled as a %s student, welcome to %s.",firstname, lastname, course, school); 
	
	
	
	return 0;
	 
}
