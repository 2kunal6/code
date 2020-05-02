#include <string>
#include <vector>
#include <map>
#include <set>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <iostream>
#include <cmath>
#include <queue>

using namespace std;

int gcd(int a,int b){if(b==0)return a;return(gcd(b,a%b));}
int lcm(int a,int b){return(a/gcd(a,b)*b);}
int mod(int a,int b){if(a<0)return((b+a)%b);else return a%b;}

int main() {
	int t,ct=1;
	cin>>t;
	while(ct<=t) {
		int n;
		cin>>n;
		string ans="",s,pf,sf,apf,asf;
		cin>>s;
		ans=s;
		for(int i=1;i<n;i++) {
			cin>>s;
			pf=s.substr(0, s.find('*'));
			sf=s.substr(s.rfind('*'), s.size());
			apf=ans.substr(0, ans.find('*'));
			asf=ans.substr(ans.rfind('*'), ans.size());
			if((s[0]!='*' && ans[0]!='*' && pf!=apf) || (s[s.size()-1]!='*' && ans[ans.size()-1]!='*' && sf!=asf)) {
				ans="*";
				break;
			}
			while(s.find("*")!=std::string::npos)s.replace(s.find("*"), 1, "");
			ans.replace(ans.find("*"), 1, s+"*");
		}
		if(ans!="*") {
			while(ans.find("*")!=std::string::npos)ans.replace(ans.find("*"), 1, "");
		}
		cout<<"Case #"<<ct<<": "<<ans<<endl;
		ct++;
	}
	return 0;
}
