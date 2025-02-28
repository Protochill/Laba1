#include <iostream>
using namespace std;
int main() {
    long long n, m, a;
    cin >> n >> m >> a;
    // вычисляем количество плит вдоль стороны n и m
    long long dlin = (n + a - 1) / a;
    long long shir = (m + a - 1) / a;
    // общее количество плит
    long long nado = dlin * shir;
    cout << nado << endl;
    return 0;
}