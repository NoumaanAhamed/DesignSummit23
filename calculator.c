#include<stdio.h>   
#include<conio.h>
int add(int a, int b)
{
    //enter code for addition
}
int sub(int a, int b)
{
    //enter code for subtraction
    
}
int mul(int a, int b)
{
    return a*b;
}
int div(int a, int b)
{
    return a/b;
}
void main()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");
    printf("Enter your choice: ");
    int choice;
    scanf("%d",&choice);
    switch(choice)
    {
        case 1: 
        printf("Sum = %d",add(a,b));
        break;
        case 2:
        printf("Difference = %d",sub(a,b));
        break; 
        case 3:
        printf("Product = %d",mul(a,b));
        break; 
        case 4:
        printf("Quotient = %d",div(a,b));
        break; 
        default: 
        printf("Invalid choice");
    }
}