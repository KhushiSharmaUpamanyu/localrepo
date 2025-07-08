class Solution {
  public:
    int countTriplets(vector<int> &arr, int target) {
        int n=arr.size(); int cnt=0;
        for(int i=0;i<n-2;i++){
            int l=i+1; int r=n-1;
            while(l<r){
                int s=arr[l]+arr[r]+arr[i];
                if(s==target){
                    if(arr[l]==arr[r]){
                        int m=r-l+1;
                        cnt+= (m*(m-1))/2;
                        break;
                       
                       
                    }//all possiblenumbers between them are same so amny pairs possible 
                
                   else {
                       int lfreq=1; int rfreq=1; 
                       while(l+1 && arr[l+1]==arr[l]){
                           lfreq++; l++;
                       }
                      
                      
                   while(l<r-1 && arr[r-1]==arr[r]){
                       rfreq++; r--;
                   }
                   cnt+=lfreq*rfreq;
                   l++; r--;
                }}
                else if(s>target){
                    r--;
                }
                 else if(s<target){
                    l++;
                }
            }
        }return cnt;
    }
};
