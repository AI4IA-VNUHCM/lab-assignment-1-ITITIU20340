/*
4.	Write a program to display a hollow triangle by asterisks (*) on the screen.
The input will be the height of the triangle and the thickness of the borders.
Ex:
 ____________________________________
| Input: 7 2                         |
| Output:                            |
|             *                      |
|           * * *                    |
|         * *   * *                  |
|       * *       * *                |
|     * *           * *              |
|   * * * * * * * * * * *            |
| * * * * * * * * * * * * *          |
|____________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	int height = atoi(argv[1]);
	int border = atoi(argv[2]);
	//Your codes here
	for (int row = 0; row < height; row++)
	{
		for (int column = 0; column < height * 2; column++)
		{
			if (row >= border && row <= height - 1 - border)
			{
				if ((column < height - 1 - row || column > height - 2 - row + border) && (column < height + row - border || column > height - 1 + row))
					printf(" ");
				else
					printf("*");
			}
			else
			{
				if (column < height - 1 - row || column > height - 1 + row)
					printf(" ");
				else
					printf("*");
			}
		}
		printf("\n");
	}
	
	return 0;
}