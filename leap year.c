#include <stdio.h>

int main() {
    // Write C code here
    int x;
    scanf("%d",&x);
    if((x%4==0 && x%100!=0)|| x%400==0)
    printf("Leap Year");
    else
    printf("not a Leap year");

    return 0;
}
