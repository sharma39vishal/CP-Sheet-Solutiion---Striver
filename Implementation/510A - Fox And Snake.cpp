void answer(){
ll n,m;
cin>>n>>m;
ll flg=0;
for(ll i=0;i<n;i++){
if(i%2){
    if(flg){
    cout<<"#";
    for (ll j = 0; j< m-1; j++){
     cout<<".";   
    }
    cout<<endl;     
    flg=0;
    }
    else{
    for (ll j = 0; j< m-1; j++){
     cout<<".";   
    }
    cout<<"#";
    cout<<endl;     
    flg=1; 
    }
}
 else{
    for (ll j = 0; j< m; j++){
     cout<<"#";   
    }
    cout<<endl;
 }
}
}
