//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    //You need to complete this fucntion
    
    long long power(int x,int n)
    {
        long long mod = 1e9 + 7;
       long long ans = 1;
    long long nn = n;
    // if(nn < 0 ){
    //     nn = (long long)(-1) * nn;
    // } 
    while(nn != 0){
        if(nn % 2 == 1){
            ans = ((long long)(ans % mod) * (x% mod)) % mod;
            nn = nn-1;
        }
        else{
            x = ((long long)((x % mod) * (x% mod))) % mod;
            nn = nn / 2;
        }
    }
    // if(n < 0) ans = (double)(1) / (double)(ans);
    return ans  % mod;
        
    }

};

//{ Driver Code Starts.

// compute reverse of a number 
long long rev(long long n)
{
    long long rev_num = 0;
     while(n > 0) 
      { 
        rev_num = rev_num*10 + n%10; 
        n = n/10; 
      } 
      return rev_num;
}




int main()
{
    int T;
    cin>>T;//testcases
    
    while(T--)
    {
        long long N;
        cin>>N;//input N
        
        long long R = 0; 
        
        // reverse the given number n
        R = rev(N);
        Solution ob;
        //power of the number to it's reverse
        long long ans =ob.power(N,R);
        cout << ans<<endl;
    }
}
// } Driver Code Ends