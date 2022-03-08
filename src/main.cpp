#include <iostream>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	string a, b;
	cin >> a >> b;

	const auto& an = a.length();
	const auto& bn = b.length();
	if (an != bn) {
		cout << "NO";
		return 0;
	}

	auto abeg = a.begin();
	const auto& aend = a.end();
	auto bbeg = b.rbegin();

	for (; abeg != aend; ++abeg, ++bbeg) {
		if (*abeg != *bbeg) {
			cout << "NO";
			return 0;
		}
	}

	cout << "YES";

	return 0;
}