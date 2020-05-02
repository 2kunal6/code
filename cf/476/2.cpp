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
	int n,k,maxi=0,x=0,y=0;
	cin>>n>>k;
	vector<string> v(n);
	vector<vector<int> > vi(n, vector<int>(n,0));
	for(int i=0;i<n;i++)cin>>v[i];
	//for(int i=0;i<n;i++)cout<<v[i];
	for(int i=0;i<n;i++) {
		for(int j=0;j<n;j++) {
			if(v[i][j]!='.')continue;
			int tc=0;
			for(int t=j;t<j+k;t++) {
				if(t>=n)break;
				if(v[i][t]=='.')tc++;
				else break;
				if(tc==k) {
					while(t>=j) {
						vi[i][t]++;
						if(vi[i][t]>maxi) {
							maxi=vi[i][t];x=i;y=t;
						}
						t--;
					}
					break;
				}
			}
			//cout<<maxi<<endl;
			tc=0;
			for(int t=i;t<i+k;t++) {
				if(t>=n)break;
				if(v[t][j]=='.')tc++;
				else break;
				if(tc==k) {
					while(t>=i) {
						vi[t][j]++;
						if(vi[t][j]>maxi) {
							maxi=vi[t][j];x=t;y=j;
						}
						t--;
					}
					break;
				}
			}
			/*cout<<maxi<<endl;
			cout<<i<<" "<<j<<endl;
			for(int i=0;i<v.size();i++) {
				for(int j=0;j<v[i].size();j++)cout<<v[i][j]<<" ";
				cout<<endl;
			}*/
		}
	}
	cout<<x+1<<" "<<y+1<<endl;
	return 0;
}
