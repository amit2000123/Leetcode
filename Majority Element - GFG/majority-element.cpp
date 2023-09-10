//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    // int majorityElement(int arr[], int n)
    // {
        
    //     for(int i=0;i<n;i++){
    //         int cnt = 0;
    //         for(int j=0;j<n;j++){
    //             if(arr[i] == arr[j]){
    //                 cnt++;
    //             }
    //         }
    //         if(cnt > (n/2)) return arr[i];
    //     }
    //     return -1;
        
    // }
    
    
    
    // Better

    int majorityElement(int arr[], int n)
    {
        
        unordered_map<int,int> m;
        for(int i=0;i<n;i++) m[arr[i]]++;
        for(auto i : m){
            if(i.second > n/2) return i.first;
        }
        return -1;
        
    }    
    
};

//{ Driver Code Starts.

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.majorityElement(arr, n) << endl;
    }

    return 0;
}

// } Driver Code Ends