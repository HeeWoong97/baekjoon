#include <iostream>
#include <string>

using namespace std;

/*
    0: number[0][0] + number[1][0] + number[2][0] + number[3][0] + number[4][0]
    1: 
    2: number[0][0] + number[1][1] + number[2][1] + number[3][2] + number[4][0]
    3: number[0][0] + number[1][1] + number[2][1] + number[3][1] + number[4][0]
    4: number[0][1] + number[1][0] + number[2][1] + number[3][1] + number[4][1]
    5: number[0][0] + number[1][2] + number[2][1] + number[3][1] + number[4][0]
    6: number[0][0] + number[1][2] + number[2][1] + number[3][0] + number[4][0]
    7: number[0][0] + number[1][1] + number[2][2] + number[3][1] + number[4][1]
    8: number[0][0] + number[1][0] + number[2][1] + number[3][0] + number[4][0]
    9: number[0][0] + number[1][0] + number[2][1] + number[3][1] + number[4][0]
*/
string number[5][3] = {{"###", "#.#", "000"}, {"#.#", "..#", "#.."}, {"#.#", "###", "..#"}, {"#.#", "..#", "#.."}, {"###", "..#", "000"}};

string zero[5] = {"###",
                  "#.#",
                  "#.#",
                  "#.#",
                  "###"};

string one[5] = {"#",
                 "#",
                 "#",
                 "#",
                 "#"};

string two[5] = {"###",
                 "..#",
                 "###",
                 "#..",
                 "###"};

string three[5] = {"###",
                   "..#",
                   "###",
                   "..#",
                   "###"};

string four[5] = {"#.#",
                  "#.#",
                  "###",
                  "..#",
                  "..#"};

string five[5] = {"###",
                  "#..",
                  "###",
                  "..#",
                  "###"};

string six[5] = {"###",
                 "#..",
                 "###",
                 "#.#",
                 "###"};

string seven[5] = {"###",
                   "..#",
                   "..#",
                   "..#",
                   "..#"};

string eight[5] = {"###",
                   "#.#",
                   "###",
                   "#.#",
                   "###"};

string nine[5] = {"###",
                  "#.#",
                  "###",
                  "..#",
                  "###"};

int N;
string sig;
int chunk;
string msg[5];

void solve(void)
{
    for (int i = 0; i < 5; i++) {
        msg[i] = sig.substr(chunk * i, chunk);
    }
    cout << endl;
    for (int i = 0; i < 5; i++) {
        cout << msg[i] << endl;
    }
}

void input(void)
{
    cin >> N;
    cin >> sig;
    chunk = N / 5;
}

int main(void)
{
    input();
    solve();

    return 0;
}