#include <iostream>

using namespace std;
int f(int x) {
	cout << x + 2;
	return x + 2;

}
int main() {
	int x;
	cin >> x;
	int a = f(x);

}