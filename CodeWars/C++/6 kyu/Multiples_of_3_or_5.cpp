int solution(int number)
{
    int sum = 0;
    for (int i = 1; i < number; i++) {
        if ((number - i) % 5 == 0 || (number - i) % 3 == 0)
            sum += (number - i);
    }
    return sum;
}