#include <bits/stdc++.h>
using namespace std;

#define ll long long;

string strand, complementary;
unordered_map<char, char> dic;
int biggest, sizeN, streak, inicial;

int main(){
    dic['A'] = 'T';
    dic['T'] = 'A';
    dic['C'] = 'G';
    dic['G'] = 'C';

    cin >> strand;
    complementary = "";
    sizeN = strand.length();
    for(int i=0;i<sizeN;i++){
        complementary += dic[strand[i]];
    }

    biggest = 1;
    streak = 0;
    for(int i=0;i<sizeN;i++){
        if(strand[i] == complementary[sizeN-i-1]){
            streak++;
        }
        else{
            streak = 0;
        }

        if(streak > biggest){
            biggest = streak;
            inicial = i-biggest+2;
        }
    }

    if(biggest < 2){
        cout << "false" << "\n";
    }
    else{
        cout << inicial << " " << biggest << "\n";
    }


    return 0;
}
