#include <iostream>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string input;
	int ans = 0;

	cin >> input;
	for (int i = 0; i < input.size() - 1; i++) {
		string two = input.substr(i, 2);
		if (two == "c=" || two == "c-" || two == "d-" || two == "lj" || two == "nj" || two == "s=" || two == "z=") {
			ans += 1;
		}

		if (i < input.size() - 2) {
			string three = input.substr(i, 3);
			string two = input.substr(i + 1, 2);
			if (three == "dz=" && two != "z=") {
				ans += 2;
			}

			else if (three == "dz=" && two == "z=") {
				ans += 1;
			}
		}
	}
	cout << input.size() - ans;
}