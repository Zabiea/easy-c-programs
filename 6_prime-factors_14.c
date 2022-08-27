#include<stdio.h>
#include<conio.h>

int main(){
	int n,n2;
	
	while(1){
		
		printf("\n Enter the number: ");
		scanf("%d",&n2);
		
		n=n2;
		
		printf("\n Prime factors of the number is: ");
		while(n2>0){
			if(n%n2==0){
				if(is_prime(n2)){
					printf(" %d  ",n2);
				}
			}
			n2--;
		}
}
	getch();
}

int is_prime(int n2){
	int ret=0,i;
	if(n2==2){
		return 1;
	}
	for(i=2;i<n2;i++){
		if(n2%i==0){
			return 0;
		}
		else{
			ret=1;
		}
	}
	return ret;
}
