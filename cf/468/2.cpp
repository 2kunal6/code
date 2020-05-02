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
	int n,a,b,r=1;
	cin>>n>>a>>b;
	vector<int> v(n);
	for(int i=0;i<n;i++)v[i]=i+1;

	while(v.size()>2) {
		vector<int> nv;
		for(int i=0;i<v.size();i+=2) {
			if((v[i]==a && v[i+1]==b) || (v[i]==b && v[i+1]==a)) {
				cout<<r<<endl;
				return 0;
			}
			if(v[i+1]==a || v[i+1]==b)nv.push_back(v[i+1]);
			else nv.push_back(v[i]);
		}
		v=nv;
		r++;
	}
	cout<<"Final!"<<endl;
	return 0;
}
