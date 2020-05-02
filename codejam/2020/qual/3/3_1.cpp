#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

struct node {
	int st,et,pos;
	char cj;
}nod;
bool hcmp(node a, node b) {
	if(a.st<b.st)return 0;
	if(a.st>b.st)return 1;
	return a.et>b.et;
}
int main() {
	int t,ct=1;
	cin>>t;
	while(ct<=t) {
		vector<node> v;
		int n;
		cin>>n;
		for(int i=0;i<n;i++) {
			int stt,ett;
			cin>>stt>>ett;
			//node* nod=new node();
			nod.st=stt;
			nod.et=ett;
			nod.pos=i;
			v.push_back(nod);
		}
		make_heap(v.begin(), v.end(), hcmp);
		
		while(!v.empty()) {
			pop_heap(v.begin(), v.end(), hcmp);
			nod = v.back();
			cout<<nod.st<<" "<<nod.et<<" "<<nod.pos<<endl;
			v.pop_back();
			//make_heap(v.begin(), v.end(), hcmp);
		}
		
		//cout<<"Case #"<<ct<<": "<<ans<<endl;
		ct++;
	}
	return 0;
}
