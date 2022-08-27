#include<stdio.h>
#include<conio.h>

void main(){
	int n,k,sum1,sum2,i,j;
	
	printf("\nCalculates the series 2+22+222+2222+.....n terms.");
	printf("\nEnter the value of n: ");
	scanf("%d",&n);
	
	sum2=0;
	for(i=1;i<=n;i++){
		k=1;
		sum1=0;
		for(j=1;j<=i;j++){
			sum1=sum1+(2*k);
			k=k*10;
		}
		printf(" %d   ",sum1);
		sum2=sum2+sum1;
	}
	printf("\nEvaluated value of series is: %d",sum2);
	getch();
}
