#include<bits/stdc++.h>
using namespace std;
int factorial(int number) {
	if(number==1)
		return 1;
	return number*factorial(number-1);
}
int main() {
	int num;
	cin>>num;
	int fact = factorial(num);
	cout<<"Factorial of given Number using recursion is "<<fact;
}
