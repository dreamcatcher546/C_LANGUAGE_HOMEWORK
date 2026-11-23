#include <stdio.h>
#define ROWA 2
#define COLA 4
#define ROWB COLA
#define COLB 5
#define ROWC ROWA
#define COLC COLB
int main(void)
{
	int A[ROWA][COLA], B[ROWB][COLB], C[ROWC][COLC];
	
	for(int i = 0; i < ROWA; i++)
	{
		for(int j = 0; j < COLA; j++){scanf("%d", &(A[i][j]));}
	}
	
	for(int i = 0; i < ROWB; i++)
	{
		for(int j = 0; j < COLB; j++){scanf("%d", &(B[i][j]));}
	}

	//int C[ROWC][COLC] = {0};
	for(int i = 0; i < ROWC; i++)
	{
		for(int j = 0; j < COLC; j++){C[i][j] = 0;}
	}

	/*multiply*/
	for(int i = 0; i < ROWC; i++)
	{
		for(int j = 0; j < COLC; j++)
		{
			for(int k = 0; k < COLA; k++)
			{
				/* or k < ROWB */
				C[i][j] += A[i][k] * B[k][j];			
			}
		}
	}
	
	for(int i = 0; i < ROWC; i++)
	{
		printf("row%d -> ", i + 1);
		for(int j = 0; j < COLC; j++)
		{
			if(j > 0) printf(", ");
			printf("%d", C[i][j]);
		}
		printf("\n");
	}
	return 0;
}
