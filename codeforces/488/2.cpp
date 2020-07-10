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
void printIntVec(vector<int> v){for(int i=0;i<v.size();i++)cout<<v[i]<<" ";cout<<"***"<<endl;}

int main() {
	int n,k;
	cin>>n>>k;
	vector<int> vn(n);
	for(int i=0;i<n;i++)cin>>vn[i];
	vector<int> vk(n);
	for(int i=0;i<n;i++)cin>>vk[i];
	map<int, int> vp;
	for(int i=0;i<n;i++)vp[vn[i]]=vk[i];

	vector<int> pow;
	for(int i=0;i<n;i++) {
		//printIntVec(pow);
		if(k==0) {
			cout<<vk[i]<<" ";
			continue;
		}
		int val=vp.find(vn[i])->second;
		cout<<vn[i]<<" "<<val<<endl;
		int ans=val;
		for(int j=0;j<pow.size();j++)ans+=pow[j];
		//cout<<ans<<" ";
		if(pow.size()<k) {
			pow.push_back(val);
		} else {
			_S(pow);
			if(pow[0]<val)pow[0]=val;
		}
	}
	return 0;
}
