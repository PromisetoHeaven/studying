#include <stdio.h>

int main()
{
	double x,y;
	printf("��������ˮ����\n");
	scanf("%lf",&x);
	if(x<=15)
	{
		y = 4*x/3; 
	}else{
		y = 2.5*x-10.5;
	}
	printf("���û�Ӧ֧����ˮ��Ϊ��%.2lf\n",y);
	return 0;
 } 
