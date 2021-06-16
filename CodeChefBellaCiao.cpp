#include <bits/stdc++.h>
using namespace std;
int main() {
	// your code goes here
	long long n,D,d,P,Q,rem,rem1,a,sum,dif;
	int test;
	cin>>test;
	while(test--)
	{
	    cin>>D>>d>>P>>Q;
	    a = P;
	    n = D/d;
	    dif = Q;
	    rem = D%d;
	    sum = d*((n*(2*a+(n-1)*dif))/2);
	    rem1 = rem*(a+n*dif);
	    cout<<sum+rem1<<endl;
	}
	return 0;
}
