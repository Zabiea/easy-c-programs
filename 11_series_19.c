#include<stdio.h>
#include<conio.h>
#include<math.h>

void main(){
	int x,i,n,sum,f;
	
	printf("\nPrints the serires (1+x+x^2/2!+x^3/3!+....+x^n/n!). ");
	printf("\nEnter the value of x: ");
	scanf("%d",&x);
	printf("\nEnter the value of n: ");
	scanf("%d",&n);
	
	if(n==0){
		printf("\nEnter valu of n greater than 0.");
	}
	else{
		sum=1;
		
		for(i=1;i<=n;i++){ 
		    f=fact(i);                     //if we start i=0 then a number cant be divide by 0 creates problem
			sum=sum+(pow(x,i)/f);
		}
		
		printf("\nThe sum of the series in given range is: %d",sum);
}
	getch();
	
}

int fact(int i){
	int j,f=1;
	for(j=1;j<=i;j++){
		f=f*j;
	}
	return f;
}
