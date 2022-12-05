#include <iostream>
#include <string>
using namespace std;

int main(void) {
	int a, b, c;
	cin >> a >> b >> c;
	string num = to_string(a * b * c);


	for (int i = 0; i < 10; i++) {  // i는 0~9
		int cnt = 0;				// 숫자의 개수
		for(int idx=0; num[idx]!=NULL; idx++){  
			if (int(num[idx])-'0' == i)  // 11720번에서는 int변환 없이도 됐는데 그건 연산자에 의한 형 변환때문?
				cnt++;
		}
		cout << cnt << endl;
	}

	return 0;
}