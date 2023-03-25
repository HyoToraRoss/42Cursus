  typedef struct  s_point
  {
    int           x;
    int           y;
  }               t_point;

#include "flood_fill.h"
#include <stdlib.h>
#include <stdio.h>

void	f_fill(char **tab, t_point size, char target, int hrz, int vrt)
{
	if (hrz < 0 || vrt < 0 || hrz >= size.x || vrt >= size.y)
		return ;
	if (tab[vrt][hrz] != target)			// this is the main condition, the limiter of the zone: "delimitated horizontally and vertically by other characters"
		return;
	tab[vrt][hrz] = 'F';
	f_fill(tab, size, target, hrz + 1, vrt);
	f_fill(tab, size, target, hrz  -1, vrt);
	f_fill(tab, size, target, hrz, vrt + 1);
	f_fill(tab, size, target, hrz, vrt - 1);
}

void	flood_fill(char **tab, t_point size, t_point begin)
{
	char target;

	target = tab[begin.y][begin.x];
	f_fill(tab, size, target, begin.x, begin.y);
}
