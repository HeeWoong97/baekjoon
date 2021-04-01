#include <iostream>
#include <algorithm>

using namespace std;

/*
    가장 큰 수에 맞추면 된다.
    가장 큰 수 왼쪽 부분에서 가장 작은수??
    가장 큰 수 오른쪽 부분에서 가장 작은수??
*/

int n;
int arr[1000000010] {};

void input(void)
{
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    cout << arr[n - 1] - arr[0] << endl;
}

int main(void)
{
    input();

    return 0;
}