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

pair<int, int> addTime(pair<int, int> t, int m) {
	t.second+=m;
	if(t.second>=60) {
		t.second%=60;
		t.first++;
	}
	return t;
}
bool isGreater(pair<int, int> t1, pair<int, int> t2) {
	if(t1.first>t2.first)return 1;
	if(t1.first<t2.first)return 0;	
	if(t1.second>t2.second)return 1;
	return 0;
}
int main() {
	int n,s;
	cin>>n>>s;
	vector<pair<int, int> > v(n);
	for(int i=0;i<n;i++)cin>>v[i].first>>v[i].second;
	pair<int, int> to=make_pair(0, 1);
	to=addTime(to, s);
	if(!(isGreater(to, v[0]))) {
		cout<<"0 0"<<endl;
		return 0;
	}
	for(int i=1;i<n;i++) {
		v[i-1]=addTime(v[i-1], 1);
		to=addTime(v[i-1], s);
		if(!(isGreater(addTime(to, s+1), v[i]))) {
			cout<<to.first<<" "<<to.second<<endl;
			return 0;
		}
	}
	v[n-1]=addTime(v[n-1], 1);
	//cout<<v[n-1].first<<" "<<v[n-1].second<<endl;
	to=addTime(v[n-1], s);
	cout<<to.first<<" "<<to.second<<endl;
	return 0;
}
