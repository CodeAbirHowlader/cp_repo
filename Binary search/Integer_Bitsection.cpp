#include<iostream>
using namespace std;
 int a[]={1,3,4,4,6,7,9};
bool isOk(int i,int k){
    if(a[i]>=k) return 0;
    return 1;
}
int main()
{
  
   int n=7,k=7;
   int l=0,r=n;
   while(l<r){
    int mid=(l+r)/2;
    if(isOk(mid,k)){
l=mid+1;//decision
    }else{
        r=mid;//decision
    }
   }
   cout<<l<<endl;
}
