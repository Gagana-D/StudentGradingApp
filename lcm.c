#include <stdio.h>
int main() {
    int num1,num2, maxi, lcm;
    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);
    maxi = (num1 > num2) ? num1 : num2;
    lcm = maxi;
    while ((lcm % num1 != 0) || (lcm % num2 != 0))
        {
        lcm ++;
    }
    printf("The LCM of %d and %d is %d.", num1, num2, lcm);
    return 0;
}
