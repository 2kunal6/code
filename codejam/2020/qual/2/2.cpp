#include <string>
#include <iostream>

using namespace std;

int main() {
	int t,ct=1;
	cin>>t;
	while(ct<=t) {
		string s,ans="";
		cin>>s;
		int cr=0, max=-1;
		for(int i=0;i<s.size();i++) {
			if(s[i]>max)ma
			if(cr==0) {
				for(int j=0;j<s[i]-'0';j++) {
					ans+='(';
					cr++;
				}
			}
			ans+=s[i];
			if(i<(s.size()-1)) {
				while(s[i]==s[i+1]) {
					ans+=s[i];
					i++;
				}
			}
			if(i+1==s.size() || s[i+1]>s[i]) {
				if(cr>0) {
					while(cr--)ans+=')';
				}
			} else {
				for(int j=0;j<(s[i]-s[i+1]);j++) {
					ans+=')';
					cr--;
				}
			}
		}
		cout<<"Case #"<<ct<<": "<<ans<<endl;
		ct++;
	}
	return 0;
}
