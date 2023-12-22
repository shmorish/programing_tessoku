#include <iostream>
#include <bitset>
using namespace std;

int main() {
    int N;
    cin >> N;

	bitset<10> bs(N);
	cout << bs << endl;
    return 0;
}