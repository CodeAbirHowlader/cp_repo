// ABIR HOWLADER (Next_U)

#include <bits/stdc++.h>
using namespace std;

#define int long long
void pd(int n){
    if(n==0) return ;
   pd(n/10); //2 3 4 5 6 
    cout<<n%10<<endl;
    // pd(n/10); 6 5 4 3 2
}

void solve()
{
   int num=23456;
   pd(num);
//    while(num>0){
//     cout<<num%10<<endl;
//     num/=10;
//    }
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
   solve();

    return 0;
}
