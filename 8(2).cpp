#include <iostream>
#include <map>
#include <sstream>
#include <string>
using namespace std;

int main() {
    string sentence;
    cout << "Enter a sentence: ";
    getline(cin, sentence);

    map<string, int> wordFrequency;
    stringstream ss(sentence);
    string word;

    while (ss >> word) {
        wordFrequency[word]++;
    }

    cout << "\nWord Frequency Distribution:" << endl;
    for (auto it = wordFrequency.begin(); it != wordFrequency.end(); ++it) {
        cout << it->first << ": " << it->second << endl;
    }

    cout << "\nName: ANSH RABARI " << endl << "ID: 24CE100";

    return 0;
}

