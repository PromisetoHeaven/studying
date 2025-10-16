
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
	if(min<max){
		printf("华氏度   摄氏度\n");
		for(f = min;f <= max;f++){
			c = (f-32)*(5.0/9.0);
			printf("%4d   %6.1lf\n",f,c);
		}
	}else{
		printf("起始值应小于终止值！\n");
	}
	getchar();
	getchar();
	return 0; 
}
