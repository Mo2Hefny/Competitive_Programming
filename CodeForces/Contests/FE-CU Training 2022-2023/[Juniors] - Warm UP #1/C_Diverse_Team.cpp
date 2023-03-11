#include <iostream>
#include <set>
using namespace std;
int main()
{
	int n, m, i = 0,count = 0, j;
	int arr[100], pos[100];
	cin >> n >> m;
	while (i < n)
		cin >> arr[i++];
	for (i = 0; i < n; i++)
	{
		pos[i] = i + 1;
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] == arr[i])
			{
				pos[i] = -1;
				count++;
				break;
			}
		}
	}
	count = n - count;
	if (count < m)
		cout << "NO" << endl;
	else
	{
		cout << "YES" << endl;
		for (i = 0, j = 0; i < n; i++)
		{
			if (pos[i] != -1 && j < m)
			{
				j++;
				cout << pos[i] << " ";
			}
		}
	}
	return 0;
}
