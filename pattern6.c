#include <stdio.h>

int main() {
	// your code goes here
	int n;
	scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=n;j>i;j--)
        {  
            printf(" ");
        }
        for(int j=1;j<=i;j++)
        {  
            printf("*");
        }
        for(int j=2;j<=i;j++)
        {  
            printf("*");
        }
        printf("\n");
        
    }
	return 0;
}

