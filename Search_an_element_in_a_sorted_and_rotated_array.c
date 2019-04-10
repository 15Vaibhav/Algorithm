#include <stdio.h>
 
void search(int a[],int s,int l,int n){
	int x;
	x = (s+l)/2;
	if(a[x]==n){
		printf("number is %d and index is %d ",n,x);
	}
	else if(a[x]>a[s]){
		if(n<a[s]||n>a[x]){
		search(a,x+1,l,n);	
		}
		else{
			search(a,s,x-1,n);
		}
	}
	else if(a[x]<a[l]){
		if(n>a[l]||n<a[x]){
			search(a,s,x-1,n);
		}else{
			search(a,x+1,l,n);
		}
	}
	else{
		printf("%d not found",n);
	}
	}
int main(void) {
	int a[] = {30, 40, 50, 10, 20},l;
	l = sizeof(a)/sizeof(a[0]);
	search(a,0,l-1,10);
	return 0;
}