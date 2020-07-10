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
	int n,m,ans=0;
	cin>>n>>m;
	vector<int> x(n), y(m);
	for(int i=0;i<n;i++)cin>>x[i];
	for(int i=0;i<m;i++)cin>>y[i];

	int j=0,xc=0,yc=0,i=0;
	while(i<n) {
		//cout<<i<<" "<<j<<endl;
		xc+=x[i];
		yc+=y[j];
		if(xc<yc) {
			while(xc<yc) {
				i++;
				xc+=x[i];
			}
		}
		if(xc>yc) {
			while(xc>yc) {
				j++;
				yc+=y[j];
			}
		}
		if(xc==yc) {
			ans++;xc=yc=0;
			cout<<i<<" ";
		}
		i++;j++;
	}
	cout<<ans<<endl;
	return 0;
}
