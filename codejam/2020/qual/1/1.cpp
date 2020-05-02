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
		int n, tm=0, nr=0, nc=0;
		cin>>n;
		vector<vector<int> > v;
		for(int i=0;i<n;i++) {
			vector<int> tmp(n);
			for(int j=0;j<n;j++)cin>>tmp[j];
			v.push_back(tmp);
		}
		for(int i=0;i<n;i++)tm+=v[i][i];
		for(int i=0;i<n;i++) {
			bitset<101> b;
			for(int j=0;j<n;j++) {
				if(b[v[i][j]]) {
					nr++;
					break;
				} else b[v[i][j]]=1;
			}
		}
		for(int i=0;i<n;i++) {
			bitset<101> b;
			for(int j=0;j<n;j++) {
				if(b[v[j][i]]) {
					nc++;
					break;
				} else b[v[j][i]]=1;
			}
		}
		cout<<"Case #"<<ct<<": "<<tm<<" "<<nr<<" "<<nc<<endl;
		ct++;
	}
	return 0;
}
