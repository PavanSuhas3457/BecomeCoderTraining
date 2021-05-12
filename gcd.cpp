#include<bits/stdc++.h>
using namespace std;
int main() {
	int num1,num2;
	cin>>num1>>num2;
	while(1) {
		if(num1<num2) {
			swap(num1,num2);
		}
		num1 = num1%num2;
		if(num1==0) {
			cout<<num2;
			break;
		}
	}
	return 0;
}
