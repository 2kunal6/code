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
	int n;
	cin>>n;
	
	vector<bool> p(n+1, 1);
	vector<int> mp(n+1);

	for(int i=2;i<=n;i++) {
		if(p[i]) {
			for(int j=2;i*j<=n;j++) {
				p[i*j]=0;
				mp[i*j]=i;
			}
		}
	}
	//for(int i=0;i<=n;i++)cout<<p[i]<<" "<<mp[i]<<endl;

	int ans=n-mp[n]+1;
	for(int i=n-mp[n]+1;i<=n;i++) {
		if(i-mp[i]+1<ans)ans=i-mp[i]+1;
	}
	cout<<ans<<endl;
	return 0;
}
