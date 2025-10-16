/*华氏度换算*/
#include <stdio.h>

int main()
{
	double f,c;
	printf("请输入华氏度；\n");
	scanf("%lf",&f);
	c=5*(f-32)/9;
	printf("摄氏度为：%.2lf\n",c); 
	return 0;
}
