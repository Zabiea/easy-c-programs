#include<stdio.h>
#include<conio.h>

void main(){
	int x,n,i,j,ch;
	float sum,div=1.0,m;//float!=int/int; we can do float=float/int;
	
	printf("\nCalculates the series x-x^3/3+x^5/5-.....n terms.");
	printf("\nEnter the value of n: ");
	scanf("%d",&n);
	printf("\nEnter the value of x: ");
	scanf("%d",&x);
	
	sum=0.0;
	i=1;
	ch=1;
	while(ch<=n){
		if(i%2==1){
			m=1.0;
			for(j=1;j<=i;j++){
				m=m*x;
			}
			div=m/i;
			if(ch%2==1){
				sum=sum+div;	
			}
			else{
				sum=sum-div;
			}
			ch++;
			
		}
		i++;
	}
	printf("\nEvaluated value of series is: %f",sum);
	getch();
}
