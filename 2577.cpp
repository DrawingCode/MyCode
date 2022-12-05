#include <iostream>
#include <string>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int a, b, c;
	cin >> a >> b >> c;
	string num = to_string(a * b * c);


	for (int i = 0; i < 10; i++) {  // i�� 0~9
		int cnt = 0;				// ������ ����
		for (int idx = 0; num[idx] != NULL; idx++) {
			if (num[idx] - '0' == i)  // 11720�������� int��ȯ ���̵� �ƴµ� �װ� �����ڿ� ���� �� ��ȯ����?
				cnt++;
		}
		cout << cnt << endl;
	}

	return 0;

	/* �� ���� Ǯ�̹� ����
		<�ٽ�> int �迭[10]�� ���� �� �ε����� count ������ �̿�!

	1. ���ڸ� ���ڿ��� ��ȯ�Ͽ� ����(to_string, �ݴ�� stoi()) ��
	   �ƽ�Ű �ڵ� �������� count �ε��� �� ����
	2. ���� ���� �� ��ȯ ���� int�� ���� ��
	   ��� �������� �̿��Ͽ� count �ε��� �� ����
	   count[result %10]++
	   result /= 10;

	< ���Ӱ� �˰� �� ��>
	1. foreach ����
	for( char c : s) // ���ڿ� s�� �� ���� c�� ���Ͽ� (���̽��̶� ���?)
	count[c - '0']++;

	2. ���� 9�� �ݺ��ϸ鼭 ���� �� �ʿ� ���� �迭�� �ε����� Ȱ���Ͽ� ī��Ʈ
	*/
	return 0;
}