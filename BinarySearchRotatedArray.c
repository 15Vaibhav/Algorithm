#include <stdio.h>
 
void search(int a[],int s,int l){
	int x;
	x = (s+l)/2;
	printf("the middle term %d\n",x);
	if(a[x]<a[x+1]&&a[x]<a[x-1]){
		printf("%d number is ",a[x]);
	}
	else if(a[x-1]<a[x] && a[x-1]<a[l]){
		search(a,s,x-1);
	}
	else{
		search(a,x+1,l);
	}
 
}
int main(void) {
	int a[] = {8,9,1,2,3,4,5,6,7},l;
	l = sizeof(a)/sizeof(a[0]);
	search(a,0,l-1);
	return 0;
}
