#include <iostream>

using namespace std;

class Solution {
    public:
        bool check(vector<int>& ranks,long long  mid,long long cars){
            long long  done=0;
            for(long long  i=0;i<ranks.size();i++){
    
                long long  d=sqrt(mid/ranks[i]);
                done+=d;
    
                if(done>=cars) return true;
    
            }
    
            return false;
        }
        long long repairCars(vector<int>& ranks, int cars) {
    
            
    
            long long start=1;
            long long  end=(long long )*min_element(ranks.begin(),ranks.end())*cars*cars;
    
            long long  ans=end;
    
            int n=ranks.size();
    
            while(start<=end){
                long long  mid=start+(end-start)/2;
                
                bool a=check(ranks,mid,cars);
    
                if(a){
                    ans=min(ans,mid);
                    end=mid-1;
                }
                else{
                    start=mid+1;
                }
            }
    
            // int a=check(ranks,50,cars);
    
            // return a;
    
            return ans;
    
            
            
        }
    };