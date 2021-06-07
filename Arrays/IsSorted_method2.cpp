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
	for(int i=0;i<n-1;i++) {
		if(arr[i] > arr[i+1]) {
			flag = false;
			break;
		}
	}
	if(flag) {
		cout<<"Sorted";
	}
	else {
		cout<<"Not Sorted";
	}
}
