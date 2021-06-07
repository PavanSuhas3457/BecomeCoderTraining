#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,max1,max2;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++) {
		cin>>arr[i];
	}
	max1 = max2 = arr[0];
	for(int i=0;i<n;i++) {
		if(arr[i] > max1) {
			max1 = arr[i];
		}
	}
	for(int i=0;i<n;i++) {
		if((arr[i]!=max1) && (arr[i] > max2)) {
			max2 = arr[i];
		}
	}
	cout<<"First Largest Element is "<<max1<<endl;
	cout<<"Second Largest Element is "<<max2<<endl;
}
