#include <iostream>
using namespace std;

void d(int* arr) {
	for (int i = 1; i <= 10000; i++) {
		int result, num;
		num = i;
		result = i + i % 10;
		while (num / 10 > 0) {
			num = num / 10;
			result += num % 10;
			if (result > 10000) break;
		}


		if (result > 10000) continue;
		arr[result - 1] = 1;
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int arr[10000] = { 0, };
	d(arr);

	for (int i = 0; i < 10000; i++) {
		if (arr[i] == 0) cout << i + 1 << "\n";
	}
}