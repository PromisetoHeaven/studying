/*err ver*/
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
	printf("���϶�   ���϶�\n");
	if(min<max){
		for(f = min;f <= max;f++){
			c = 5*(f-32)/9;      //��Ϊ���������и����������Ż���������� 
			printf("%4d      %.1lf\n",f,c);
		}
	}else{
		printf("��ʼֵӦС����ֵֹ��\n");
	}
	return 0; 
}
