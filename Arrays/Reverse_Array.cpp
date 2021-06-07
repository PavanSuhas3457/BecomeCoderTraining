#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,low,high;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++) {
		cin>>arr[i];
	}
	low = 0;
	high = n-1;
	while(low<high) {
		swap(arr[low],arr[high]);
		low++;
		high--;
	}
	cout<<"The Reversed Elements in an Array are"<<endl;
	for(int i=0;i<n;i++) {
		cout<<arr[i]<<" ";
	}
}
