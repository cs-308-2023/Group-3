#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    a=abs(a);
    b=abs(b);
	while (a > 0 && b > 0) {
		if (a > b) {
			a = a%b;
		}
		else {
			b = b%a;
		}
	}
	if (a == 0) {
		return b;
	}
	return a;
}
int gcd_recursive(int a,int b){
    a=abs(a);
    b=abs(b);
   if (a == 0)
        return b;
    return gcd(b % a, a);
}


int main()
{
	int a,b;
    cin>>a>>b;
	cout << "GCD of " << a << " and " << b << " is " << gcd(a, b)<<endl;
	return 0;
}

