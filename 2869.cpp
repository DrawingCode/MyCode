#include <iostream>
using namespace std;

int main(void) {
	//���ǲ�� ������ v-a ��ǥ���� �¾���...
	// �̷��� �����ٴ�!!
	// v-a�� ��ǥ���̶�� ������, �̰� a-b�� ������ �������� 0�̳� 0�� �ƴϳķ� ����
	// 0�̸� �׳� +1 ���ָ� �Ǵµ�, 0�� �ƴϸ� +2
	// 0�� �ƴ� ��� ��������ŭ �ö󰡴� �� a���� ������ �����Ƿ�...

	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);

	int  a, b, v;
	cin >> a >> b >> v;

	int cnt = (v-a)/(a-b);
	int mod = (v - a) % (a - b);

	if (mod != 0)
		cnt++;

	cout << cnt+1;
	
	return 0;


}