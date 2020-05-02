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
		int ms,ans=0,rc=0;
		cin>>ms;
		string s;
		cin>>s;
		for(int i=0;i<s.size();i++) {
			if(rc<i) {
				ans++;
				rc++;
			}
			rc+=(s[i]-'0');
		}
		cout<<"Case #"<<ct<<": "<<ans<<endl;
		ct++;
	}
	return 0;
}
