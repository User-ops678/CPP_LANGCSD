#include "std_lib_facilities.h"

int main() {
    vector<string> words;
    string s;
    while(cin>>s && s!="quit") {
        words.push_back(s);
    }
    sort(words.begin(),words.end());
    vector<string>w2;
    if (0<words.size()) {
        w2.push_back(words[0]);
        for (int i = 1; i<words.size(); ++i) {
            if (words[i-1]!=words[i]) {
                w2.push_back(words[i]);
            }
        }
    }
    cout << "found " << words.size()-w2.size() << " duplicates\n";
    for (int i = 0; i<w2.size(); ++i) {
        cout << w2[i] << '\n';
    }
}