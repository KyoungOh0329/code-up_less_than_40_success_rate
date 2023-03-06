#include<stdio.h>

int main(){
	char name[30];
	int age;
	char code;
	double key;
	scanf("%s %d %c %lf",&name,&age,&code,&key);
	
	printf("%s\n%d\n%c\n%g",name,age,code,key);
}f
