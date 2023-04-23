#ifndef MAIN_H
#define MAIN_H

/* Includes */
#include <unistd.h>
#include <stdio.h>

/* Declaration */
void print_s(char *str, int *count);
void print_c(char c, int *count);
void print_d(int nbr, int *count);
void print_b(unsigned int k, int *count);
void print_o(unsigned int o, int *count);
void print_u(unsigned int u, int *count);
void print_base(long int u_nbr, int base, char spes, char flag, int *count);
void print_S(char *str, int *count);
void print_R(char *str, int *count);
void print_r(char *str, int *count);


#endif
