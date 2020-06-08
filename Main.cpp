#include <iostream>
#include "Dictionary.h"

using namespace std;

int main() {

	Dictionary dict("�����", "word");
	dict.addWord("������", "tree");
	dict.addWord("������", "programming");
	dict.addWord("���������", "computer");
	dict.addWord("����", "table");

	for (auto& x : dict.getDictionary()) {
		cout << x.second << endl;
	}

	

	dict.changeWord("������", "����������������", "coding");

	

	dict.deleteWord("�����");

	cout << endl << "dictionary after changes - " << endl;

	for (auto& x : dict.getDictionary()) {
		cout << x.second << endl;
	}

	return 0;
}