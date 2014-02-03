// printbubble.c
// prints a given line of text inside an ASCII bubble

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#include"printbubble.h"



void printbubble(char* s)
{
	int i;
	char* x; 
	int spaceleft;
	printf(" ");
	for (i = 0; i < 30; i++) // print appropriate amount of bubble border
	{
		printf("_");
	}
	printf("\n[ ");
	spaceleft = 29;
	x = strtok(s," \n"); // initial token
	while (x != NULL)
	{
		int testspace = spaceleft - strlen(x) - 1;
		if (testspace > 0) // checks if word will fit on a line, and will print it if it does
		{
			printf("%s ", x);
			spaceleft = testspace;
		}
		else {  // otherwise, start a new line and then print the word
		printspaces(spaceleft);
		printf("]\n[ %s ", x);
		spaceleft = 29 - strlen(x) -1;
		}
		x = strtok(NULL, " \n");
	}
	printspaces(spaceleft);
	printf("]\n ");
	for (i = 0; i < 30; i++) // print bottom part of bubble border
	{
		printf("-");
	}
	printf("\n");
}

void printspaces(int n) // will print the given number of spaces
{
	int i;
	for (i=0; i < n; i++)
	{
		printf(" ");
	}
}