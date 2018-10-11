#include<stdio.h>
int main(){
	int i=0;
	char str[100];
	scanf("%s",str);
	while (str[i]){
		str[i]=str[i]+4;
		i++;
	}
	printf("%s\n",str);
	return 0;
}