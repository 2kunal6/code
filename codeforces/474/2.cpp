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
#define _FILL(vec,num) fill(vec.begin(),vec.end(),num);
int gcd(int a,int b){if(b==0)return a;return(gcd(b,a%b));}
int lcm(int a,int b){return(a/gcd(a,b)*b);}
int mod(int a,int b){if(a<0)return((b+a)%b);else return a%b;}
vector<string> splitAsString(string a){vector<string> v;string w;stringstream s;s<<a;while(s>>w)v.push_back(w);return v;}
string _UCASE(string a){for(int i=0;i<a.size();i++)if(a[i]>='a'&&a[i]<='z')a[i]=a[i]-'a'+'A';return a;}
string _LCASE(string a){for(int i=0;i<a.size();i++)if(a[i]>='A'&&a[i]<='Z')a[i]=a[i]-'A'+'a';return a;}
bool _FIND(vector<int> v,int a){if(find(v.begin(),v.end(),a)==v.end())return 0;return 1;}

int main() {
	int n,k1,k2,tot;
	cin>>n>>k1>>k2;
	tot=k1+k2;
	vector<int> a(n),b(n),d;
	for(int i=0;i<n;i++)cin>>a[i];
	for(int i=0;i<n;i++)cin>>b[i];
	for(int i=0;i<n;i++)d.push_back(abs(a[i]-b[i]));
	make_heap(d.begin(), d.end());
	//for(int i=0;i<n;i++)cout<<d[i]<<" ";
	//cout<<endl;
	while(tot>0) {
		int f=d.front();
		pop_heap(d.begin(), d.end());
		d.pop_back();
		//for(int i=0;i<n;i++)cout<<d[i]<<" ";
		//cout<<"after pop" <<endl;
		if(f>0)d.push_back(f-1);
		else d.push_back(f+1);
		//for(int i=0;i<n;i++)cout<<d[i]<<" ";
		//cout<<endl;
		push_heap(d.begin(), d.end());
		tot--;
		//for(int i=0;i<n;i++)cout<<d[i]<<" ";
		//cout<<endl;
	}
	long long ans=0;
	for(int i=0;i<n;i++)ans+=((long long)d[i]*(long long)d[i]);
	cout<<ans<<endl;
	return 0;
}
