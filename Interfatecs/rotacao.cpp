#include <bits/stdc++.h>
using namespace std;

#define ll long long;

float x, y, ansX, ansY, ang, matrix[3][3], n, rad;

void solve(){
    cin >> n >> ang;

    rad = 180/3.1415;
    ang = ang/rad;

    matrix[0][0] = cos(ang);
    matrix[0][1] = -sin(ang);
    matrix[1][0] = sin(ang);
    matrix[1][1] = cos(ang);

    while(n--){
        cin >> x >> y;

        ansX = (x * matrix[0][0])+(y * matrix[0][1]);
        ansY = (x * matrix[1][0])+(y * matrix[1][1]);

        std::cout << std::setprecision(2) << std::fixed;

        cout << ansX << " " << ansY << "\n";
    }
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
