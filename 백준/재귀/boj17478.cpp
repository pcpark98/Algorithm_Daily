#include <iostream>
using namespace std;

void print(int cnt, int N) {
	for (int i = 0; i < cnt; i++) cout << "____";
	cout << "\"����Լ��� ������?\"\n";
	if (cnt < N) {
		for (int i = 0; i < cnt; i++) cout << "____";
		cout << "\"�� ����. �������� �� �� ����⿡ �̼��� ��� ������ ����� ������ �־���.\n";
		for (int i = 0; i < cnt; i++) cout << "____";
		cout << "���� ������� ��� �� ���ο��� ������ ������ �߰�, ��� �����Ӱ� ����� �־���.\n";
		for (int i = 0; i < cnt; i++) cout << "____";
		cout << "���� ���� ��κ� �ǾҴٰ� �ϳ�. �׷��� ��� ��, �� ���ο��� �� ���� ã�ƿͼ� ������.\"\n";
		print(cnt + 1, N);
	}

	if (cnt == N) {
		for (int i = 0; i < cnt; i++) cout << "____";
		cout << "\"����Լ��� �ڱ� �ڽ��� ȣ���ϴ� �Լ����\"\n";
	}
	for (int i = 0; i < cnt; i++) cout << "____";
	cout << "��� �亯�Ͽ���.\n";
}

int main() {
	int N;
	cin >> N;

	cout << "��� �� ��ǻ�Ͱ��а� �л��� ������ �������� ã�ư� ������.\n";
	print(0, N);
}