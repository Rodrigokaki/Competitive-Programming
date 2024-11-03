#include <bits/stdc++.h>
using namespace std;

#define endl "\n";

void solve(){
    string s1, s2;
    cin >> s1;
    cin >> s2;
    if(s2.length() > s1.length()){
        cout << "ERRO" << endl;
        return;
    }

    int n = s2.length(), lower = 0, higher = s2.length(), ans = 0;
    unordered_multiset<char> mapaLettersS1, mapaLettersCur;
    for(int i=0;i<n;i++){
        mapaLettersS1.insert(s2[i]);
        mapaLettersCur.insert(s1[i]);
    }

    while(higher <= s1.size()){
        if(mapaLettersCur == mapaLettersS1){
            ans++;
        }
        mapaLettersCur.erase(mapaLettersCur.find(s1[lower]));
        lower++;
        mapaLettersCur.insert(s1[higher]);
        higher++;
    }
    cout << ans << endl;
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}
