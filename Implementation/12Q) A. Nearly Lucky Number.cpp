#include <bits/stdc++.h>
using namespace std;
int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
 
string x;
cin>>x;
int n=x.length(),k=0;
for (int i = 0; i <n; i++)
{
   if(x[i]=='4'||x[i]=='7'){
    k++;
   }
}
if (k==4||k==7)
{
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}
}
 
