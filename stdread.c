#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>

int main()
{
	char buffer[128];
	fprintf(stdout,"read 128B from stdin\n");
	//0: stdin
	//1: stdout
	//2: stderr
	int n;
	n = read(0, buffer, 128);
	if(n == -1)
		fprintf(stderr, "read error\n");
	return 0;
	write(2, buffer, n);
}
