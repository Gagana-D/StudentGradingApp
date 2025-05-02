#include<stdio.h>
int even(int n,int i)
{
    if(i<=n)
    {
        printf("%d\t",i);
        i=i+2;
        even(n,i);
    }
    else return 0;
}
int main()
{
    int n,i;
    printf("Enter range from 0 to ?\n");
    scanf("%d",&n);
    even(n,i);
}
