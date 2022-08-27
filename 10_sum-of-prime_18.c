#include<stdio.h>
#include<conio.h>

void main(){
	int n,m,i,sum,t;
	
	printf("\nEnter the range to check: ");
	scanf("%d %d",&n,&m);
	
	if(n>m){
		t=n;
		n=m;
		m=t;
	}
	sum=0;
	for(i=n;i<=m;i++){
		if(is_prime(i)){
			sum=sum+i;
		}
	}
	printf("\nThe sum of prime numbers found in that range is: %d",sum);
	
	getch();
}

int is_prime(int i){
	int j,ret=0;
	
	if(i==2){
		return 1;
	}
	else{
		for(j=2;j<i;j++){
			if(i%j==0){
				return 0;
			}
			else{
				ret=1;
			}
		}
	}
	return ret;
}
