//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int CheapestFLight(int n, vector<vector<int>>& flights, int src, int dst, int k)  {
        vector< pair<int,int> > adj[n];
        for(auto i : flights){
            adj[i[0]].push_back( {i[1] , i[2] } );
        }
        
        queue<pair<int,pair<int,int>>> q;    // {stops , node , dist}
        q.push({0, {src , 0}});
        vector<int> dist(n,1e9);
        dist[src] = 0;
        
        while(q.size() != 0){
            int stops = q.front().first;
            int node = q.front().second.first;
            int d = q.front().second.second;
            q.pop();
            
            
            if(stops > k) continue;
            
            for(auto i : adj[node]){
                int adjnode = i.first;
                int cost = i.second;
                if(d + cost < dist[adjnode] && stops <= k){
                    dist[adjnode] = d + cost;
                    q.push( { stops+1 , {adjnode , d + cost } }  );
                }
            }
        }
        
        if(dist[dst] == 1e9) return -1;
        return dist[dst];
        
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n; cin>>n;
        int edge; cin>>edge;
        vector<vector<int>> flights;
        
        for(int i=0; i<edge; ++i){
            vector<int> temp;
            for(int j=0; j<3; ++j){
                int x; cin>>x;
                temp.push_back(x);
            }
            flights.push_back(temp);
        }
        
        int src,dst,k;
        cin>>src>>dst>>k;
        Solution obj;
        cout<<obj.CheapestFLight(n,flights,src,dst,k)<<"\n";
    }
    return 0;
}
// } Driver Code Ends