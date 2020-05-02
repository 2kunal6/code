#include <vector>
#include <iostream>

using namespace std;

int main() {
	int n,k1,k2,tot;
	cin>>n>>k1>>k2;
	tot=k1+k2;
	vector<int> a(n),b(n),d;
	for(int i=0;i<n;i++)cin>>a[i];
	for(int i=0;i<n;i++)cin>>b[i];
	for(int i=0;i<n;i++)d.push_back(abs(a[i]-b[i]));
	
	make_heap(d.begin(), d.end());
	//for(int i=0;i<d.size();i++)cout<<d[i]<<" ";cout<<"first"<<endl;
	while(tot>0) {
		int f=d.front();
		pop_heap(d.begin(), d.end());
		d.pop_back();//THIS IS VERY IMPORTANT TO DELETE UNNECESSARY THINGS FROM VECTOR
		//for(int i=0;i<d.size();i++)cout<<d[i]<<" ";cout<<"after pop" <<endl;
		if(f>0)d.push_back(f-1);
		else d.push_back(f+1);
		push_heap(d.begin(), d.end());
		//for(int i=0;i<d.size();i++)cout<<d[i]<<" ";cout<<"after push"<<endl;
		tot--;
	}
	long long ans=0;
	for(int i=0;i<n;i++)ans+=((long long)d[i]*(long long)d[i]);
	cout<<ans<<endl;
	return 0;
}
