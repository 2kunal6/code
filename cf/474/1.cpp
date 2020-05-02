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
	string s;
	cin>>s;
	if(s[0]!='a') {
		cout<<"NO"<<endl;
		return 0;
	}
	int a=0,b=0,c=0;
	for(int i=0;i<s.size();i++) {
		if(s[i]=='a')a++;
		else if (s[i]=='b')b++;
		else c++;
		
		if((b>0 && s[i]=='a') || (c>0 && (s[i]=='a' || s[i]=='b'))) {
			cout<<"NO"<<endl;
			return 0;
		}
	}
	if(a>0 && b>0 && (c==a || c==b)) {
		cout<<"YES"<<endl;
		return 0;
	}
	cout<<"NO"<<endl;
	return 0;
}
