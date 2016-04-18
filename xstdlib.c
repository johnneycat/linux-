#include<stdio.h>
#include<stdlib.h>

int main(int argc, char* argv[])
{
	int c;
	FILE *in,*out;

	in = fopen(argv[0],"r");
	out = fopen(argv[1], "w");
	while((c = fgetc(in)) != EOF)
		putc(c, out);
}
