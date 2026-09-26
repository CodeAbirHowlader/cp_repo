// ABIR HOWLADER (Next_U)

#include <bits/stdc++.h>
using namespace std;
vector<long long>fact(10,-1);
long long factorial(int a)
{
    // if(a==0) return 1;
    // else return a*factorial(a-1);

    //Memorization tecnique
    if(a<=1) return 1;
    else if (fact[a]!=-1)
    return fact[a];
    return fact[a]=a*factorial(a-1);
   // return fact[a];


}


signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
     int n;
     cin>>n;
     cout<<factorial(n)<<endl;
    
}
