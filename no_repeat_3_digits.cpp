//有1 2 3 4四个数字，能组成多少个无重复数字且互不相同的三位数？//
//TIP分三步：三位数，互不相同，记数。

#include<stdio.h>
int main(){
	int a=1,b=1,c=1;
	int count=0;
	
	for(a=1;a<=4;a++){
		for(b=1;b<=4;b++){
			for(c=1;c<=4;c++){
				if(a!=b&&a!=c&&b!=c){
					printf("%d%d%d\n",a,b,c);
					count++;
				}
			}
		}
	}
	
	printf("count=%d\n",count);
	
	return 0;
}
