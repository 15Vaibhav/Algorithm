#include <stdio.h>
#include <math.h>
int main(void) {
	int i,count=0,n;
	printf("Enter the no ");
	scanf("%d",&n);
	for(i=2;i<=sqrt(n);i++){
		count =0;
		if(n%i==0){
			while(n%i==0){
			n = n/i;
			count++;
		}
				printf("prime factors %d occurance %d\n" ,i,count);

		}
		
	}
	
	return 0;
}
