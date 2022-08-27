#include<stdio.h>
#include<conio.h>
#include<math.h>

void main(){
	int x,i,n,f,j;
	float sum;
	
	printf("\nPrints the serires (x-x^3/3!+x^5/5!-....n terms). ");
	printf("\nEnter the value of x: ");
	scanf("%d",&x);
	printf("\nEnter the value of n: ");
	scanf("%d",&n);
	
	if(n==0){
		printf("\nEnter value of n greater than 0.");
	}
	else{
		sum=0.0;
		j=1;
		
		for(i=1;i<=n;i++){ 
		    if(i%2==1){
		    	if(j%2==0){
		    		f=fact(i);                     //if we start i=0 then a number cant be divide by 0 creates problem
					sum=sum-(pow(x,i)/f);
			}
				else{
					f=fact(i);
					sum=sum+(pow(x,i)/f);
				}
				j++;
			}
		}
		
		printf("\nThe sum of the series in given range is: %f",sum);
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
