
#include <bits/stdc++.h>
using namespace std;

vector<int> primes; 

void simpleSieve(int limit, vector<int> &prime)
{
	vector<bool> mark(limit + 1, true);

	for (int p=2; p*p<limit; p++)
	{
		if (mark[p] == true)
		{
			
			for (int i=p*p; i<limit; i+=p)
				mark[i] = false;
		}
	}

	
	for (int p=2; p<limit; p++)
	{
		if (mark[p] == true)
		{
			prime.push_back(p);
			primes.push_back(p);
		}
	}
}


void segmentedSieve(int n)
{
	
	int limit = floor(sqrt(n))+1;
	vector<int> prime;
	prime.reserve(limit);
	simpleSieve(limit, prime);

	int low = limit;
	int high = 2*limit;

	
	while (low < n)
	{
		if (high >= n)
		high = n;
		
		
		
		bool mark[limit+1];
		memset(mark, true, sizeof(mark));

		for (int i = 0; i < prime.size(); i++)
		{
			
			int loLim = floor(low/prime[i]) * prime[i];
			if (loLim < low)
				loLim += prime[i];

			for (int j=loLim; j<high; j+=prime[i])
				mark[j-low] = false;
		}

		
		for (int i = low; i<high; i++)
			if (mark[i - low] == true)
				primes.push_back(i);

		
		low = low + limit;
		high = high + limit;
	}
}

// Driver program to test above function
int main()
{
	int n = 100000000;
    
	
	segmentedSieve(n);
    int tc;
    cin >> tc;

    for(int t=1;t<=tc;t++)
    {
        int l,r;
        cin >> l >> r;
        cout << "Case " << t << ": " ;
        l=lower_bound(primes.begin(),primes.end(),l)-primes.begin();
        r=upper_bound(primes.begin(),primes.end(),r)-primes.begin();
        cout << r-l << endl;
    }
    
	return 0;
}
