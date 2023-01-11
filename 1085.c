#include<stdio.h>

int main(){
	double h,b,c,s,bit;
	scanf("%lf %lf %lf %lf",&h,&b,&c,&s);
	bit=h*b*c*s;
	bit=bit/8;
	bit=bit/1024;
	bit=bit/1024;
	printf("%.1lf MB",bit);
}