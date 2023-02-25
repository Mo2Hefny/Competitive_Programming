#include <iostream>

using namespace std;
int distinct(int year)
{
    int seen[10] = { 0 };
    int n = year;
    while (n) {
        int digit = n % 10;
        n /= 10;
        if (seen[digit]++)
            return distinct(year + 1);
    }
    return (year);
}
int main()
{
    int year;
    cin >> year;
    int n = year;
    n = distinct(year + 1);
    cout << n << endl;
    return 0;
}
