void answer(){
ll n;
cin>>n;
vector<ll>ans;
ll i=1;
while(n){
 ll tmp=((n%10)*i);
 if(tmp>0){
 ans.push_back(tmp);
 }
 n/=10;
 i*=10;
}
cout<<ans.size()<<endl;
for (ll i = 0; i < ans.size(); ++i){
    cout<<ans[i]<<" ";
}
cout<<endl;
}
