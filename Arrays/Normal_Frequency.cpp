#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++) {
		cin>>arr[i];
	}
	int *maxi = max_element(arr,arr+n);
	int freq[*maxi+1]={0};
	for(int i=0;i<n;i++) {
		freq[arr[i]]++;
	}
	int visits=0,cust;
	for(int i=1;i<=*maxi;i++) {
		if(visits<freq[i]) {
			visits = freq[i];
			cust = i;
		}
	}
	cout<<"Customer ID is "<<cust<<" and his number of visits is "<<visits;
	return 0;
}
