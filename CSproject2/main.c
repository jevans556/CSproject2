#include <stdio.h>
#include <math.h>
#include <stdlib.h>

typedef struct tree {
	int x;
	int y;
}tree;

double distanceFormula(int x1, int x2, int y1, int y2) {
	double xdist = x2 - x1;
	double ydist = y2 - y1;
	xdist = pow(xdist, 2);
	ydist = pow(ydist, 2);
	return sqrt(xdist + ydist);

}



int main() {
	FILE* input;
	int testCases = 0;
	input = fopen("in.txt", "r");
	if (input != NULL) {
		fscanf(input, "%d", &testCases);
		for (int i = 0; i < testCases; i++) {
			int numTrees = 0;
			fscanf(input, "%d", &numTrees);
			tree *totalTrees = calloc(2 * numTrees, sizeof(tree));
			
			for (int j = 0; j < numTrees * 2; j++) {
				int xVal = 0;
				int yVal = 0;
				fscanf(input, "%d %d", &xVal, &yVal);
				totalTrees[j].x = xVal;
				totalTrees[j].y = yVal;
				
			}
			printf("\n");
			free(totalTrees);
		}

		fclose(input);
	}
	else {
		printf("Error opening input file");
	}
}