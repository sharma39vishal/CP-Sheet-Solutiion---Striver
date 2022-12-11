#include <bits/stdc++.h>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

//long long int t;
//cin>>t;
//while(t--){
  

int x,y,n=0;
for (int i = 0; i < 5; i++)
{
    for (int j = 0; j < 5; j++)
    {
        int k;
        cin>>k;
        if (k==1)
        {
            x=i+1;
            y=j+1;
        }
    }
}
 

 n=abs(x-3)+abs(y-3);

cout<<n<<endl;





    }
//}
 
