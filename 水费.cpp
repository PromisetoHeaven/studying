#include <stdio.h>

int main()
{
	double x,y;
	printf("请输入用水量：\n");
	scanf("%lf",&x);
	if(x<=15)
	{
		y = 4*x/3; 
	}else{
		y = 2.5*x-10.5;
	}
	printf("该用户应支付的水费为：%.2lf\n",y);
	return 0;
 } 
