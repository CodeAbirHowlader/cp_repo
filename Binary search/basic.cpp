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

void Next_U()
{
int n=15,value=72;

int a[]={3,6,14,23,29,38,44,54,59,64,72,80,87,92,96};
int high=n-1,low=0;
int ans;
while(low<=high){
    int mid=(high+low)/2;
    cout<<mid<<" ";
    if(a[mid]==value){
        ans= mid;
        break;
    }
    else if(a[mid]<value){
        low=mid+1;
    }
    else{
        high=mid-1;
    }
    cout<<low<<" "<<high<<endl;
}
cout<<ans<<'\n';
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    // int t;
    // cin >> t;
    // while (t--)
        Next_U();

    return 0;
}
