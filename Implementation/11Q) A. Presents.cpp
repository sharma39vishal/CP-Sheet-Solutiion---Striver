void answer(){
ll n;
cin>>n;
vector<pair<int,int>>v;
for (ll i = 0; i < n; ++i){
    ll x;
    cin>>x;
    v.push_back({x,i+1});
}
sort(v.begin(),v.end());
for (ll i = 0; i < n; ++i){
    cout<<v[i].second<<" ";
}
cout<<endl;
}
