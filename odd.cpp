#include<bits/stdc++.h>
using namespace std;
int main() {
	int num,rem,flag=0,count=0;
	cin>>num;
	while(1) {
		rem = num%10;
		num = num/10;
		if(rem%2==0) {
			flag++;
		}
		else {
			count++;
		}
		if(num==0) {
			break;
		}
	}
	cout<<"Even:"<<flag<<endl;
	cout<<"Odd:"<<count<<endl;
}
