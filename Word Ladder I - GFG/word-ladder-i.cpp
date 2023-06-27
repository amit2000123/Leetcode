//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    int wordLadderLength(string startWord, string targetWord, vector<string>& words) {
        int m = words[0].size();
        set<string> s;
        for(auto i : words) s.insert(i);
        queue<pair<string,int>> q;
        q.push({startWord,1});
        
        int ans = 0;
        
        
        while(q.size() != 0){
            // int n = q.size();
            string str = q.front().first;
            int step = q.front().second;
            q.pop();
            // ans =  max(step,ans);
            if(str == targetWord) return step;
            
            for(int i=0;i<m;i++){
                char original = str[i];
                for(int j = 0;j<26;j++){
                    str[i] = 'a' + j;
                    
                    if(s.count(str) == 1){
                        q.push({str,step+1});
                        s.erase(str);
                    }
                    
                }
                str[i] = original;
            }
            
        }
        return 0;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<string>wordList(n);
		for(int i = 0; i < n; i++)cin >> wordList[i];
		string startWord, targetWord;
		cin >> startWord >> targetWord;
		Solution obj;
		int ans = obj.wordLadderLength(startWord, targetWord, wordList);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends