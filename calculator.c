#include<stdio.h>
 
 int main ()
{
    int  choice;
    float a , b ,result;
    printf("enter first number =");
    scanf("%f", &a);
    printf("enter second number =");
    scanf("%f", &b);

    
    printf("\n1. Addition");
    printf("\n2. Subtraction");
    printf("\n3. Multiplication");
    printf("\n4. Division");

    printf("\n enter your choise =");
    scanf("%d",&choice);

    switch(choice)
       {
        case 1:
            result = a + b;
            printf("Result = %.2f", result);
            break;
        case 2:
            result = a - b;
            printf("Result = %.2f", result);
            break;
        case 3:
            result = a * b;
            printf("Result = %.2f", result);
            break;
        case 4:
            if(b != 0)
            {
                result = a / b;
                printf("Result = %.2f", result);
            }
            else
            {
                printf("Error: Division by zero is not allowed.");
            }
            break;
        default:
            printf("Invalid choice. please select a valid option.");
    }


    return 0;

}