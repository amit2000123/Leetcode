//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
	bool isPossible(int n, vector<pair<int, int> >& pre) {
	    int m = pre.size();
	    vector<int> adj[n];
	    for(int i=0;i<m;i++){
	        int f = pre[i].first;
	        int s = pre[i].second;
	        adj[f].push_back(s);
	    }
	    
	    vector<int> indeg(n,0);
	    for(int i=0;i<n;i++){
	        for(auto adjnode : adj[i]){
	            indeg[adjnode]++;
	        }
	    }
	    queue<int>q;
	    for(int i=0;i<n;i++){
	        if(indeg[i] == 0){
	            q.push(i);
	        }
	    }
	    vector<int> ans;
	    while(q.size() != 0){
	        int node = q.front();
	        q.pop();
	        ans.push_back(node);
	        for(auto adjnode : adj[node]){
	            indeg[adjnode]--;
	            if(indeg[adjnode] == 0){
	                q.push(adjnode);
	            }
	        }
	    }
	    if(ans.size() < n) return false;
	    return true;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
    	int N, P;
        vector<pair<int, int> > prerequisites;
        cin >> N;
        cin >> P;
        for (int i = 0; i < P; ++i) {
            int x, y;
            cin >> x >> y;
            prerequisites.push_back(make_pair(x, y));
        }
        // string s;
        // cin>>s;
        Solution ob;
        if (ob.isPossible(N, prerequisites))
            cout << "Yes";
        else
            cout << "No";
        cout << endl;
	}
	return 0;
}
// } Driver Code Ends