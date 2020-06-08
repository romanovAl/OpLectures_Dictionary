#pragma once
#include <iostream>
#include <map>
#include <string>


using namespace std;

class Dictionary {
private:
	map<string, string> dictionary;

	
public:

	Dictionary(string ruWord, string enWord) {
		addWord(ruWord, enWord);
	}


	void addWord(string ruWord, string enWord) {
		dictionary.insert(make_pair(ruWord, enWord));
	}
	
	void deleteWord(string ruWord) {
		map<string, string> ::iterator it;
		it = dictionary.find(ruWord);
		dictionary.erase(it);
	}

	string findWord(string ruWord) {
		return dictionary[ruWord];
	}

	void changeWord(string ruWord, string newRuWord, string newEnWord) {
		deleteWord(ruWord);
		addWord(newRuWord, newEnWord);
	}

	map<string, string> getDictionary() {
		return dictionary;
	}
};