/*
������. �������� ������� ���������
����� ������������� ����������� ���������, ��� �� ������ �������
���������. (��� ����� ������� ����� switch)
��������� ������ �� ������� ������� ����� ������������ � �������
���������.
1- ������� (�� 1 �� 3)
2-������� (�� 4-5)
3-������� (�� 7 -10)
����� ����, ��� ������������ ������ ���������. �� ��������
��������������� �� ������� (5 ����)
��������: ������� ����� 2 �� 2.
����� ������� � ���������� ���������. ������� ����� �������� � �������
����� ������ (������ ������������ , ���� ������� ����������� ��
�������).
������� ���������� ���������� �����
num = rand()%(max-min+1)+min;
*/

#include  <iostream>
#include <cstdlib> <!--���������� , ����� ������������� �� ������ � VS -->
#include <ctime>


using namespace std;

void main() {
	setlocale(LC_ALL, "russian");
	int level, a = 10, b = 10, c, user;
	int max_value, min_value;
	int const num_question = 5;
	int tru_answer = 0, false_answer = 0;


	srand(time(NULL));
	cout << "������������. ��� ����. \n �������� ������� ��������� \n 1-������ \t 2-������� \t 3-������� \n";
	cin >> level;

	switch (level) {
	case 1: {
		cout << "������ \n";
		min_value = 1;
		max_value = 3;
		break;
	}
	case 2: {
		cout << "������� \n";
		min_value = 4;
		max_value = 6;

		break;
	}
	case 3: {
		cout << "������� \n";
		min_value = 7;
		max_value = 10;

		break;
	}
	}


	for (int i = 0; i < num_question; i++) {
		a = rand() % (max_value - min_value + 1) + min_value;
		b = rand() % (max_value - min_value + 1) + min_value;
		c = a*b;

		cout << a << " * " << b << " = ? \n";
		cin >> user;
		if (user == c) {
			cout << "��� ���������� �����. \n";
			tru_answer++;
		}
		else {
			cout << "�� �����. \n";
			false_answer++;
		}

	}
	cout << "���������� ���������� ������� = " << tru_answer << "; \n";
	cout << "���������� ������ = " << false_answer << "; \n";
	if (tru_answer == num_question) cout << "�� ��������! \n";
	else cout << "�� ���������! \n";




}