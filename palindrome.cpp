#include<bits/stdc++.h>
using namespace std;
int main() {
	int num,rem,res=0;
	cin>>num;
	int temp = num;
	while(1) {
		rem = num%10;
		res = (res*10) + rem;
		num = num/10;
		if(num==0) {
			break;
		}
	}
	if(temp == res) {
		cout<<"Palindrome";
	}
	else {
		cout<<"Not Palindrome";
	}
}
