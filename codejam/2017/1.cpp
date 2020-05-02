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
		int ans=0,k, f=0;
		string s;
		cin>>s>>k;
		for(int i=0;i<=s.size()-k;i++) {
			if(s[i]=='+')continue;
			for(int j=i;j<i+k;j++) {
				if(s[j]=='+')s[j]='-';
				else s[j]='+';
			}
			ans++;
		}
		for(int i=0;i<s.size();i++) {
			if(s[i]=='-') {
				f=1;
			}
		}
		cout<<"Case #"<<ct<<": ";
		if(f==1)cout<<"IMPOSSIBLE";
		else cout<<ans;
		cout<<endl;
		ct++;
	}
	return 0;
}
