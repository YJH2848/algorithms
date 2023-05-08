#include <stdio.h>
#include <string.h>
int main()
{
	char arr[101] = {};
	int indexNumber = 0;
	scanf("%s", arr);
	indexNumber = strlen(arr); 
	int ans = 1;
	for(int i = 0; i < indexNumber -1/ 2; i++)
	{
		if(arr[i] != arr[indexNumber - 1 - i])
		{
			ans = 0;
			break;
		}
		else{
			ans = 1;
		}
	}
	printf("%d\n", ans);
}