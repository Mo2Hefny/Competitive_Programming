int persistence(long long n){
 int num = 1;
	int count = 0;
	while(n > 9) {
		num *= (n % 10);
		n = n /10;
		count = 1;
	}
	num *= n;
	num > 9 ? count += persistence(num) : 0;
	return count;
}