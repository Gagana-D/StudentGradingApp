#include<stdio.h>
int odd(int n,int i)
{
    if(i<=n)
    {
        printf("%d\t",i);
        i=i+2;
        odd(n,i);
    }
    else return 0;
}
int main()
{
    int n,i=1;
    printf("Enter the range from 0 to ?\n");
    scanf("%d",&n);
    odd(n,i);
}
