#include <iostream>
#include <iomanip>      // std::setw
#include <string>
#include <limits>

using namespace std;

int countDigits(int n) {
    int digits = 0;
    
    while (n) {
        n /= 10;
        digits++;
    }
    
    return digits;
}

int main() {
    
    int N, M, width;
    long double matrix[20][20], greatest = -1, temp;
    
    cin >> N;
    
    for (int i = 0; i < N; i++) {
        cin >> M;
        
        for (int j = 0; j < M; j++) {
            for (int k = 0; k < M; k++) {
                cin >> temp;
                
                long double pow = (long double) temp*temp;
                
                if (pow > greatest) {
                    greatest = pow;
                }
                
                matrix[j][k] = pow; 
            }
        }
        
        width = countDigits(greatest);
        
        cout << "Quadrado da matriz #" << i + 4 << ":" << endl;
        
        for (int j = 0; j < M; j++) {
            for (int k = 0; k < M; k++) {
                cout << right << setw(width) << fixed << setprecision(0) << matrix[j][k];
                
                if (k != (M - 1)) {
                    cout << " ";
                }
            }
            cout << endl;
        }
        
        if (i != (N - 1)) {
            cout << endl;
        }
    }

    return 0;
}