#include <iostream>
#include <string>
using namespace std;

int main(void) {
	int a, b, c;
	cin >> a >> b >> c;
	string num = to_string(a * b * c);


	for (int i = 0; i < 10; i++) {  // i�� 0~9
		int cnt = 0;				// ������ ����
		for(int idx=0; num[idx]!=NULL; idx++){  
			if (int(num[idx])-'0' == i)  // 11720�������� int��ȯ ���̵� �ƴµ� �װ� �����ڿ� ���� �� ��ȯ����?
				cnt++;
		}
		cout << cnt << endl;
	}

	return 0;
}