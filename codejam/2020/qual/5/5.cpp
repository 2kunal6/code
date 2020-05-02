#include <vector>
#include <bitset>
#include <algorithm>
#include <iostream>

using namespace std;

vector<int> ac;
int fv;

int fact(int n) {
	int ans=1;
	for(int i=2;i<=n;i++)ans*=i;
	return ans;
}
void next_x(int n) {
	for(int i=n-1;i>=0;i--) {
		if(ac[i]<fv-1) {
			ac[i]++;
			return;
		} else ac[i]=0;
	}
}
int main() {
	int t,ct=1;
	cin>>t;
	while(ct<=t) {
		int n,k;
		cin>>n>>k;
		vector<vector<int> > v;
		vector<int> tmp;
		for(int i=1;i<=n;i++)tmp.push_back(i);
		do {
			v.push_back(tmp);
		} while(next_permutation(tmp.begin(), tmp.end()));
		/*for(int i=0;i<v.size();i++) {
			for(int j=0;j<n;j++)cout<<v[i][j]<<" ";
			cout<<endl;
		}*/
		fv=fact(n-1);
		//cout<<fv<<endl;
		cout<<"Case #"<<ct<<": ";
		ac.clear();
		for(int i=0;i<n;i++)ac.push_back(0);
		for(int i=0;i<fv*n*fv*n;i++) {
			for(int j=0;j<n;j++)cout<<ac[j]<<" ";
			cout<<endl;
			next_x(n);
		}
		cout<<"IMPOSSIBLE";;
		cout<<endl;
		ct++;
	}
	return 0;
}
