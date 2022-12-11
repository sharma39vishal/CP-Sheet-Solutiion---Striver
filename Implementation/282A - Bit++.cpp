#include <bits/stdc++.h>
using namespace std;
typedef long long int  ll;
void answer(){
ll x=0;
ll n;
cin>>n;
for (ll i = 0; i <n ; ++i){
    string s;
    cin>>s;
    if(s[1]=='+'){
        x++;
    }
    else{
        x--;
    }
}
cout<<x<<endl;
}

int main(){
 answer();
return 0;
}

// This Template Is Created By Vishal Sharma
