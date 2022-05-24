#include <iostream>
using namespace std;

int main(int argc, char){
    int n, a[100000];
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> a[i];
    int sum = 0;
    for(int i = 0; i < n; i++)
        sum += a[i];
    int ans = 0;
    for(int i = 0; i < n; i++)
        ans += (i + 1) * a[i];
    cout << ans - sum << endl;
    return 0;
}