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
		long long n;
		cin>>n;
		string ns=to_string(n);
		for(int i=ns.size()-1;i>=0;i--) {
			for(int j=i-1;j>=0;j--) {
				if(ns[j]>ns[i]) {

				}
			}
			if(f==1)i++;
		}
		cout<<"Case #"<<ct<<": "<<stoll(ns)<<endl;
		ct++;
	}
	return 0;
}
