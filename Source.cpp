#include <iostream>
using namespace std;
int main() {
	//��� ������ ����� ����� �������� 5. ������ � ���� ������ � ������� ������ �� ����� � ���� ������.
	/*int mas[5];
	//����
	for (int i = 0; i < 5; i++) {
		cin >> mas[i];
	}
	//�����
	for (int i = 0; i < 5; i++) {
		cout << mas[i] << ' ';
	}*/

	//��� ������ ����� ����� (������������� � �������������) �������� 10. ������ ������ � ������, ������� � ���� ������.
	//����� ���-�� ������������� ����� � �������.
	/*const int size = 10;
	int num[size];
	//����
	for (int i = 0; i < size; i++) {
		cin >> num[i];
	}
	//�����
	for (int i = 0; i < size; i++) {
		cout << num[i] << ' ';
	}
	cout << endl;
	//������� ���-�� �������������
	int k = 0;
	for (int i = 0; i < size; i++) {
		if (num[i] > 0) k++;
	}
	cout << ">0" << k << endl;*/

	//1
	/*const int size = 10;
	int num[size];
	for (int i = 0; i < 10; i++) {
		cin >> num[i];
	}
	for (int i = 0; i < 10; i++) {
		cout << num[i] << ' ';
	}*/
	
	//2
	/*const int size = 8;
	int num[size];
	
	for (int i = 0; i < 8; i++) {
		cin >> num[i];
	}
	
	for (int i = 0; i < 8; i++) {
		cout << num[i] << ' ';
	}
	cout << endl;
	int sum = 0;
	for (int i = 0; i < 8; i++) {
		if (i % 2 != 0) {
			sum += num[i];
		}
	}
	cout << sum;*/

	//3
	const int size = 5;
	int num[size];

	for (int i = 0; i < 5; i++) {
		cin >> num[i];
	}

	for (int i = 0; i < 5; i++) {
		cout << num[i] << ' ';
	}
	cout << endl;
	int pro = 0;
	for (int i = 0; i < 5; i++) {
		if (i % 2 != 0) {
			pro += num[i];
		}
	}
	cout << pro;

	
}