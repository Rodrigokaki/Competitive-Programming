#include <bits/stdc++.h>
using namespace std;

#define ll long long;

    int tree[1001], n, ans = 0;

void solve(){
    cin >> n;

    for(int i=1;i<n+1;i++){
        cin >> tree[i];
    }

    for(int i=1;i<n+1;i++){
        //Olhando node a esquerda
        if(i*2 > n){
            break;
        }

        if(tree[i] >= tree[i*2] && (ans == 0 || ans == 2)){
            ans = 2;
        }
        else if(tree[i] <= tree[i*2] && (ans == 0 || ans == 1)){
            ans = 1;
        }
        else{
            ans = 0;
            break;
        }

        //Olhando node a direita
        if((i*2)+1 > n){
            break;
        }

        if(tree[i] >= tree[(i*2)+1] && (ans == 0 || ans == 2)){
            ans = 2;
        }
        else if(tree[i] <= tree[(i*2)+1] && (ans == 0 || ans == 1)){
            ans = 1;
        }
        else{
            ans = 0;
            break;
        }
    }

    cout << ans << endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    while(t--){
        solve();
    }

    return 0;
}
