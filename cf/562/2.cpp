#include <string>
#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <queue>

using namespace std;

#define _S(a) sort(a.begin(),a.end());
#define _R(a) reverse(a.begin(),a.end());
int gcd(int a,int b){if(b==0)return a;return(gcd(b,a%b));}
int lcm(int a,int b){return(a/gcd(a,b)*b);}
int mod(int a,int b){if(a<0)return((b+a)%b);else return a%b;}
vector<string> splitAsString(string a){vector<string> v;string w;stringstream s;s<<a;while(s>>w)v.push_back(w);return v;}
string _UCASE(string a){for(int i=0;i<a.size();i++)if(a[i]>='a'&&a[i]<='z')a[i]=a[i]-'a'+'A';return a;}
string _LCASE(string a){for(int i=0;i<a.size();i++)if(a[i]>='A'&&a[i]<='Z')a[i]=a[i]-'A'+'a';return a;}

int main() {
	int n,m;
	cin>>n>>m;
	set<int> dis;
	vector<pair<int, int> > mp;
	for(int i=0;i<m;i++) {
		int t1,t2;
		cin>>t1>>t2;
		mp.push_back(make_pair(t1, t2));
		if(dis.size()<4) {
			dis.insert(t1);
			dis.insert(t2);
		}
	}
	vector<int> disv(dis.begin(), dis.end());
	string ans="no";
	for(int i=0;i<disv.size();i++) {
		for(int j=i+1;j<disv.size();j++) {
			bool flag=0;
			cout<<"xx "<<disv[i]<<" "<<disv[j]<<endl;
			for(int k=0;k<mp.size();k++) {
				//cout<<"it"<<it->first<<" "<<it->second<<endl;
				if(mp[k].first==disv[i] || mp[k].first==disv[j] || mp[k].second==disv[i] || mp[k].second==disv[j]) {
					continue;
				}
				//cout<<"here"<<disv[i]<<" "<<disv[j]<<endl;
				flag=1;
			}
			if(flag==0)ans="yes";
		}
	}
	cout<<ans<<endl;
	return 0;
}
