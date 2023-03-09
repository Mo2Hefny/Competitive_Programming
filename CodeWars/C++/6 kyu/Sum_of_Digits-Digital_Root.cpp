int digital_root(int n) {
	int sum = n % 10;
	while (n > 9){
		n /= 10;
		sum += n % 10;
	}
	if (sum > 9) {
		sum = digital_root(sum);
	}
	return sum;
}