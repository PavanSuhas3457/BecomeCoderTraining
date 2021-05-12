#include<iostream>
using namespace std;
int main()
{
	int i,j,space,n;
	cin>>n;
	int arr[n][n];
	for(i=0;i<n;i++)
	{
		for(space=1;space<=n-i;space++)
			cout<<"  ";
		for(j=0;j<=i;j++)
		{
			if(i==j || j==0)
				arr[i][j]=1;
			else
				arr[i][j]=arr[i-1][j]+arr[i-1][j-1];
			cout<<arr[i][j]<<"   ";
		}
		cout<<endl;
	}
}
