// ABIR HOWLADER (Next_U)

#include <bits/stdc++.h>
using namespace std;

#define int long long
 vector<int>f(10,-1);
 int fibo(int n){
    // if(n==1) return  0;
    // if(n==2) return 1;
    // return  fibo(n-1)+fibo(n-2);

  //Memorization
  if(n==1) return  0;
    if(n==2) return 1;
    
    if(f[n]!=-1){
        return f[n];
    }
   f[n]=fibo(n-1)+fibo(n-2);
      return f[n];   
    
}
void solve(){
    vector<long long>testcase={1,2,3,4,5,6,7,8,9};
    for(auto &x: testcase){
        cout<<fibo(x)<<" ";

    }
    cout<<'\n';
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

  
    solve();


    return 0;
}
