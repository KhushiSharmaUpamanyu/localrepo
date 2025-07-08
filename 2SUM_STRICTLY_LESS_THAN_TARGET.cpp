// User function Template for C++
class Solution {
  public:
    int countPairs(vector<int> &arr, int target) {
        // Your code here
        sort(arr.begin(),arr.end()); int n=arr.size();
        int l=0; int cnt=0;   int r=n-1;
        while(l<r){
         
            if(arr[l]+arr[r]>=target){
                r--;
            }
            else if(arr[l]+arr[r]<target){
                cnt+= r-l;
                l++;
                
            }
        }return cnt;
    }
};
