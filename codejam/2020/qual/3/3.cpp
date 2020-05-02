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
bool ocm(node a, node b) {
	if(a.st<b.st)return 1;
	if(a.st>b.st)return 0;
	return a.et<b.et;
}
bool poscmp(node a, node b) {
	return a.pos<b.pos;
}
int main() {
	int t,ct=1;
	cin>>t;
	while(ct<=t) {
		vector<node> v,cam,jam;
		int n,cur=0;
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
			//cout<<nod.st<<" "<<nod.et<<" "<<nod.pos<<endl;
			
			if(cur>nod.st) {
				nod.cj='J';
				jam.push_back(nod);
			}
			else {
				nod.cj='C';
				cam.push_back(nod);
				cur=nod.et;
			}
			v.pop_back();
		}
		sort(jam.begin(), jam.end(), ocm);
		bool ypos=1;
		for(int i=1;i<jam.size();i++) {
			if(jam[i].st<jam[i-1].et) {
				ypos=0;
				break;
			}
		}
		cout<<"Case #"<<ct<<": ";
		if(ypos==0) {
			cout<<"IMPOSSIBLE";
		} else {
			for(int i=0;i<cam.size();i++)v.push_back(cam[i]);
			for(int i=0;i<jam.size();i++)v.push_back(jam[i]);
			sort(v.begin(), v.end(), poscmp);
			for(int i=0;i<v.size();i++)cout<<v[i].cj;
		}
		cout<<endl;
		ct++;
	}
	return 0;
}
