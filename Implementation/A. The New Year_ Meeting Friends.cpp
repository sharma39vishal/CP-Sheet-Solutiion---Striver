void answer(){
ll a[3];
cin>>a[0]>>a[1]>>a[2];
sort(a,a+3);
ll ans=abs(a[1]-a[0])+abs(a[2]-a[1]);
cout<<ans<<endl;
}
