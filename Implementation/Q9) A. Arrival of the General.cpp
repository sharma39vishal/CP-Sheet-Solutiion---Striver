#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){

ll n;
cin>>n;
ll a[n],ans=0;
for (ll i = 0; i < n;i++){
   cin>>a[i];
}



ll mi=n-1,ma=0;
for (ll i = 0; i <n ; i++){
   if (a[mi]>=a[i]){
    mi=i;
   }

   if (a[ma]<a[i]){
      ma=i;
   }
}
ans=(n-mi-1)+(ma);
if (ma>mi){
   ans--;
}
cout<<ans<<endl;
}
