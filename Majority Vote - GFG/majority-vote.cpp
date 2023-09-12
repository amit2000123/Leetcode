//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
//   Brute
    // vector<int> Solve(int n, vector<int>& arr) {
        
    //     vector<int> ans;
    //     for(int i=0;i<n;i++){
    //         if(ans.size() == 0 || ans[0] != arr[i]){
    //             int c = 0;
    //             for(int j=0;j<n;j++){
    //                 if(arr[i] == arr[j]) c++;
    //             }
    //             if(c > n/3) ans.push_back(arr[i]);
    //             if(ans.size() == 2) break;
    //         }
    //     }
    //     sort(ans.begin(),ans.end());
    //     if(ans.size() == 0) return {-1};
    //     return ans;
    // }
    
    
    
    
    //  // Better
    
    
    
    // vector<int> Solve(int n, vector<int>& arr) {
        
    //     vector<int> ans;
    //     unordered_map<int,int> m;
        
    //     for(int i=0;i<n;i++){
    //         m[arr[i]]++;
    //         if(m[arr[i]] == n/3 + 1) ans.push_back(arr[i]);
    //     }
    //     sort(ans.begin(),ans.end());
    //     if(ans.size() == 0) return {-1};
    //     return ans;
    // }
    
    
    
    // Optimal
    
        
    vector<int> Solve(int n, vector<int>& arr) {
        
        vector<int> ans;
        // int n = arr.size();
        int cnt1 = 0 , cnt2 = 0;
        int el1 , el2;
        for(int i=0;i<n;i++){
            if(cnt1 == 0 && el2 != arr[i]){
                cnt1++;
                el1 = arr[i];
            }

            else if(cnt2 == 0 && el1 != arr[i]){
                cnt2++;
                el2 = arr[i];
            }

            else if(el1 == arr[i]){
                cnt1++;
            }

            else if(el2 == arr[i]){
                cnt2++;
            }

            else{
                cnt1--;
                cnt2--;
            }

        }

        int c1 = 0  , c2 = 0;
        for(int i=0;i<n;i++){
            if(el1 == arr[i]) c1++;
            if(el2 == arr[i]) c2++;
        }
        if(c1 > n/3) ans.push_back(el1);
        if(c2 > n/3)ans.push_back(el2);
        sort(ans.begin() , ans.end());
        if(ans.size() == 0) return {-1};
        return ans;
    }
    
    
    
    
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a;
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            a.push_back(x);
        }
        Solution obj;

        vector<int> res = obj.Solve(n, a);

        for (auto x : res) cout << x << " ";

        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends