#include <stdio.h>

int main() {
	// your code goes here
	int n;
	scanf("%d",&n);
	int k=0;
    for(int i=1;i<=n;i++)
    {k=0;
        for(int j=1;j<=i;j++)
        {
            printf("%d ",(k+i));
            k++;
        }
        printf("\n");
    }
	return 0;
}
