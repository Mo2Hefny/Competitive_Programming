int FindOutlier(std::vector<int> arr)
{
    int result;
    int indicator = 0;
    int temp = 0;
    for (auto i : arr) {
        if (i % 2 == 0) {
            indicator += 1;
            result = i;
        }
        else {
            indicator -= 1;
            temp = i;
        }
    }
    indicator > 0 ? result = temp : 0;
    return result;
}