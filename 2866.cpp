#include <iostream>
#include <cstring>

using namespace std;

int R, C;
char table[1010][1010] {};
int cnt;

void solve(void)
{
    for (int i = 0; i < C; i++) {
        cout << table[i] << endl;
    }
}

/*
    배열을 transpose하면서 입력
    R*C => C*R
*/
void input(void)
{
    cin >> R >> C;
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            cin >> table[j][i];
        }
    }
    for (int i = 0; i < C; i++) {
        table[i][R] = 0;
    }
}

int main(void)
{
    input();
    solve();

    return 0;
}