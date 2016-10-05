#include <stdio.h>

int prob(float prob, int state[])
{
	prob = 100 / prob;

	if(state[1] == 0) {
		return 1;
	}

	if(state[0] == 0) {
		return 0;
	}

	if((state[1] / prob) + (state[0] / prob) < state[0]) {
		return 1;
	}

	return 0;
}

int main()
{
	printf("Prob: ");
	float n;
	scanf("%f", &n);

	printf("Nums: ");
	int nums;
	scanf("%d", &nums);

	int cases[2] = {0, 0};

	int i;
	int k;
	for(i = 0; i < nums; i++) {
		k = prob(n, cases);
		cases[k]++;
	}

	printf("%d : %d\n---------------------\n", cases[0], cases[1]);

	return 0;
}
