#include <iostream>
#include <cstring>
#include <algorithm>    // std::max
using namespace std;

int LCS(char *x,char *y,int m,int n){
	if(m==0||n==0){
		return 0;
	}
	if(x[m-1]==y[n-1]){
		return LCS(x,y,m-1,n-1)+1;
	}
	return (std::max(LCS(x,y,m-1,n),LCS(x,y,m,n-1)) );
}


int main() {
	char x[]="ADEF";
	char y[]="ABCDEEF";
	int m = strlen(x);
	int n = strlen(y);
	int result = LCS(x,y,m,n);
	cout<<result;
	return 0;
}