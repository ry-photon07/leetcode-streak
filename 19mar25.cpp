#include <iostream>

using namespace std;

class Solution {
    public:
        int minOperations(vector<int>& nums) {
    
            int i=0;
            int j=0;
    
            int n=nums.size();
    
            int k=0;
    
            
    
            while(j<n){
    
             
    
                
    
                if(j-i+1<3){
                    j++;
                    
                }
    
                else if(j-i+1==3){
                
                    if(nums[i]==1){
                        i++;
                        j++;
                       
                    }
                   
                    else{
                        k++;
                        nums[i]=!nums[i];
                        nums[i+1]=!nums[i+1];
                        nums[i+2]=!nums[i+2];
    
                        i++;
                        j++;
                    }
    
                    
                }
            }
    
            if(nums[i]==0 || nums[i+1]==0) return -1;
    
           
    
          
    
            return k;
            
        }
    };