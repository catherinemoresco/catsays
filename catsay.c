// catsay.c
// put a message into a cat's speech bubble

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#include "printbubble.h"
#include "rendercat.h"

void rendercat();
void printbubble(char*);
 
#define MAX_LENGTH 150

int main(int argc, char **argv)
{
	printbubble(argv[1]);
	rendercat();
}

