#include<bits/stdc++.h>
using namespace std;
int main() {
	int cap,index=-1,range;
	cin>>cap;
	int arr[cap];
	cin>>range;
	if(range>cap) {
		cout<<"Numbers are exceeded the Capacity of an Array!";
	}
	else {
		for(int i=0;i<range;i++) {
		cin>>arr[i];
		}
		int ele;
		cin>>ele;
		for(int i=0;i<range;i++) {
			if(ele==arr[i]) {
				index = i;
				break;
			}
		}
		if(index==-1) {
			cout<<"No Element Exits in this Array";
		}
		else {
			range--;
			for(int i=index;i<range;i++) {
				arr[i]=arr[i+1];
			}
			for(int i=0;i<range;i++) {
				cout<<arr[i]<<" ";
			}
		}
	}
}
