#include <iostream>
#include <queue>

using namespace std;

int N, M;
char board[30][30] {};
pair<int, int> coin1, coin2;

void solve(void)
{

}

void input(void)
{
    char tmp;

    cin >> N >> M;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> tmp;
        }
    }
}

int main(void)
{
    input();
    solve();

    return 0;
}