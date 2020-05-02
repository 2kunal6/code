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
		string s;
		cin>>s;
		int ans=0;
		while(s.find('-')!=string::npos) {
			for(int i=s.size()-1;i>=0;i--) {
				if(s[i]=='-') {
					//for(int j=0;j<(i+1)/2;j++)swap(s[j], s[i-j]);
					reverse(s.begin(), s.begin()+i+1);
					cout<<i<<s<<endl;
					for(int j=0;j<=i;j++) {
						if(s[j]=='+')s[j]='-';
						else s[j]='+';
					}
					ans++;
					break;
				}
			}
		}
		cout<<"Case #"<<ct<<": "<<ans<<endl;
		ct++;
	}
	return 0;
}
