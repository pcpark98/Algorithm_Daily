#include <iostream>
using namespace std;

int main() {
	int N, Nth = 666, order = 1;
	cin >> N;
	while (order < N) {
		Nth++;
		int temp = Nth;
		while (temp > 100) {
			if (temp % 1000 == 666) {
				order++;
				break;
			}
			temp /= 10;
		}
	}
	cout << Nth;
}