#include <iostream>
<<<<<<< HEAD

using namespace std;
=======
#include <cstring>

#define Min(x,y)    ((x)<(y)?(x):(y))
#define Min3(x,y,z)  ((x)<(y)?(x):((y)<(z)?(y):(z)))
>>>>>>> 5b16624a364f473ea7436bc69db4cd8f1fd71778

#define ticket1     10000
#define ticket3     25000
#define ticket5     37000

<<<<<<< HEAD
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
=======
using namespace std;

int N, M; //N: 여름방학 일수, M: 놀 수 없는 날
int arr[110][50] {};
bool imp[110] {};

int dp(int day, int coupon)
{
    if (day > N) {
        return 0;
    }
    if (arr[day][coupon] != -1) {
        return arr[day][coupon];
    }
    if (imp[day]) {
        return arr[day][coupon] = dp(day + 1, coupon);
    }
    arr[day][coupon] = Min3(ticket1 + dp(day + 1, coupon), ticket3 + dp(day + 3, coupon + 1), ticket5 + dp(day + 5, coupon + 2));
    if (coupon >= 3) {
        arr[day][coupon] = Min(arr[day][coupon], dp(day + 1, coupon - 3));
    }
    return arr[day][coupon];
}

void solve(void)
{
    memset(arr, -1, sizeof(arr));
    cout << dp(1, 0) << endl;
>>>>>>> 5b16624a364f473ea7436bc69db4cd8f1fd71778
}

void input(void)
{
    int tmp;

    cin >> N >> M;
<<<<<<< HEAD
    for (int i = 0; i < M; i++) {
        cin >> tmp;
        arr[0][tmp] = 1;
=======
    for (int i = 0 ; i < M; i++) {
        cin >> tmp;
        imp[tmp] = true;
>>>>>>> 5b16624a364f473ea7436bc69db4cd8f1fd71778
    }
}

int main(void)
{
    input();
    solve();

    return 0;
}