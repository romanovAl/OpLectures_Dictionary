#include <iostream>
#include "Dictionary.h"

using namespace std;

int main() {

	Dictionary dict("слово", "word");
	dict.addWord("дерево", "tree");
	dict.addWord("кодинг", "programming");
	dict.addWord("компьютер", "computer");
	dict.addWord("стол", "table");

	for (auto& x : dict.getDictionary()) {
		cout << x.second << endl;
	}

	

	dict.changeWord("кодинг", "программирование", "coding");

	

	dict.deleteWord("слово");

	cout << endl << "dictionary after changes - " << endl;

	for (auto& x : dict.getDictionary()) {
		cout << x.second << endl;
	}

	return 0;
}