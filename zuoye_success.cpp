#include <stdio.h>
int main()
{
	int n,sum = 0;
	printf("enter a number: ");
	scanf("%d", &n);
	
	for(int i = 1;i <=n; i++){
		sum += i;
	}
	
	printf("the sum_up from 1 to %d is :%d\n",n,sum);
	return 0;
}


