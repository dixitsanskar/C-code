#include <stdio.h>

int main()
{
    int totalsalary,basic,allow;
    float hra,da,pf;
    char grade;
    scanf("%d%c",&basic,&grade);
    hra=0.2*basic;
    da=0.5*basic;
    
    if(grade=='A')
    allow=1700;
    else if(grade=='B')
    allow=1500;
    else 
    allow=1300;
    
    pf=0.11*basic;
    totalsalary=(basic+hra+da+allow-pf);
    printf("%d",totalsalary);
    
    return 0;
}
