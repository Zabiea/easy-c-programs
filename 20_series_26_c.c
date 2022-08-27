#include<stdio.h>
#include<conio.h>

void main(){
	int x,n,i,j;
	float sum,term,m;
	
	printf("\nCalculates the series 1+x+x^2/2!+x^3/3!+.....n terms.");
	printf("\nEnter the value of n: ");
	scanf("%d",&n);
	printf("\nEnter the value of x: ");
	scanf("%d",&x);
	
	sum=1.0;
	for(i=1;i<n;i++){
		m=1.0;
		for(j=1;j<=i;j++){
			m=m*x;
		}
		term=m/fact(i);
		sum=sum+term;
	}
	printf("\nEvaluated value of series is: %f",sum);
	getch();
}

int fact(int i){
	int j,f=1;
	for(j=2;j<=i;j++){
		f=f*j;
	}
	return f;
}
