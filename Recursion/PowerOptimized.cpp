// ABIR HOWLADER (Next_U)

#include <bits/stdc++.h>
using namespace std;

#define int long long
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define endl '\n'
#define frr(w, n) for (int i = w; i < n; i++)

const int MOD = 1e9 + 7;
const int N = 1e6 + 5;
int powOptimized(int a,int b){
    if(b==0) return 1;
    int ans =a;
    if(b%2==1){
    return ans*=powOptimized(a,b-1);
    }
    if(b%2==0){
        int half=powOptimized(a,b/2);
        return half*half;
    }
}
void Next_U()
{
cout<<powOptimized(2,4)<<endl;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

        Next_U();

    return 0;
}
