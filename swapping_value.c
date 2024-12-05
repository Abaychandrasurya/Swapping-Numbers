#include<stdio.h>
int main()
{
    int m,n;
    printf("enter the value a and b:");
    scanf("%d %d",&m&n);
    m^=n^=m^=n;
    printf("the value a:%d\t b:%d",m,n);
}
