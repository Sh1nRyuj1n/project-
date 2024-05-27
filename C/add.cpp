#include<stdio.h>

int addNumbers(int num1,int num2);
int main(){
	
    int n1,n2,sum;
    
    printf("Enter Two Numbers: ");
    scanf("%i%i",&n1,&n2);
    
    sum=addNumbers(n1,n2);
    printf("The sum is %i",sum);
}
int addNumbers(int num1,int num2)
{
    int result;
    result=num1+num2;
    return result;

}
