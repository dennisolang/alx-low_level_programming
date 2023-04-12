#include "main.h"
#include <stdlib.h>
/**
* alloc_grid - nested loop to make grid
* @width: width input
* @height: height input
* Return: pointer to 2 dim. array
*/
int **alloc_grid(int width, int height)
{
int **naa;
int x, y;
if (width <= 0 || height <= 0)
return (NULL);
naa = malloc(sizeof(int *) * height);
if (naa == NULL)
return (NULL);
for (x = 0; x < height; x++)
{
naa[x] = malloc(sizeof(int) * width);
if (naa[x] == NULL)
{
for (; x >= 0; x--)
free(naa[x]);
free(naa);
return (NULL);
}
}
for (x = 0; x < height; x++)
{
for (y = 0; y < width; y++)
naa[x][y] = 0;
}
return (naa);
}
