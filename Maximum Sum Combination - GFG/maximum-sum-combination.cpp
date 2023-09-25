//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> maxCombinations(int n, int k, vector<int> &a, vector<int> &b) {
        // vector<int> temp;
        // int sum = 0;
        // for(int i=0;i<n;i++){
             
        //     for(int j=0;j<n;j++){
        //         sum +=( a[i] + b[j]);
        //         temp.push_back(sum);
        //         sum=0;
        //     }
        // }
        // sort(temp.begin(),temp.end());
        // // for(int i=0;i<temp.size();i++) cout<<temp[i]<<" ";
        // // cout<<endl;
        // vector<int> ans;
        // for(int i=0;i<k;i++){
        //     int size = temp.size();
        //     ans.push_back(temp[size-1]);
        //     temp.pop_back();
        // }
        // return ans;
        
        
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        priority_queue<pair<int,pair<int,int>>> pq;
        pq.push( {a[n-1] + b[n-1] , {n-1,n-1}} );
        set<pair<int,int>> st;
        st.insert({n-1,n-1});
        vector<int> ans;
        
        while(k != 0){
            // pair<int,pair<int,int>> temp = pq.top();
            
            int sum = pq.top().first;
            int f = pq.top().second.first;
            int s = pq.top().second.second;
            pq.pop();
            ans.push_back(sum);
            
            if(st.find({f-1,s}) == st.end()){
                pq.push({a[f-1] + b[s] , {f-1,s}});
                st.insert({f-1,s});
            }
            
            if(st.find({f,s-1}) == st.end()){
                pq.push({a[f] + b[s-1] , {f,s-1}});
                st.insert({f,s-1});
            }
            k--;
        }
        return ans;
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        cin >> N >> K;

        vector<int> A(N), B(N);
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }
        for (int i = 0; i < N; i++) {
            cin >> B[i];
        }
        Solution obj;
        vector<int> ans = obj.maxCombinations(N, K, A, B);
        for (auto &it : ans) cout << it << ' ';
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends