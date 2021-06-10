#include<bits/stdc++.h>
using namespace std;
void combination(int N,vector<int> &comb) {
	if(N!=0) {
		for(int i=1;i<=N;i++) {
			if(i==1) {
				comb.push_back(i);
				combination(N-i,comb);
				comb.pop_back();
			}
			else if(i==2) {
				comb.push_back(i);
				combination(N-i,comb);
				comb.pop_back();
			}
			else if(i==4) {
				comb.push_back(i);
				combination(N-i,comb);
				comb.pop_back();
			}
		}
	}
	else {
		for(auto it:comb) {
			cout<<it<<" ";
		}
		cout<<endl;
	}
}
int main() {
	int N;
	cin>>N;
	vector<int> ds;
	combination(N,ds);
}
