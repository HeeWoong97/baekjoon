#include <iostream>

using namespace std;

#define ticket1     10000
#define ticket3     25000
#define ticket5     37000

int N, M; //N: 여름방학 일수, M: 리조트에 못가는 날의 수
int arr[2][1010] {}; //배열 인덱스: 날짜, arr[0]: 못 가는 날인지. arr[1]: 그 날짜까지의 최소금액
int coupon;
int freeTicket;

void solve(void)
{
    for (int i = 0; i < N; i++) {
        if (arr[0][i] == 1) { //갈 수 없는 날이라면
            continue;
        } 

        if (freeTicket > 0) { //freeTicket이 있으면 하루 이용권 대신 사용

        }
        else { //하루 이용권 구매

        }
        
    }
}

void input(void)
{
    int tmp;

    cin >> N >> M;
    for (int i = 0; i < M; i++) {
        cin >> tmp;
        arr[0][tmp] = 1;
    }
}

int main(void)
{
    input();
    solve();

    return 0;
}