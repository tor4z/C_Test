#include <stdio.h>
#include <string.h>
#include "main.h"


struct ins {
	char ins;
	char arg1;
	char arg2;
};


const char *file_name = "file_test.txt";


void create_file()
{
	FILE *fp;
	char *text = "hello! this chunck of text is use for test c file op.";

	fp = fopen(file_name, "w");
	if (fp == NULL) {
		fprintf(stderr, "Can not open file %s", file_name);
		return;
	}

	fwrite(text, sizeof(char), strlen(text), fp);

	fclose(fp);
}


void print_ins(struct ins ins)
{
	printf("ins: %c\n", ins.ins);
	printf("arg1: %c\n", ins.arg1);
	printf("arg2: %c\n", ins.arg2);
	printf("---------------------\n");
}


void read_file()
{
	FILE *fp;
	struct ins ins;

	fp = fopen(file_name, "r");
	if (fp == NULL) {
		fprintf(stderr, "can not open file %s", file_name);
		return;
	}

	while (fread(&ins, sizeof(struct ins), 1, fp)) {
		print_ins(ins);
	}

	fclose(fp);
}


void file_main()
{
	create_file();
	read_file();
	remove(file_name);
}
