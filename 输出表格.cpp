
/*������*/
#include <stdio.h>

int main()
{
	int f,min,max;
	double c;
	printf("��������ʼ���϶�ֵ��\n");
	scanf("%d",&min);
	printf("��������ֹ���϶�ֵ��\n");
	scanf(" %d",&max);
	if(min<max){
		printf("���϶�   ���϶�\n");
		for(f = min;f <= max;f++){
			c = (f-32)*(5.0/9.0);
			printf("%4d   %6.1lf\n",f,c);
		}
	}else{
		printf("��ʼֵӦС����ֵֹ��\n");
	}
	getchar();
	getchar();
	return 0; 
}
