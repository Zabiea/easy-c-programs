#include<stdio.h>
#include<conio.h>

void main(){
	int i,mul=1,n;
	
	printf("\nEnter a number: ");
	scanf("%d",&n);
	
	printf("\nThe multiplication table for %d is: \n",n);
	for(i=1;i<=10;i++){
		mul=n*i;
		printf("%2d x %2d = %2d\n",n,i,mul);
	}

	
	getch();
	
}
