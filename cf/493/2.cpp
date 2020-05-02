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
	int n,b,ev=0,od=0,prev=0,sum=0, ans=0;
	cin>>n>>b;
	vector<int> v(n),c;
	for(int i=0;i<n;i++) {
		cin>>v[i];
		if(prev==1) {
			c.push_back(abs(v[i]-v[i-1]));
			prev=0;
		}
		if(v[i]%2==0)ev++;
		else od++;
		if(ev==od)prev=1;
	}
	//for(int i=0;i<c.size();i++)cout<<c[i]<<" ";
	//cout<<endl;
	_S(c)
	for(int i=0;i<c.size();i++) {
		sum+=c[i];
		if(sum<=b)ans++;
	}
	cout<<ans<<endl;
	return 0;
}
