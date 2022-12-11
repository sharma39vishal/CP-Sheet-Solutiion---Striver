void answer(){
unordered_map<string,int>mp;
mp["Tetrahedron"]=4;
mp["Cube"]=6;
mp["Octahedron"]=8;
mp["Dodecahedron"]=12;
mp["Icosahedron"]=20;
ll ans=0;
ll n;
cin>>n;
while(n--){
    string s;
    cin>>s;
    ans+=mp[s];
}
cout<<ans<<endl;
}
