#include<stdio.h>
#include<conio.h>

void main(){
	int a,b,c,i,n;
	
	a=0;
	b=1;
	printf("\nEnter the number of terms: ");
	scanf("%d",&n);
	printf("\n The Fibonacci series: 0  1 ");
	
	for(i=2;i<n;i++){
		c=a+b;
		a=b;
		b=c;
		printf(" %d ",c);
	}
	getch();
	
}
