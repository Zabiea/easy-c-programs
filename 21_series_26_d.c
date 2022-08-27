#include<stdio.h>
#include<conio.h>

void main(){
	int n,sum2,sum1,i,j;
	
	printf("\nCalculates the series 1+(1+2)+(1+2+3)+.....n terms.");
	printf("\nEnter the value of n: ");
	scanf("%d",&n);
	
	
	sum2=0;
	for(i=1;i<=n;i++){
		sum1=0;
		for(j=1;j<=i;j++){
			sum1=sum1+j;
		}
		sum2=sum2+sum1;
	}
	printf("\nEvaluated value of series is: %d",sum2);
	getch();
}
