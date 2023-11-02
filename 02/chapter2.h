#ifndef CHAPTER2_H
# define CHAPTER2_H

#include <stdio.h>
#include <string.h>

typedef unsigned char*	byte_pointer;

void	show_bytes(byte_pointer start, size_t len);
void	show_int(int x);
void	show_float(float x);
void	show_pointer(void* x);
void	show_string(char *str);

int		tadd_ok(int x, int y);
int		tadd_ok_wrong_ver(int x, int y);
int		tsub_ok_wrong_ver(int x, int y);
int		tsub_ok(int x, int y);

#endif