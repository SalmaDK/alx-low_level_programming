#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);
char *_memset(chars, char b, unsigned int n);
char *_memcpy(chardest, char src, unsigned int n);
char *_strchr(char s, char c);
unsigned int _strspn(chars, char accept);
char *_strpbrk(char s, characcept);
char *_strstr(charhaystack, char needle);
void print_chessboard(char (a)[8]);
void print_diagsums(int a, int size);
void set_string(char **s, charto);

#endif
