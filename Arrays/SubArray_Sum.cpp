#include<bits/stdc++.h>
using namespace std;
int res=0;
void PrintSubArrays(int arr[],int n,int target) {
	int size = n;
	for(int i=0;i<size;i++) {
		for(int j=i;j<=size;j++) {
			int sum=0;
			for(int k=i;k<j;k++) {
				sum+=arr[k];
			}
			if(sum==target) {
				cout<<"Yes";
				break;
			}
		}
	}
}
int main() {
	int n,target;
	cin>>n>>target;
	int arr[n];
	for(int i=0;i<n;i++) {
		cin>>arr[i];
	}
	PrintSubArrays(arr,n,target);
}
