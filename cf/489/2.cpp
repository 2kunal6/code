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
long long gcd(long long a,long long b){if(b==0)return a;return(gcd(b,a%b));}
long long lcm(long long a,long long b){return(a/gcd(a,b)*b);}
int mod(int a,int b){if(a<0)return((b+a)%b);else return a%b;}
vector<string> splitAsString(string a){vector<string> v;string w;stringstream s;s<<a;while(s>>w)v.push_back(w);return v;}
string _UCASE(string a){for(int i=0;i<a.size();i++)if(a[i]>='a'&&a[i]<='z')a[i]=a[i]-'a'+'A';return a;}
string _LCASE(string a){for(int i=0;i<a.size();i++)if(a[i]>='A'&&a[i]<='Z')a[i]=a[i]-'A'+'a';return a;}

int main() {
	long long l,r,x,y,ans=0,b;
	cin>>l>>r>>x>>y;
	for(long long i=l;i*i<=r;i++) {
		if(y%i!=0)continue;
		b=y/i;
		cout<<i<<" "<<b<<"***";
		cout<<gcd(i, b)<<" "<<lcm(i,b)<<endl;
		if(gcd(i,b)==x && lcm(i,b)==y)ans+=2;
	}
	cout<<ans<<endl;
	return 0;
}
