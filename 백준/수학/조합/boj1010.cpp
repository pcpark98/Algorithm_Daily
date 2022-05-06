#include <iostream>
#include <vector>
using namespace std;

vector<unsigned long long> factorial = { 1,1,2,6 };

int main() {
	int T, left, right;

	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> left >> right;
		if (left > right - left) left = right - left;
		while (factorial.size() <= left) {
			factorial.push_back(factorial[factorial.size() - 1] * factorial.size());
		}

		unsigned long long ans = 1;
		for (int j = 0; j < left; j++) {
			ans *= right;
			right--;
		}
		cout << ans / factorial[left] << "\n";
	}
}