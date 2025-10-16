/*err ver*/
/*输出表格*/
#include <stdio.h>

int main()
{
	int f,min,max;
	double c;
	printf("请输入起始华氏度值：\n");
	scanf("%d",&min);
	printf("请输入终止华氏度值：\n");
	scanf(" %d",&max);
	printf("华氏度   摄氏度\n");
	if(min<max){
		for(f = min;f <= max;f++){
			c = 5*(f-32)/9;      //因为整数运算有浮点数介入后才会输出浮点数 
			printf("%4d      %.1lf\n",f,c);
		}
	}else{
		printf("起始值应小于终止值！\n");
	}
	return 0; 
}
