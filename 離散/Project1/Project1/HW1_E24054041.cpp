#include<iostream>
#include<vector>
#include<string>
using namespace std;

void makeList(vector<string> *);//���ϥΪ̻s�@list��function
void printList(vector<string>*);//��ܦb�ù��W��function
void findWord(vector<string>*);//��M�O�_���ӳ�r��funciotn
void main() {

	vector<string>list;

	makeList(&list);
	findWord(&list);
	system("pause");
}
void makeList(vector<string> * list) {
	

	int count = 0;//�p�⦨�\��J�X��
	while (count < 5) {
		string tmp;//�Ȯɥ��s�ϥΪ̿�J����r
		printList(list);//print
		cin >> tmp;
		list->push_back(tmp);//�N��r�s�Jvector

		//�M���ù�
		system("cls");
		count++;//�����w�g��J�X�ӳ�r
	}//while


}

void printList(vector<string>* list) {

	cout << "�п�J 5 �ӳ�r" << endl;

	for (int i = 0; i < list->size(); i++) {
		cout << "�� " << i+1 << " �ӳ�r�O: " << list->at(i) << endl;
	}
}

void findWord(vector<string>* list) {
	string tmp;
	bool found = false;

	printList(list);
	cout << "�п�J�Q�n�䪺��r: " << endl;
	cin >> tmp;
	for (int i = 0; i < 5; i++) {
		if (tmp == list->at(i)) {
			cout << i+1<< " ";
			found = true;
		}//if end
	}
	if (!found) {
		cout << "NOT FOUND!" << endl;
	}//if end
}