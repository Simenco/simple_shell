#ifndef SIMPLE_SHELL_H
#define SIMPLE_SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <dirent.h>
#include <ctype.h>
#include <errno.h>
#include <signal.h>
#include <string.h>
#include <fcntl.h>

char *get_input(FILE *stream);
void shell_prompt(void);
void shell_prompt1(void);
char *read_input(void);

#endif
