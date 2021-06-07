#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	bool flag = true;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++) {
		cin>>arr[i];
	}
	for(int i=0;i<n;i++) {
		for(int j=i+1;j<n;j++) {
			if(arr[i] > arr[j]) {
				flag = false;
				break;
			}
		}
		if(!flag) {
			cout<<"Not Sorted";
			break;
		}
	}
	if(flag) {
		cout<<"Sorted";
	}
}
