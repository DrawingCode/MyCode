#include <iostream>
#include <cstring>
using namespace std;


int main(void) {
	string word;
	cin >> word;
	int arr[26];
	fill_n(arr, 26, -1);

	for (int i = 0; i < word.length(); i++) {
		if(arr[word[i]-97]==-1)
			arr[word[i] - 97] = i;
	}


	for (int i = 0; i < 26; i++) {
		cout << arr[i] << " ";
	}

	/*
	string STL Ȱ��
	find �Լ� : �Է� ���ڿ��� ���ʷ� �����ϴ� ��ġ�� �ε��� ��ȯ
	���� ���� ���ڿ��̸� string::npos ��ȯ.
	npos ���� -1�� ���ǵǾ����� �ڷ����� unsigned �̹Ƿ� 2�� ���� ���信 ���� 
	ǥ���� �� �ִ� �ִ� ũ���� ��� ��� 
	>> unsigned�� �ƴ� int������ ���

	string s;
	string alphabet = "abcdefghijklmnopqrstuvwxyz";
	cin>>s;
	for( int i=0; i<alphabet.length();i++)
		cout << (int)s.find(alphabet[i]) >> " ";

	strlen�� length�� ����
	strlen�� ���ڸ� char �� �����ͷ�, length�� �׳� string �ڿ� �Լ� ���̸� ��
	
	
	*/

	return 0;
}