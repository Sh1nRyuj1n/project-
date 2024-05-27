#include<stdio.h>

int main()
{
	int Student_Number, Prelim_Exam, Midterm_Exam, Final_Exam, Assessment_Task;
	char LastName[20], FirstName[20];
	
	printf("Student Number: ");
	scanf("%i", &Student_Number);
	
	printf("\nLast Name: ");
	scanf("%s", LastName);
	
	printf("\nFirst Name: ");
	scanf("%s", FirstName);
	
	printf("\nLECTURE GRADE");
	
	printf("\n\n\tPrelim Exam: ");
	scanf("%i", &Prelim_Exam);
	
	printf("\n\n\tMidterm Exam: ");
	scanf("%i", &Midterm_Exam);
	
	printf("\n\n\tFinal Exam: ");
	scanf("%i", &Final_Exam);
	
	printf("\n\n\tAssessment Task: ");
	scanf("%i", &Assessment_Task);
	
	return 0;
}
