#include <iostream>
#include <string>
using namespace std;
// A�� 65, a�� 97
int main(void) {

	/* Ǯ�̰���
	- ���� ���� ��:�迭 �ε����� ����ϱ�
	- ������ ��: ���� �빮��, �ҹ��� �迭 ���� �ʿ� ����. 
	�󵵼� üũ ���� �ϱ�


	- ���Ӱ� �˰� �� ��
	1. ���ڿ� �Լ�
	str.length() > ���� ���� 
	�̿ܿ��� ��������
	2. string ���̿��� ��ǻ� ������ ����
	3. �� ��ȯ ������ static_cast<type>
	�� �������̶�� ��
	4. c++�� c��Ÿ�ϰ� �ٸ��� ���ڿ� ���� �ι��ڸ� �� ����
	(�� ���̴� ���� �ν��� ���ϴ� ����)
	�׷��� ���� ����ϸ� �״�� ����

	*/

	string str;
	cin >> str;

	int CNT[26] = {0,}; //�빮��

	for (int i = 0; i<str.length(); i++) {
		if (str[i] >= 97) // �ҹ���
		{
			CNT[str[i] - 97] += 1;
		}
		else // �빮��
			CNT[str[i] - 65] += 1;
		
	}



	int max = 0;
	int num = 0;


	for (int j = 0; j < 26; j++) {
		if (max < CNT[j]) {
			max = CNT[j];
			num = j;
		}
		/* else if ((max == CNT[j]) && (max != 0)) {
			num = 63;
			break;
			
		} */    // �� �ȵ�????? �� ��¥ �𸣰ڴ�...
	}
	int max_count = 0;

	// �ִ� �󵵼� üũ
	for (int i = 0; i < 26; i++) {
		if (max == CNT[i])
			max_count++;
	}
	// �ִ� ���� ���� �������� ��
	if (max_count > 1)
		cout << "?";
	else
		cout << static_cast<char>(num + 65);

	return 0;




}