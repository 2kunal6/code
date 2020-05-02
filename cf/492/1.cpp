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
	int n,ans=0, t;
	cin>>n;
	if(n>=100) {
		t=n/100;
		ans+=t;
		n%=100;
	}
	//cout<<ans<<" "<<n<<endl;
	if(n>=20) {
		t=n/20;
		ans+=t;
		n%=20;
	}
	//cout<<ans<<" "<<n<<endl;
	if(n>=10) {
		t=n/10;
		ans+=t;
		n%=10;
	}
	//cout<<ans<<" "<<n<<endl;
	if(n>=5) {
		t=n/5;
		ans+=t;
		n%=5;
	}
	//cout<<ans<<" "<<n<<endl;
	ans+=n;
	cout<<ans<<endl;
	return 0;
}
