//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
    public:
    string findOrder(string dict[], int n, int k) {
        vector<int> adj[k];
        vector<int> indeg(k,0);
        
        for(int i=0;i<n-1;i++){
            string s = dict[i];
            string t = dict[i+1];
            int j = 0 ;
            while(j < min(s.size() , t.size())){
                if(s[j] != t[j]){
                    adj[s[j] - 'a'].push_back(t[j] - 'a');
                    indeg[t[j]-'a']++;
                    break;
                }
                else{
                    j++;
                }
            }
        }
        // for(int i=0;i<k;i++){
        //     for(auto node : adj[i]){
        //         indeg[node]++;
        //     }
        // }
        queue<int> q;
        for(int i=0;i<k;i++){
            if(indeg[i] == 0){
                q.push(i);
            }
        }
        string s;
        while(q.size() != 0){
            int node = q.front();
            // cout<<node<<endl;
            q.pop();
            s .push_back(node + 'a');
            for(auto adjnode : adj[node]){
                indeg[adjnode]--;
                if(indeg[adjnode] == 0){
                    q.push(adjnode);
                }
            }
        }
        // cout<<s<<endl;
        return s;
        
        
    }
};

//{ Driver Code Starts.
string order;
bool f(string a, string b) {
    int p1 = 0;
    int p2 = 0;
    for (int i = 0; i < min(a.size(), b.size()) and p1 == p2; i++) {
        p1 = order.find(a[i]);
        p2 = order.find(b[i]);
        //	cout<<p1<<" "<<p2<<endl;
    }

    if (p1 == p2 and a.size() != b.size()) return a.size() < b.size();

    return p1 < p2;
}

// Driver program to test above functions
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        cin >> N >> K;
        string dict[N];
        for (int i = 0; i < N; i++) cin >> dict[i];
        
        Solution obj;
        string ans = obj.findOrder(dict, N, K);
        order = "";
        for (int i = 0; i < ans.size(); i++) order += ans[i];

        string temp[N];
        std::copy(dict, dict + N, temp);
        sort(temp, temp + N, f);

        bool f = true;
        for (int i = 0; i < N; i++)
            if (dict[i] != temp[i]) f = false;

        if(f)cout << 1;
        else cout << 0;
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends