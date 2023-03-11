//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
public:
    vector<int> findMaxRow(vector<vector<int>> mat, int n) {
        int maxcount =0, maxrow=0;
        for(int i=0;i<n;i++){
           int count = 0;
           int index = lower_bound(mat[i].begin(),mat[i].end(),1) - mat[i].begin();
           count = n-1-index +1;
           if(count > maxcount){
               maxcount = count;
               maxrow = i;
           }
           
        }
        vector<int>v = {maxrow,maxcount};
        return v;
    }
};

//{ Driver Code Starts.

int main() {
	int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<vector<int>> arr(n, vector<int> (n));
        for(int i = 0; i < n; i++)
            for(int j = 0; j < n; j++)
                cin >> arr[i][j];
        Solution obj;
        vector<int> ans = obj.findMaxRow(arr, n);
        for(int val : ans) {
            cout << val << " ";
        }
        cout << endl;
    }
}
// } Driver Code Ends