#include <string>
#include <vector>
#include <map>
#include <set>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <iostream>
#include <cmath>
#include <queue>

using namespace std;

int gcd(int a,int b){if(b==0)return a;return(gcd(b,a%b));}
int lcm(int a,int b){return(a/gcd(a,b)*b);}
int mod(int a,int b){if(a<0)return((b+a)%b);else return a%b;}

int main() {
	int t,ct=1;
	cin>>t;
	while(ct<=t) {
		long long n,tmp,i=1;
		cin>>n;
		//cout<<n<<endl;
		if(n==0) {
			cout<<"Case #"<<ct<<": "<<"INSOMNIA"<<endl;
			ct++;
			continue;
		}
		bitset<10> b;
		while(b.count()!=10) {
			//cout<<n<<" "<<b<<" "<<endl;
			tmp=n*i;
			while(tmp) {
				b[tmp%10]=1;
				tmp/=10;
				//cout<<tmp<<" "<<b<<endl;
			}
			i++;
		}
		cout<<"Case #"<<ct<<": "<<n*(i-1)<<endl;
		ct++;
	}
	return 0;
}
