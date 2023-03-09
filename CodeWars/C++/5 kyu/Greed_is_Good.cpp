#include <vector>
int score(const std::vector<int>& dice) {
	std::vector<int> value = dice;
	int point[][6]{ {1000, 200, 300, 400, 500, 600},{100, 0, 0, 0, 50, 0} };
	int count[6];
	int points = 0;
	for (int i = 0; i < 6; i++) {
		count[i] = std::count(value.begin(), value.end(), i+1);
		if (count[i] > 2) {
			points += point[0][i];
			count[i] -= 3;
		}
		if (count[i] > 0) {
			points += point[1][i] * count[i];
		}
	}
	return points;
}