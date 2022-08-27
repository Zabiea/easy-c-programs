#include<stdio.h>
#include<conio.h>

void main(){
	int n,m,r,cnt;
	while(1){
		cnt=0;
		r=0;
	
		printf("\nEnter the divident: ");
		scanf("%d",&n);
		printf("\nEnter the divisor: ");
		scanf("%d",&m);
		
		if(n==0&&m==0){
			printf("\nCannot be defined.\n");
		}
		while(n>0){
			if(n>=m){
				//printf("hi");
				n=n-m;
				cnt++;
				r=0;
			}
			else{
				r=n;
				n=0;
			}
		}
		printf("\nThe quotient is: %d",cnt);
		printf("\nThe remainder is: %d\n",r);
	
}
	getch();
}
