#include<bits/stdc++.h>
using namespace std;
int main() {
	int num,count=1;
	cin>>num;
	for(int i=2;i<=num/2;i++) {
		if(num%i==0) {
			cout<<"Not Prime";
			count=0;
			break;
		}
	}
	if(count) {
		cout<<"Prime";
	}
}
