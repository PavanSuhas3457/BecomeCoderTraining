#include<bits/stdc++.h>
using namespace std;
bool isPrime(int number,int i) {
	if(number<=2) {
		return (number==2)?true:false;
	}
	if(number%i==0) {
		return false;
	}
	if(i*i>number) {
		return true;
	}
	return isPrime(number,i+1);
}
int main() {
	int num;
	cin>>num;
	if(isPrime(num,2)) {
		cout<<"Prime Number";
	}
	else {
		cout<<"Not a Prime Number";
	}
}
