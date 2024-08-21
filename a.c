#include<stdio.h>
int main()
{
    int a,b,c, result;
    printf("enter the values of a,b and c");
    scanf("%d %d %d", &a,&b,&c);
    result=(a==b)&&(c>b);
    printf("(a==b)&&(c>b) is %d\n", result);
    result=(a==b)&&(c<b);
    printf("(a==b)&&(c<b) is %d\n", result);
    result=(a==b)||(c>b);
    printf("(a==b)||(c>b) is %d\n", result);
    
}
