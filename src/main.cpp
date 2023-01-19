#include <iostream>

using namespace std;

using ll = long long;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	ll a, b; cin >> a >> b;
	if (b < a) {
		auto t = a;
		a = b;
		b = t;
	}

	if (a == b) {
		cout << 0;
		return 0;
	}

	cout << b - a - 1 << '\n';
	for (auto i = a + 1; i < b; ++i) {
		cout << i << ' ';
	}

	return 0;
}