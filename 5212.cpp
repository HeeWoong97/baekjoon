#include <iostream>

#define Max(x, y)   (x) > (y) ? (x) : (y)
#define Min(x, y)   (x) < (y) ? (x) : (y)

using namespace std;

int R, C;
char map[15][15] {};
char newMap[15][15] {};
int cnt;
pair<int, int> maxRight = {0, 0};
pair<int, int> maxLeft = {14, 14};

void solve(void)
{
    for (int i = 1; i <= R; i++) {
        for (int j = 1; j <= C; j++) {
            if (map[i][j] == 'X') {
                if (map[i + 1][j] == '.') cnt++;
                if (map[i - 1][j] == '.') cnt++;
                if (map[i][j - 1] == '.') cnt++;
                if (map[i][j + 1] == '.') cnt++;
                if (cnt >= 3) { 
                    newMap[i - 1][j - 1] = '.';
                    cnt = 0;
                    continue;
                }
                newMap[i - 1][j - 1] = map[i][j];
                cnt = 0;
                continue;
            }
            newMap[i - 1][j - 1] = map[i][j];
        }
    }
    cout << endl;
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            cout << newMap[i][j];
        }
        cout << endl;
    }
}

void input(void)
{
    cin >> R >> C;
    for (int i = 1; i <= R; i++){
        for (int j = 1; j <= C; j++) {
            cin >> map[i][j];
        }
    }
    for (int i = 0; i <= C + 1; i++) {
        map[0][i] = '.';
        map[R + 1][i] = '.';
    }
    for (int i = 0; i <= R + 1; i++) {
        map[i][0] = '.';
        map[i][C + 1] = '.';
    }
}

int main(void)
{
    input();
    solve();

    return 0;
}