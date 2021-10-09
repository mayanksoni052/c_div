#include<stdio.h>
int main()
{
    int A, B, div;
    printf("Enter two numbers for division : \n");
    scanf("%d%d", &A, &B);
    div = A - B;
    printf("division is: %d", div);
    return 0;
}