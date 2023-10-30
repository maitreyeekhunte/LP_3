
#include <bits/stdc++.h>
using namespace std;

int iterative_fib(int n)
{
	int a = 0, b = 1, c;
	if (n == 0)
		return a;
	for (int i = 2; i <= n; i++) {
		c = a + b;
		a = b;
		b = c;
	}
	return b;
}

int recursive_fib(int n)
{
    if (n <= 1)
        return n;
    return recursive_fib(n - 1) + recursive_fib(n - 2);
}

int main()
{
	int k;
    cout<<"Enter number to calculate N fibonacci number: ";
    cin>>k;

	cout <<"Iterative: "<<iterative_fib(k)<<endl;
    cout<<"Recursive: "<<recursive_fib(k)<<endl;
	return 0;
}

