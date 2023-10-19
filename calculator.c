#include<stdio.h>   
#include<conio.h>

int add(int a, int b)
{
    //enter code for addition
    return a+b;
}
int sub(int a, int b)
{
    //enter code for subtraction
    return a-b;
    
}
int mul(int a, int b)
{
    //enter code for multiplication
    return a*b;
}
int div(int a, int b)
{
    //enter code for division
    return a/b;
}
int rem(int a, int b)
{
    //enter code for division
    return a%b;
}
int exp(int a, int b)
{
    int c = 1;
    for( int i = 0; i < b; i++)
        c *= a;
    return c;
}
void main()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Remainder\n6. Exponent\n");
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
        case 5:
        printf("Remainder = %d",rem(a,b));
        break; 
        case 6:
        printf("Exponent = %d",exp(a,b));
        break; 
        default: 
        printf("Invalid choice");
    }
}