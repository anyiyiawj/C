#include<stdio.h>
int main(){
	float c;
	scanf("%f",&c);/*用标准输出函数*/
	printf("c=%.2f\n",(c-32)*5/9);
	return 0;
}