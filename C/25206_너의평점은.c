#include <stdio.h>
#include <string.h>

char name[50], tier[4];  
float score, score2, tier2, result; 

void Calc() {
	score2 += score;
	score *= tier2;	
	result += score;
}
int main(){
	/*
	//(학점 * 과목평점)의 합 / 학점의 총합 
	name : 과목명
	tier : 등급
	tier2 : 과목평점 
	score : 학점 
	*/
	for(int i = 0; i < 20; i++){
		scanf("%s %f %s", &name, &score, &tier);
		if(strcmp(tier, "P")==0) continue;
	

		if(strcmp(tier, "A+")==0){
			tier2 = 4.5;
			Calc();
		} 
		else if(strcmp(tier, "A0")==0){
			tier2 = 4.0;
			Calc();
		} 
		else if(strcmp(tier, "B+")==0){
			tier2 = 3.5;
			Calc();
		} 
		else if(strcmp(tier, "B0")==0){
			tier2 = 3.0;
			Calc();
		} 
		else if(strcmp(tier, "C+")==0){
			tier2 = 2.5;
			Calc();
		} 
		else if(strcmp(tier, "C0")==0){
			tier2 = 2.0;
			Calc();
		} 
		else if(strcmp(tier, "D+")==0){
			tier2 = 1.5;
			Calc();
		} 
		else if(strcmp(tier, "D0")==0){
			tier2 = 1.0;
			Calc();
		} 
		else if(strcmp(tier, "F")==0){
			tier2 = 0;	
			Calc();
		}
			
	}
	
		printf("%f", result / score2);   
	return 0;
}
