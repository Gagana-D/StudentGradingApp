#include<stdio.h>
int main()
{
    int n,add=0,mul=1,n1;
    printf("Enter no:\n");
    scanf("%d",&n);
    while(n>0)
    {
        n1=n%10;
        n=n/10;
        add=add+n1;
        mul=mul+n1;
    }
    printf("Sum is %d Product is %d",add,mul);
    return 0;

}
