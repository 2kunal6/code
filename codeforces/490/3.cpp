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
	int n,k,c=0;
	string s, ans="";
	cin>>n>>k>>s;
	vector<int> v(26, 0);
	for(int i=0;i<s.size();i++)v[s[i]-'a']++;
	for(int i=0;i<26;i++) {
		if(c+v[i]>k) {
			v[i]-=(c+v[i]-k);
			for(int j=i+1;j<26;j++)v[j]=0;
			//for(int j=i;j>0;j--)v[j]-=v[j-1];
			break;
		}
		c+=v[i];
	}
	for(int i=0;i<s.size();i++) {
		if(v[s[i]-'a']>0) {
			v[s[i]-'a']--;
			continue;
		}
		ans+=s[i];
	}
	cout<<ans<<endl;
	return 0;
}
