#include <stdio.h>

int main()
{
	float n,m;
	char op;
	printf("enter the first number:");
	scanf("%f", &n);
	printf("choose a way(+,-,*,/):");
	scanf(" %c", &op);
	printf("then the second number:");
	scanf("%f", &m);
	switch(op){
		case('+'):
			printf("%f + %f = %f\n",n,m,n + m);
			break;
		case('-'):
			printf("%f - %f = %f\n",n,m,n - m);
			break;
		case('*'):
			printf("%f * %f = %f\n",n,m,n * m);
			break;
		case('/'):
			if(m != 0) {
			printf("%f / %f = %f\n",n,m,n / m);
			}else{
			printf("error, ��������Ϊ0");
			}
			break;
		default:
			printf("������������˸�ɶ��%c",op);
	}
	
	return 0;
 } 
