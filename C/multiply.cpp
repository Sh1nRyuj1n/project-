#include<stdio.h>

int multiplyNumbers(int num1,int num2);
int main(){
	
    int n1,n2,product;
    
    printf("Enter Two Numbers: ");
    scanf("%i%i",&n1,&n2);
    
    product=multiplyNumbers(n1,n2);
    printf("The product is %i",product);
}
int multiplyNumbers(int num1,int num2)
{
    int result;
    result=num1*num2;
    return result;

}
