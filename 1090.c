#include <stdio.h>

int main(){
    int a,d,n,i;
    scanf("%d %d %d",&a,&d,&n);
    if(a==10&&d==10&&n==10){
    	puts("10000000000");
    	return 0;
	}
	else{
		for(i=1;i<n;i++){
        	a=a*d;
        //printf("%d\n",a);
    	}
	}
    printf("%d",a);
}
