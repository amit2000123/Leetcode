//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int finLength(int n, vector<int> c, vector<int> r) {
        // int i=0 , j=1;
        // int k = 0;
        // while(i < n){
        //     if(color[i] == color[j] && radius[i] == radius[j]){
        //         i = i+2;
        //         j = j+2;
        //     }
        //     else{
        //         i++;
        //         j++;
        //         k++;
        //     }
        // }
        // return k;
        stack<int> st;
        for(int i=0;i<n;i++){
            if(st.size() == 0 || c[i] != c[st.top()] || r[i] != r[st.top()] ){
                st.push(i);
            } 
            else{
                st.pop();
            }
        }
        return st.size();
        
    }
};


//{ Driver Code Starts.
int main() {

    int tt;
    cin >> tt;
    Solution sol;
    while (tt--) {

        int n;
        cin >> n;
        vector<int> color(n), radius(n);
        for (int i = 0; i < n; i++) cin >> color[i];
        for (int i = 0; i < n; i++) cin >> radius[i];
        int ans = sol.finLength(n, color, radius);
        cout << ans << "\n";
    }

    return 0;
}

// } Driver Code Ends