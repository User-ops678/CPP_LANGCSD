#include "std_lib_facilities.h"

int main() {
    vector<string> words;
    string s;
    while(cin>>s && s!="quit") {
        words.push_back(s);
    }
    sort(words.begin(),words.end());
    for(int i = 0; i<words.size(); ++i) {
        cout << words[i] << '\n';
    }
}