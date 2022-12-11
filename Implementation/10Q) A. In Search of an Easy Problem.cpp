void answer(){
ll n;
cin>>n;
ll ans=0;
for(int i=0;i<n;i++){
    int x;
    cin>>x;
    ans|=x;
}
if(ans){
    cout<<"HARD"<<endl;
}
else{
cout<<"EASY"<<endl;
}
}
