#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,count;
	cin>>n;
	for(int i=2;i<=n;i++) {
		count =1;
		for(int j=2;j<=sqrt(i);j++) {
			if(i%j==0) {
				count=0;
			}
		}
		if(count) {
			cout<<i<<" ";
		}
	}
}
