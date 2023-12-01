//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
public:

    int f(vector<int> &arr , long long dist , int n , int k){
        int cnt = 1 , last = arr[0];
        for(int i=1;i<n;i++){
            int d = arr[i] - last;
            if(d >= dist){
                cnt++;
                last = arr[i];
            }
        }
        return cnt >= k;
    }   

    int solve(int n, int k, vector<int> &arr) {
    
        sort(arr.begin() , arr.end());
        // int n = arr.size();
        long long low = 0 , high = arr[n-1] - arr[0];
        long long ans = INT_MIN;
    
        while(low <= high){
            long long mid = (low + high) / 2;
            if( f(arr , mid , n , k) == true){
                ans = max(ans , mid);
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        // Input

        int n, k;
        cin >> n >> k;

        vector<int> stalls(n);
        for (int i = 0; i < n; i++) {
            cin >> stalls[i];
        }
        // char ch;
        // cin >> ch;

        Solution obj;
        cout << obj.solve(n, k, stalls) << endl;

        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}
// } Driver Code Ends