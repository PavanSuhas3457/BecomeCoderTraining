#include<bits/stdc++.h>
using namespace std;
int fibo(int number) {
	if(number==1)
		return 0;
	else if ((number==2) || (number==3)) 
		return 1;
	return fibo(number-1)+fibo(number-2);
}
int main() {
	int num;
	cin>>num;
	int fib_series = fibo(num);
	cout<<"The Sum of Fibonacci Series obtained in the Recursion is "<<fib_series;
}
