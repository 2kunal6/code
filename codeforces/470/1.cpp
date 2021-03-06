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
bool _FIND(vector<int> v,int a){if(find(v.begin(),v.end(),a)==v.end())return 0;return 1;}

int main() {
	int r,c;
	cin>>r>>c;
	vector<string> p(r);
	for(int i=0;i<r;i++)cin>>p[i];
	for(int i=0;i<r;i++) {
		for(int j=0;j<c;j++) {
			if(p[i][j]=='S' && ((j-1>=0 && p[i][j-1]=='W') || (j+1<c && p[i][j+1]=='W') || (i-1>=0 && p[i-1][j]=='W') || (i+1<r && p[i+1][j]=='W'))) {
			cout<<"No"<<endl;
			return 0;
			}
			if(p[i][j]=='W' && ((j-1>=0 && p[i][j-1]=='S') || (j+1<c && p[i][j+1]=='S') || (i-1>=0 && p[i-1][j]=='S') || (i+1<r && p[i+1][j]=='S'))) {
			cout<<"No"<<endl;
			return 0;
			}
		}
	}
	for(int i=0;i<r;i++) {
		for(int j=0;j<c;j++) {
			if(p[i][j]=='.')p[i][j]='D';
		}
	}
	cout<<"Yes"<<endl;
	for(int i=0;i<r;i++)cout<<p[i]<<endl;
	return 0;
}
