#include<iostream>
#include<vector>

using namespace std;



void func() {
    vector<int> votes;
    char vote;
    cin >> vote;
    votes[vote - 'a']++; 
}