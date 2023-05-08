#include <stdio.h>
int n;
int answer = 1;
int solution(int n){
	if(n % answer == 1){
		return answer;
	}
	answer++;
	return solution(n);
}