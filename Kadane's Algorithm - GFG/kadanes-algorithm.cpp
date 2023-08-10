//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    
    // Brute Approach
    // long long maxSubarraySum(int arr[], int n){
    //     long long maxi = -1e9 ;
        
    //     for(int i=0;i<n;i++){
    //         for(int j = i;j<n;j++){
    //             long long sum = 0;
    //             for(int k=i;k<=j;k++){
    //                 sum+=arr[k];
    //             }
    //             maxi = max(maxi,sum);
    //         }
    //     }
    //     return maxi;
        
    // }
    
    
    
    // Better Approach
    
    
    long long maxSubarraySum(int arr[], int n){
        long long maxi = INT_MIN , sum = 0;
        
        for(int i=0;i<n;i++){
            sum += arr[i];
           
            if(sum > maxi){
                maxi = sum;
            }
            if(sum < 0){
                sum = 0;
            }
            
        }
        return maxi;
        
    }
};

//{ Driver Code Starts.

int main()
{
    int t,n;
    
    cin>>t; //input testcases
    while(t--) //while testcases exist
    {
        
        cin>>n; //input size of array
        
        int a[n];
        
        for(int i=0;i<n;i++)
            cin>>a[i]; //inputting elements of array
            
        Solution ob;
        
        cout << ob.maxSubarraySum(a, n) << endl;
    }
}

// } Driver Code Ends