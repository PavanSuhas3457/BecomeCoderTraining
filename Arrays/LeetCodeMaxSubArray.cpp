#include<bits/stdc++.h>
using namespace std;
class Solution {
	public:
		int maxSubArray(vector<int>& nums) {
        	int res = INT_MIN;
        	for(int i=0;i<nums.size();i++) {
            	for(int j=i;j<nums.size();j++) {
                	int sum=0;
                	for(int k=i;k<=j;k++) {
                    	sum+=nums[k];
                	}
                res = max(sum,res);
            }
        }
        return res;
    }
};
int main() {
	int num,size;
	cin>>size;
	Solution so;
	vector<int> nums;
	for(int i=0;i<size;i++) {
		cin>>num;
		nums.push_back(num);
	}
	cout<<so.maxSubArray(nums);
}
