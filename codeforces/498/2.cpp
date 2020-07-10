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
	int n,k,ans=0,nq=0,fo=0,left;
	cin>>n>>k;
	left=n;
	vector<int> v(n),so(n);
	for(int i=0;i<n;i++)cin>>v[i];
	so=v;
	_S(so)
	_R(so)
	for(int i=0;i<n;i++) {
		if(i<k)ans+=so[i];
	}
	cout<<ans<<endl;
	for(int i=0;i<n;i++) {
		nq++;
		for(int j=0;j<k;j++) {
			if(v[i]==so[j]) {
				fo++;
				if(fo==k) {
					cout<<left<<endl;
					return 0;
				}
				cout<<nq<<" ";
				left-=nq;
				so[j]=-1;
				nq=0;
				break;
			}
		}
	}
	return 0;
}
