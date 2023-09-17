//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{   
public:


    // //// Brute 

    // int getPairsCount(int arr[], int n, int k) {
    //     int cnt = 0;
    //     for(int i=0;i<n;i++){
    //         for(int j=i+1;j<n;j++){
    //             if(arr[i] + arr[j] == k) cnt++;
    //         }
    //     }
    //     return cnt;
    // }
    
    
    
    // int getPairsCount(int arr[], int n, int k) {
    //     sort(arr,arr+n);
    //     int cnt = 0;
    //     int left = 0 , right = n-1;
    //     while(left < right){
    //         if(arr[left] + arr[right] == k){
    //             cnt++;
    //             left++;
    //         } 
    //         else if(arr[left] + arr[right] > k){
    //             right--;
    //         }
    //         else{
    //             left++;
    //         }
    //     }
    //     return cnt;
        
    // }
    
    
    
    
    // int getPairsCount(int arr[], int n, int k) {
    //     unordered_map<int,int> m;
    //     int cnt = 0;
    //     for(int i=0;i<n;i++){
    //         if(m.find(k - arr[i]) != m.end()){
    //             cnt += m[k-arr[i]];
    //         }
            
    //         m[arr[i]]++;
            
    //     }
    //     return cnt;
        
        
    // }
    
    
    
    
    int getPairsCount(int arr[], int n, int k) {
        int cnt = 0;
        int i = 0;
        int j = n-1;
        
        sort(arr,arr+n);
        
        while(i < j ){
            if(arr[i] + arr[j] == k){
                cnt++;
                int m = i + 1;
                while(m < j && arr[m] + arr[j] == k){
                    cnt++;
                    m++;
                }
                j--;
            }
            
            else if(arr[i] + arr[j] > k) j--;
            else i++;
        }
        return cnt;
        
    }
    
    
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getPairsCount(arr, n, k);
        cout << ans << "\n";
    }
    
    return 0;
}
// } Driver Code Ends