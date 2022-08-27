#include<stdio.h>
#include<conio.h>

void main(){
	int x,n,i,j,divisor;
	float sum,m;
	
	printf("\nCalculates the series 1+x/4+x^2/8+.....n terms.");
	printf("\nEnter the value of n: ");
	scanf("%d",&n);
	printf("\nEnter the value of x: ");
	scanf("%d",&x);
	sum=1.0;
	for(i=2;i<=n;i++){
		m=1.0;
		divisor=0;
		for(j=1;j<i;j++){
			m=m*x;
			divisor=divisor+4;
		}
		sum=sum+(m/divisor);
	}
	printf("\nEvaluated value of series is: %f",sum);
	getch();
}
