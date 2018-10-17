#include<stdio.h>
int main(){
	int i;
	char * a[]={"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
	while(scanf("%d",&i))
		printf("%s\n",a[i-1]);
	return 0;
}