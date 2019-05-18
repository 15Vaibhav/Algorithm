
//fibo without memo
    #include <iostream>
    using namespace std;
    int fib(int n){
    	int sum =0;
    	if(n==1 || n==0){
    		return  n;
    	}
    	sum = fib(n-1)+fib(n-2);
    	return sum;
     
     
     
    }
     
    int main() {
    	// your code goes here
    	int result = fib(6);
    	cout<<result;
     
    	return 0;
    }

//fibo with memo

#include <iostream>
using namespace std;
int F[51];
int fib(int n){
	if(F[n]!=-1){
		return  F[n];
	}
	F[n]= fib(n-1)+fib(n-2);
	return F[n];
	}

int main() {
	// your code goes here
	int i=0;
	for(i=0;i<50;i++){
		F[i]=-1;
	}
	F[0];
	F[1]=1;
	int number =0;
	cin>>number;
	int result = fib(number);
	cout<<result;
	return 0;
}
