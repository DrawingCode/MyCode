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
		sum += num[i] - '0';  // 아스키 코드 상 48씩 차이 나므로 '0'(=48) 빼주면 얻을 수 있다.
	}

	cout << sum;
	
	return 0;


}