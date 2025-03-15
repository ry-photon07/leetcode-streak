#include <iostream>

using namespace std;

class Solution {
    public:
        // make the fuction for checking the robbery is successful for that number or not
    
        bool check(vector<int> &nums,int mid,int k){
    
            int n=nums.size();
    
            int rob=0;
    
            for(int i=0;i<n;i++){
    
                if(nums[i]<=mid){
                    rob++;
                    i++;
                }
                if(rob==k){
                    return true;
                }
    
    
            }
    
            return false;
        }
        int minCapability(vector<int>& nums, int k) {
    
    
            // just doing a basic binary seach on answers that a current number is possible or not after calulation the range of answers
    
            int n=nums.size();
    
            int mx=INT_MIN;
            int mn=INT_MAX;
    
            for(int i=0;i<n;i++){
    
                if(nums[i]>mx){
                    mx=nums[i];
                }
                
                if(nums[i]<mn){
                    mn=nums[i];
                }
            }
            
    
            int mincap=INT_MAX;
    
            int start=mn;
            int end=mx;
    
            while(start<=end){
    
                int mid=start+(end-start)/2;
    
                bool a=check(nums,mid,k);
    
                if(a){
                    mincap=min(mincap,mid);
                    end=mid-1;
                }
                else{
                    start=mid+1;
                }
            }
    
            return mincap;
    
        }
    };