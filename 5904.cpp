#include <iostream>

using namespace std;

int N, idx;

void moo(int n)
{
    if (n == 1) {
        if (idx + 1 == N) {
            cout << 'm' << endl;
            exit(0);
        }
        else if (idx + 2 == N || idx + 3 == N) {
            cout << 'o' << endl;
            exit(0);
        }
        idx += 3;
        return;
    }

    moo(n - 1);
    if (idx + 1 == N) {
        cout << 'm' << endl;
        exit(0);
    }
    idx++;
    for (int i = 0; i <= n; i++) {
        if (idx + 1 == N) {
            cout << 'o' << endl;
            exit(0);
        }
        idx++;
    }
    moo(n - 1);
}

void solve(void)
{
    moo(30);
}

void input(void)
{
    cin >> N;
}

int main(void)
{
    input();
    solve();

    return 0;
}