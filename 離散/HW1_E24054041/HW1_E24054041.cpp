#include<iostream>
#include<vector>
#include<string>
using namespace std;

void makeList(vector<string> *);//讓使用者製作list的function
void printList(vector<string>*);//顯示在螢幕上的function
void findWord(vector<string>*);//找尋是否有該單字的funciotn
void main() {

	vector<string>list;

	makeList(&list);
	findWord(&list);
	system("pause");
}
void makeList(vector<string> * list) {
	

	int count = 0;//計算成功輸入幾個
	while (count < 5) {
		string tmp;//暫時先存使用者輸入的單字
		printList(list);//print
		cin >> tmp;
		list->push_back(tmp);//將單字存入vector

		//清除螢幕
		system("cls");
		count++;//紀錄已經輸入幾個單字
	}//while


}

void printList(vector<string>* list) {

	cout << "請輸入 5 個單字" << endl;

	for (int i = 0; i < list->size(); i++) {
		cout << "第 " << i+1 << " 個單字是: " << list->at(i) << endl;
	}
}

void findWord(vector<string>* list) {
	string tmp;
	bool found = false;

	printList(list);
	cout << "請輸入想要找的單字: " << endl;
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