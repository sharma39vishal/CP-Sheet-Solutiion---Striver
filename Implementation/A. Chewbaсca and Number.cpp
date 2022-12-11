void answer(){
string s;
cin>>s;
for (ll i = 0; i < s.length(); ++i){
    if(i==0&&s[i]=='9'){
        continue;
    }
    else if(s[i]-'0'>=5){
        s[i]=(9-(s[i]-'0'))+'0';
    }
}
cout<<s<<endl;
}
