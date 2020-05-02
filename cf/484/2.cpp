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
	int n,t,f=-1;
	cin>>n;
	vector<pair<int,int> > v(n);
	vector<int> es(n,0);
	for(int i=0;i<n;i++) {
		cin>>t;
		v[i]=make_pair(t,i+1);
	}
	_S(v);
	string s;
	cin>>s;

	map<int, int> ev; 
	for(int i=0;i<2*n;i++) {
		if(s[i]=='0') {
			f++;
			cout<<v[f].second<<" ";
			ev[v[f].first] =  v[f].second;
		} else {
			map<int,int>::iterator it= ev.end();
			it--;
			cout<<it->second<<" ";
			ev.erase(it);
		}
	}
	cout<<endl;
	return 0;
}
