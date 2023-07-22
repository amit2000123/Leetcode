//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

// User function Template for C++
class Solution {
  public:
    int findCity(int n, int m, vector<vector<int>>& edges,
                 int dt) {
                    //  vector<vector<int>> adj(n,vector<int>(n,1e9));
                    //  for(int i=0;i<n;i++){
                    //      for(int j=0;j<n;j++){
                    //          if(i==j)adj[i][j] = 0;
                    //      }
                    //  }
                     
                    //  for(auto i : edges){
                    //      adj[i[0]][i[1]] = i[2];
                    //      adj[i[1]][i[0]] = i[2];
                    //  }
                     
                    //  for(int via = 0;via<n;via++){
                    //      for(int i=0;i<n;i++){
                    //          for(int j=0;j<n;j++){
                    //              if(adj[i][via] != 1e9 && adj[via][j] != 1e9)
                    //              adj[i][j] = min(adj[i][j] , adj[i][via] + adj[via][j]);
                    //          }
                    //      }
                         
                    //  }
                     
                    //  int mini = INT_MAX;
                    //  int city;
                    //  for(int i=0;i<n;i++){
                    //      int count = 0;
                    //      for(int j=0;j<n;j++){
                    //          if( adj[i][j] != 0 && adj[i][j] <= dt){
                    //              count++;
                    //          }
                    //      }
                    //     //  maxi = max(maxi,count);
                    //     if(count <= mini){
                    //         mini = count;
                    //         city = i;
                    //     }
                    //  }
                     
                    // //  for(int i=0;i<n;i++){
                    // //      for(int j=0;j<n;j++){
                    // //          cout<<adj[i][j]<<" ";
                    // //      }
                    // //      cout<<endl;
                    // //  }
                     

                     
                    //  return city;
                    
                    vector<vector<int>> dist(n,vector<int>(n,1e9));
                    vector<pair<int,int>> adj[n];
                    for(auto i : edges){
                        adj[i[0]].push_back({i[1] , i[2]});
                        adj[i[1]].push_back({i[0] , i[2]});
                    }
                    priority_queue<pair<int,int> , vector<pair<int,int>> , greater<pair<int,int>>> pq;
                    
                    for(int src = 0;src<n;src++){
                        pq.push({0,src});
                        dist[src][src] = 0;
                        while(pq.size() != 0){
                            int d = pq.top().first;
                            int node = pq.top().second;
                            pq.pop();
                            for(auto i : adj[node]){
                                int adjnode = i.first;
                                int dis = i.second;
                                if(d + dis < dist[src][adjnode]){
                                    dist[src][adjnode] = d + dis;
                                    pq.push({d+dis , adjnode});
                                }
                            }
                        }
                    }
                    
                    int mincity ;
                    int mini = 1e9;
                    for(int i=0;i<n;i++){
                        int count = 0;
                        for(int j=0;j<n;j++){
                            if(dist[i][j] <= dt ){
                                count++;
                            }
                        }
                        if(count <= mini){
                            mini = count;
                            mincity = i;
                        }
                    }
                    return mincity;

    


                     
                 }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> adj;
        // n--;
        for (int i = 0; i < m; ++i) {
            vector<int> temp;
            for (int j = 0; j < 3; ++j) {
                int x;
                cin >> x;
                temp.push_back(x);
            }
            adj.push_back(temp);
        }

        int dist;
        cin >> dist;
        Solution obj;
        cout << obj.findCity(n, m, adj, dist) << "\n";
    }
}

// } Driver Code Ends