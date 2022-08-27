#include<stdio.h>
#include<conio.h>

void main(){
	int x,n,i,j;
	float sum,div=1.0,m;//float!=int/int; we can do float=float/int;
	
	printf("\nCalculates the series x-x^2/2+x^3/3-.....n terms.");
	printf("\nEnter the value of n: ");
	scanf("%d",&n);
	printf("\nEnter the value of x: ");
	scanf("%d",&x);
	
	sum=0.0;
	i=1;
	for(i=1;i<=n;i++){
			m=1.0;
			for(j=1;j<=i;j++){
				m=m*x;
			}
			div=m/i;
			if(i%2==1){
				sum=sum+div;	
			}
			else{
				sum=sum-div;
			}
	}
	printf("\nEvaluated value of series is: %f",sum);
	getch();
}
