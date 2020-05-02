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
#define ll long long
int gcd(int a,int b){if(b==0)return a;return(gcd(b,a%b));}
int lcm(int a,int b){return(a/gcd(a,b)*b);}
int mod(int a,int b){if(a<0)return((b+a)%b);else return a%b;}
vector<string> splitAsString(string a){vector<string> v;string w;stringstream s;s<<a;while(s>>w)v.push_back(w);return v;}
string _UCASE(string a){for(int i=0;i<a.size();i++)if(a[i]>='a'&&a[i]<='z')a[i]=a[i]-'a'+'A';return a;}
string _LCASE(string a){for(int i=0;i<a.size();i++)if(a[i]>='A'&&a[i]<='Z')a[i]=a[i]-'A'+'a';return a;}

bool isf(ll n, ll vc) {
	ll v=0, p=0;
	bool turn=1;
	while(n>0) {
		if(n<10) {
			v+=n;
			n=0;
			continue;
		}
		if(turn) {
			v+=min(vc, n);
			n-=vc;
			turn=0;
		} else {
			ll cds=n/10;
			p+=cds;
			n-=cds;
			turn=1;
		}
		//cout<<"n:"<<n<<endl;
	}
	if(v>=p)return 1;
	return 0;
}

int main() {
	ll n, ans=n, lo, hi;
	cin>>n;
	lo=1;hi=n;
	for(ll i=(lo+hi)/2;lo<hi;i=lo+((hi-lo)/2)) {
		if(isf(n, i)) {
			ans=i-1;
			hi=i-1;
		} else lo=i+1;
		//cout<<i<<" "<<lo<<" "<<hi<<endl;
		//break;
	}
	cout<<ans<<endl;
	return 0;
}
