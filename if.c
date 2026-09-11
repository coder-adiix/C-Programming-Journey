#include<stdio.h>
#include<conio.h>
int main()
{
    int a;
    printf("Enter the number :");
    scanf("%d",&a);

    if(a%2 ==0)
    {
        printf("The Number Is Even \n");
    }
   
    else
    {
        printf("The Number Is Odd \n");
    }
     if(a>=0)
    {
        printf("The Number Is Positive \n");
    }
    else
    {
        printf("The Number Is Negative \n");
    }
return 0;
}