#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

#ifndef BUF_SIZE
#define BUF_SIZE 1024
#endif

/**
 * create_file - function that creates a file.
 * @filename: variable pointer
 * @text_content: content file
 * Description: Create a function that creates a file.
 * Return: 1 on success, -1 on failure
 */

 int main(int argc, char *argv[])
 {
	int file_from, file_to;
	mode_t permission;
	ssize_t num;
	char buf[BUF_SIZE];

	if (argc != 3)
	{
		exit(97);

	}
	
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
		exit(98);







 }