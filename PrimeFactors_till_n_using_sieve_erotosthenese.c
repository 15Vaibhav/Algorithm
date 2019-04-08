#include <stdio.h>
 
int main(void) {
	int a[16]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15},i,j;
	for(i=0;i<16;i++){
		// a[i]=1;
	}
    for(i=2;i<4;i++){
    	for(j=2;i*j<=15;j++){
    		// if(a[i]==1){
    			a[i*j]=0;
    		// }
    	}
    }
    for(i=0;i<16;i++){
    	if(a[i]!=0)
    	printf("prime factors are %d\n",a[i]);
    }
 
	return 0;
}


//complexity o(loglogn)
