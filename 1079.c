#include <stdio.h>

int main(){
	char a;
reget:
	scanf(" %c",&a);
	printf("%c\n",a);
	if(a!='q')goto reget;
	
}
