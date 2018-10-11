#include<stdio.h>
int main(){
	int i,max,j=0;
	scanf("%d",&i);
	max=i;
	while ((j<2)&&(scanf("%d",&i))){/*注意两个条件的顺序，不然会多一个输入*/
		if (i > max)
			max=i;
		j++;
	}
	printf("%d\n",max);
	return 0;
}