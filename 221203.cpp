#include <iostream>
#include <string>
using namespace std;

int main(void) {
	int cnt;
	cin >> cnt;
	string num;
	cin >> num;
	int sum = 0;

	for (int i = 0; i < cnt; i++) {
		sum += num[i] - '0';  // �ƽ�Ű �ڵ� �� 48�� ���� ���Ƿ� '0'(=48) ���ָ� ���� �� �ִ�.
	}

	cout << sum;
	
	return 0;


}