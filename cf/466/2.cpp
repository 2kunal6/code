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
	long long n,k,a,b,ans,t=0;
	cin>>n>>k>>a>>b;
	if(k==1) {
		cout<<a*(n-1)<<endl;
		return 0;
	}
	while(n>1) {
		//cout<<n<<" "<<t<<endl;
		if(n<k) {
			t+=(a*(n-1));
			n=1;
		}
		if((n%k)==0) {
			t+=(min(b, a*(n-(n/k))));
			n/=k;
		} else {
			t+=(a*(n%k));
			n-=(n%k);
			if(n==0)t-=a;
		}
	}
	cout<<t<<endl;
	return 0;
}
