//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function teamplate for C++

class Solution{
  public:
    vector<int> printClosest(int arr[], int brr[], int n, int m, int x) {
        vector<int> ans = {0,0};
        int l = 0 , r = m-1;
        int diff = INT_MAX;
        while(l < n && r >= 0){
            int sum = abs((arr[l] + brr[r]) - x);
            if(sum < diff){
                diff = sum ;
                ans[0] = arr[l];
                ans[1] = brr[r];
            }
            
            if(arr[l] + brr[r] < x){
                l++;
            }
            else{
                r--;
            }
            
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	int m,n,x;
	while(t--)
    {
        cin>>n>>m;
        int a[n],b[m];
        
        for(int i=0;i<n;i++)
            cin>>a[i];
            
        for(int i=0;i<m;i++)
            cin>>b[i];
            
        cin>>x;
        
        vector<int> ans;
        Solution ob;
        ans = ob.printClosest(a, b, n, m, x);
        cout << abs(ans[0] + ans[1] - x) << endl;
        
    }
    return 0;
}

// } Driver Code Ends