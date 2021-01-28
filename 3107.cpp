#include <iostream>
#include <string>

using namespace std;

string IPv6;
string result;
int cnt;
int chunk;

void insert(int idx)
{
    for (int i = 0; i < strlen(IPv6) - idx; i++) {
        IPv6[strlen(IPv6) - i] = IPv6[strlen(IPv6) - i - 1];
    }
    IPv6[idx] = '0';
}

void solve(void)
{
    int cur;

    for (int i = 0; i < IPv6.length(); i++) {
        if (IPv6[i] == ':' && i % 5 != 0) {
            
        }
    }
}

void input(void)
{
    cin >> IPv6;
}

int main(void)
{
    input();
    solve();

    return 0;
}