#include <vector>
#include <iostream>

using namespace std;

vector<int> prime_nos_till_n(int n) {
	vector<bool> is_prime(n+1, 1);
	for(int i=2;i*i<=n;i++) {
		if(is_prime[i]==0)continue;
		int mul=2;
		while(i*mul<=n) {
			is_prime[i*mul]=0;
			mul++;
		}
	}
	vector<int> prime_nos;
	for(int i=2;i<=n;i++) {
		if(is_prime[i]==1)prime_nos.push_back(i);
	}
	return prime_nos;
}
// function generate all prime number less then N in O(n)
void manipulated_seive(int N) {
	vector<long long >isprime(N+1, true);
	vector<long long >prime;
	vector<long long >SPF(N+1);
    // 0 and 1 are not prime
    isprime[0] = isprime[1] = false ;
    // Fill rest of the entries
    for (long long int i=2; i<N ; i++) {
        // If isPrime[i] == True then i is prime number
        if (isprime[i]) {
            prime.push_back(i);
            // A prime number is its own smallest prime factor
            SPF[i] = i;
        }

        // Remove all multiples of  i*prime[j] which are not prime by making isPrime[i*prime[j]] = false
        // and put smallest prime factor of i*Prime[j] as prime[j] [ for exp :let  i = 5 , j = 0 , prime[j] = 2 [ i*prime[j] = 10 ]
        // so smallest prime factor of '10' is '2' that is prime[j] ] this loop run only one time for number which are not prime
        for (long long int j=0; j < (int)prime.size() && i*prime[j] < N && prime[j] <= SPF[i]; j++) {
            isprime[i*prime[j]]=false;
	// put smallest prime factor of i*prime[j]
            SPF[i*prime[j]] = prime[j] ;
        }
	cout<<i<<"*****************"<<endl;
	for(int i=0;i<isprime.size();i++)cout<<isprime[i]<<" ";
    	cout<<endl;
	for(int i=0;i<SPF.size();i++)cout<<SPF[i]<<" ";
    	cout<<endl;
    }
}
int main() {
	vector<int> p=prime_nos_till_n(7);
	for(int i=0;i<p.size();i++)cout<<p[i]<<" ";
	cout<<endl;
	p=prime_nos_till_n(20);
	for(int i=0;i<p.size();i++)cout<<p[i]<<" ";
	cout<<endl;

	manipulated_seive(15);
	return 0;
}
