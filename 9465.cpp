#include <iostream>

#define MAX(x, y)   ((x) > (y) ? (x) : (y))

using namespace std;

int main(void)
{
    int T, n;
    int sticker[2][100000];

    cin >> T;
    for (int i = 0; i < T; i++) {
        cin >> n;
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < n; k++) {
                cin >> sticker[j][k];
            }
        }

        int memo[2] = {sticker[0][0], sticker[1][0]};
        int tmp[2];

        for (int i = 1; i < n; i++) {
            tmp[0] = memo[0]; tmp[1] = memo[1];
            for (int j = 0; j < 2; j++) {
                memo[j] = MAX(tmp[j], sticker[j][i] + tmp[!j]);
            }
        }
        cout << MAX(memo[0], memo[1]) << endl;
    }

    return 0;
}