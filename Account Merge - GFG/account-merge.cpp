//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class DisjointSet{
    public:
        vector<int>size , parent;
        DisjointSet(int n){
            size.resize(n+1,1);
            parent.resize(n+1);
            for(int i=0;i<=n;i++){
                parent[i] = i;
            }
        }
        
        int findUPar(int node){
            if(node == parent[node]) return node;
            return parent[node] = findUPar(parent[node]);
        }
        
        void unionBySize(int u , int v){
            int ulp_u = findUPar(u);
            int ulp_v = findUPar(v);
            if(ulp_u == ulp_v) return;
            if(size[ulp_u] < size[ulp_v]){
                parent[ulp_u] = ulp_v;
                size[ulp_v] += size[ulp_u];
            }
            else{
                parent[ulp_v] = ulp_u;
                size[ulp_u] += size[ulp_v];
            }
        }
};


class Solution{
  public:
  
    vector<vector<string>> accountsMerge(vector<vector<string>> &accounts) {
        unordered_map<string , int> m;
        int n = accounts.size();
        DisjointSet ds(n);
        for(int i=0;i<n;i++){
            for(int j=1;j<accounts[i].size();j++){
                string mail = accounts[i][j];
                if(m.find(mail) == m.end()){
                    m[mail] = i;
                }
                else{
                    ds.unionBySize(i , m[mail]);
                }
            }
        }
        
        vector<string> merge[n];
        for(auto i : m){
            string mail = i.first;
            int num = i.second;
            int p = ds.findUPar(num);
            merge[p].push_back(mail);
        }
        
        vector<vector<string>> ans;
        for(int i=0;i<n;i++){
            if(merge[i].size() == 0) continue;
            vector<string> temp;
            temp.push_back(accounts[i][0]);
            sort(merge[i].begin() , merge[i].end());
            for(auto it : merge[i]){
                temp.push_back(it);
            }
            ans.push_back(temp);
            
        }
        sort(ans.begin(),ans.end());
        return ans;
        
    }
};


//{ Driver Code Starts.
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    vector<vector<string>> accounts;

    for (int i = 0; i < n; i++)
    {
      vector<string> temp;
      int x;
      cin >> x;

      for (int j = 0; j < x; j++)
      {
        string s1;
        cin >> s1;
        temp.push_back(s1);
      }
      accounts.push_back(temp);
    }

    Solution obj;
    vector<vector<string>> res = obj.accountsMerge(accounts);
    sort(res.begin(), res.end());
    cout << "[";
    for (int i = 0; i < res.size(); ++i)
    {
      cout << "[";
      for (int j = 0; j < res[i].size(); j++)
      {
        if (j != res[i].size() - 1)
          cout << res[i][j] << ","
               << " ";
        else
          cout << res[i][j];
      }
      if (i != res.size() - 1)
        cout << "], " << endl;
      else
        cout << "]";
    }
    cout << "]"
         << endl;
  }
}
// } Driver Code Ends