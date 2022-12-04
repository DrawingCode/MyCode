#include <iostream>
using namespace std;


int main(void) {

	int a, b;
	while (cin >> a >> b) { // 읽은 뒤 eof 체크. 연산자 오버로딩
			cout << a + b << '\n';
	}
	return 0;

}