#include<stdio.h>

int printf_arr(int a[],int h,int l,int q){
	int i,j;
	if (q==0){
		for (i=0; i<h; i++){
			for (j=l-1; j>=0; j--)
				//printf("%d ",*(a[i]+j));
				//上面错误，返回invalid type argument of unary '*' (have 'int')
				//原因是按照二维数组的方式进行处理的,而a是一个一维数组，应该为下面的形式；
				//如果是二维数组，则应该传递为int (*p)[];
				printf("%d ",*(a+i*l+j));//采用一维数组的样式来进行匹配；
			printf("\n");
		}
	}
	else if (q==1){
		for (i=h-1; i>=0; i--){
			for (j=0; j<l; j++)
				printf("%d ",*(a+i*l+j));
			printf("\n");
		}
	}
	else{
		for (i=0; i<h; i++){
			for (j=0; j<l; j++)
				printf("%d ",*(a+i*l+j));
			printf("\n");
		}
	}
		
	return 0;
}	


int main(){	
	int h,l,q,i,j;
	scanf("%d%d%d",&h,&l,&q);
	int a[h][l];//动态获取空间；
	for (i=0; i<h; i++)
		for (j=0; j<l; j++)
			scanf("%d",a[i]+j);
	printf_arr(a[0],h,l,q);//传入一维数组；
	return 0;
}