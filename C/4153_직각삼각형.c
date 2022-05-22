#include <stdio.h>
int main()
{
    int A,B,C;

    while(1)
    {
        scanf("%d %d %d", &A, &B, &C);
    int A2 = A*A;
    int B2 = B*B;
    int C2 = C*C;
        if(A == 0 && B == 0 && C == 0)
        {
            break;
        }
        else if(A2+B2==C2 || A2+C2==B2 || B2+C2==A2)
        {
            printf("right\n");
        }
        else
        {
            printf("wrong\n");
            
        }
    }
    return 0;
}