#include <iostream>
#include <set>
using namespace std;
int main()
{
	int d;
	int bad[4], i = 0;
	while (i < 4)
		cin >> bad[i++];
	cin >> d;
	set <int> arr;
	int count = 0;
	for (i = 1; i <= d; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (i % bad[j] == 0)
				arr.insert(i);
		}
	}
	for (auto x : arr)
		count++;
	cout << count << endl;
	return 0;
}