#include <iostream>
using namespace std;

int main() {
	int h, m, s;
	int is;
	cin >> h >> m >> s;
	cin >> is;
	s += is % 60;
	m += is / 60 + s / 60;
	h += m / 60;
	s %= 60; m %= 60; h %= 24;

	cout << h << " " << m << " " << s;
}