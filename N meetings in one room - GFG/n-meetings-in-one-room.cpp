//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    
    static bool cmp(pair<int,int> &i , pair<int,int> &j){
        return i.second < j.second;
    }
    
    int maxMeetings(int start[], int end[], int n)
    {
        vector<pair<int,int>> arr;
        for(int i=0;i<n;i++){
            arr.push_back({start[i] , end[i]});
        }
        
        sort(arr.begin() , arr.end() , cmp);
        int cnt = 1;
        int last = arr[0].second;
        for(int i=0;i<n-1;i++){
            if(last < arr[i+1].first){
                cnt++;
                last = arr[i+1].second;
            }
        }
        return cnt;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int start[n], end[n];
        for (int i = 0; i < n; i++) cin >> start[i];

        for (int i = 0; i < n; i++) cin >> end[i];

        Solution ob;
        int ans = ob.maxMeetings(start, end, n);
        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends