#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enterb the number");
    scanf("%d",&a);
    printf("Enter the range\n");
    scanf("%d %d",&b,&c);
    if(a>b&&a<c)
    printf("Yes");
    else
    printf("No");
