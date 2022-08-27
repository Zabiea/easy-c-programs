#include<stdio.h>
#include<conio.h>

void main(){
	int a,b,c,i,n,j;
	
	a=0;
	b=1;
	printf("\nEnter the number of terms: ");
	scanf("%d",&n);
	printf("\n The missing items of Fibonacci series: ");
	
	for(i=2;i<n;i++){
		c=a+b;
		a=b;
		b=c;
		for(j=a+1;j<b;j++){
			printf(" %d ",j);
		}
		
	}
	getch();
	
}
