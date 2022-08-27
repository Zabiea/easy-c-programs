#include<stdio.h>
#include<conio.h>

void main(){
	int x,n,m,sum,i,j;
	
	printf("\nCalculates the series 1+x+x^2+.....n terms.");
	printf("\nEnter the value of n: ");
	scanf("%d",&n);
	printf("\nEnter the value of x: ");
	scanf("%d",&x);
	
	sum=1;
	for(i=1;i<n;i++){
		m=1;
		for(j=1;j<=i;j++){
			m=m*x;
		}
		sum=sum+m;
	}
	printf("\nEvaluated value of series is: %d",sum);
	getch();
}
