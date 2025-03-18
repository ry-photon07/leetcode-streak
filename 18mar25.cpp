#include <iostream>

using namespace std;

class Solution {
    public:
        int longestNiceSubarray(vector<int>& nums) {
    
    
            int n=nums.size();
    
            int i=0;
            int j=0;
    
            int mx=1;
    
            int currentsum=0;
            int xorsum=0;
    
            while(j<n){
    
                //calculation
                currentsum+=nums[j];
                xorsum ^=nums[j];
    
                if(currentsum==xorsum){
                    mx=max(mx,j-i+1);
                    j++;
                }
    
                else{
                    while(currentsum!=xorsum){
                        currentsum-=nums[i];
                        xorsum^=nums[i];
                        i++;
                    }
                    j++;
                }
    
            }
    
            return mx;
            
        }
    };