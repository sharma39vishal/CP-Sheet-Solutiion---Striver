void answer(){
ll n, k, l, c, d, p, nl, np;
cin>>n>>k>>l>>c>>d>>p>>nl>>np;
ll liq=floor((float)floor((float)k*l/nl)/n);
ll sl=floor((float)c*d/n);
ll sal=floor((float)floor((float)p/np)/n);
// cout<<liq<<" "<<sl<<" "<<sal<<endl;
cout<<min({liq,sl,sal})<<endl;
}
