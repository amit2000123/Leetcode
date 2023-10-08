//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int lenOfLongSubarr(int arr[],  int n, int k) 
    { 
        int sum = 0;
        int maxi = 0;
        unordered_map<int ,int> m;
        
        for(int i=0;i<n;i++){
            sum += arr[i];
            if(sum == k) maxi = i + 1;
            
            int remain = sum - k;   ///  for searching x - k in map
            if(m.find(remain) != m.end()){
                int len = i - m[remain];
                maxi = max(maxi , len);
            }
            
            
            if(m.find(sum) == m.end()){   // zeros wale cases ko handle krne ke liye
                m[sum] = i;
            }
        }
        
        return maxi;
    } 

};

//{ Driver Code Starts.

int main() {
	//code
	
	int t;cin>>t;
	while(t--)
	{
	    int n, k;
	    cin>> n >> k;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution ob;
	   cout << ob.lenOfLongSubarr(a, n , k)<< endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends