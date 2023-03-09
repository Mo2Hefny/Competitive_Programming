long zeros(long n) {
  long zeros = 0;
	for (int i = 5; i <= n; i *= 5) {
		zeros += n / i;
	}
	return zeros;
}