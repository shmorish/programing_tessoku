#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, x, a[100];

	cin >> n >> x;
	for (size_t i = 0; i < n; i++)
		cin >> a[i];

	for (size_t i = 0; i < n; i++)
	{
		if (a[i] == x){
			cout << "Yes" << endl;
			return (0);
		}
	}
	cout << "No" << endl;
	return (0);
}
