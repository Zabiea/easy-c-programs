#include<stdio.h>
#include<conio.h>

void main(){
	int n,m,i,t;
	
	while(1){
	
		printf("\nEnter 2 numbers to calculate G.C.D: ");
		scanf("%d %d",&n,&m);
		
		if(n==0 || m==0){
			printf("\Enter numbers greater than zero(0).");
		}
		else{
			if(n>m){
				t=n;
				n=m;
				m=t;
			}
			
			for(i=n;i>0;i--){
				if(n%i==0 && m%i==0){
					printf("\nThe G.C.D is: %d",i);
					break;
				}
			}
		}
    }
	getch();
}
