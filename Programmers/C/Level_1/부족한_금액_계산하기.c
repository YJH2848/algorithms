#include <stdio.h>

long long int initial;

long long int solution(int p, int m, int c) {
    for(int i = 1; i <= c; i++){
        initial += p * i;
    }
	if(initial > m){
		return initial - m;
	} else {
		return 0;
	}
}