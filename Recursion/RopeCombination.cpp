#include<bits/stdc++.h>
using namespace std;
int res=0;
int combination(int ind,int n,int N,vector<int> &comb,int arr[]) {
	int res1;
	if(ind == n) {
		if(N == 0) {
			res1 = comb.size();
			res = max(res,res1);
		}
	}
	else {
		if(arr[ind]<=N) {
			comb.push_back(arr[ind]);
			combination(ind,n,N-arr[ind],comb,arr);
			comb.pop_back();
		}
		combination(ind+1,n,N,comb,arr);
	}
	return res;
}
int main() {
	int n,N;
	cin>>n>>N;
	int arr[n];
	for(int i=0;i<n;i++) {
		cin>>arr[i];
	}
	vector<int> vec;
	int ans = combination(0,n,N,vec,arr);
	cout<<ans;
}
