#include<stdio.h>

int divideNumbers(int num1,int num2);
int main(){
	
    int n1,n2,quotient;
    
    printf("Enter Two Numbers: ");
    scanf("%i%i",&n1,&n2);
    
    quotient=divideNumbers(n1,n2);
    printf("The quotient is %i",quotient);
}
int divideNumbers(int num1,int num2)
{
    int result;
    result=num1/num2;
    return result;

}
