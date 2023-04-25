#include <stdio.h>

unsigned long long int a, b, c, save;

unsigned long long int calc(unsigned long long int A, unsigned long long int B){
	if(B == 1){
		return A % c;
	} 
	unsigned long long int result = calc(A, B/2);
	result = (result * result) % c;
	if (B % 2 == 0) {
    		return result;
	} else {
    		return (result * A) % c;
	}
}

int main() {
	scanf("%llu %llu %llu", &a, &b, &c);
	save = calc(a, b);
	if(a == c){
		 printf("0");
		 return 0;
	} else if(b == 1){
		printf("%llu", a % c);
	} else {
		printf("%llu", save);
	}
	return 0;
}
