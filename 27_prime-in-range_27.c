#include<stdio.h>
#include<conio.h>

void main(){
	int n,m,temp,i;
	
	printf("\nPrime number in a range.\n");
	printf("\nEnter the range: ");
	scanf("%d %d",&n,&m);
	
	if(n>m){
		temp=n;
		n=m;
		m=temp;
	}
	printf("\nPrime numbers in the given range: ");
	
	for(i=n;i<=m;i++){
		if(is_prime(i)){
			printf("\t%d",i);
		}
	}
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
