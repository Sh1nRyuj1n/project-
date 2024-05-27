#include<stdio.h>

int subtractNumbers(int num1,int num2);
int main(){
	
    int n1,n2,difference;
    
    printf("Enter Two Numbers: ");
    scanf("%i%i",&n1,&n2);
    
    difference=subtractNumbers(n1,n2);
    printf("The Difference is %i",difference);
}
int subtractNumbers(int num1,int num2)
{
    int result;
    result=num1-num2;
    return result;

}
