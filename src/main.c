#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <string>
#include "text.h"

using namespace std;

int readin(char* h, int i, char el) {
	int k = 0, coor;
	char ch[100];
	memset(ch, 0, sizeof(ch));
	while (h[i] != el) {
		ch[k] = h[i];
		k++;
		i++;
	}
	coor = atoi(ch);
	i = i + 1;
	return coor;
}
