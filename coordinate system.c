#include <stdio.h>

int main() {
    // Write C code here
    float x,y;
    scanf("%f%f",&x,&y);
    int t;
    if(x>0 && y>0)
    t=1;
    else if(x<0 && y>0)
    t=2;
    else if(x<0 && y<0)
    t=3;
    else
    t=4;
    printf("Quadrant is %d",t);

    return 0;
}
