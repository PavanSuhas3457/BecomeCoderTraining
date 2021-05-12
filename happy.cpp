#include<bits/stdc++.h>
using namespace std;
int main() {
	int num,rem,res=0;
	cin>>num;
	while(num>9) {
		while(num!=0) {
			rem = num%10;
			res = res + (rem*rem);
			num = num/10;
		}
		num = res;
		res = 0;
	}
	if(num==1) {
		cout<<"Happy";
	}
	else {
		cout<<"Not Happy";
	}
}
