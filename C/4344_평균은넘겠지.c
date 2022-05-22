#include <stdio.h>
int C, N, j;
double avg;
int sum;
int k;
int an, arr_num;
double p;
int main()
{
	int score[1001] = {0,};

	scanf("%d", &C);
	for(int i = 0; i < C; i++)
	{
		scanf("%d", &N);
		for(j = 0; j < N; j++)
		{
			scanf("%d", &score[j]);
			sum += score[j];
		
		}
		avg = (float)sum/N;	
		// printf("평균은%.3f입니다.\n", avg);	
		for(k = 0; k<N; k++){
            if(avg < score[k]) 
		    {
			    // printf("%d ", score[k]);

				an = sizeof(score[k]) / sizeof(score[0]);
				arr_num += an;
		    }
        }
		p = (float)arr_num / N * 100;
		printf("%.3f%%\n", p);
		// printf("배열 안의 요소 개수는 = %d\n", arr_num);
		arr_num = 0;
		sum = 0;
	}
	return 0;
}



