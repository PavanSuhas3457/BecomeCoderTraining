#include<bits/stdc++.h>
using namespace std;
int dp[100005];
int factorial(int number) {
	if(dp[number] != -1) 
		return dp[number];
	else if (number <= 1){
		dp[number] = 1;
		return dp[number];
	}
	dp[number] = number*factorial(number-1);
	return dp[number];
}
int main() {
	int num,num1;
	cin>>num;
	num1 = num;
	for(int i=0;i<num;i++) {
		dp[i] = -1;
	}
	while(num>=0) {
		cout<<factorial(num)<<endl;
		cin>>num;
		if(num > num1) {
			for(int i = num1+1;i<=num;i++) {
				dp[i] = -1;
			}
		}
	}
}
