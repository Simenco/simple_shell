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

<<<<<<< HEAD
typedef void (*sighnadler_t)(int);
extern int errno;

char *remove_spaces(char *text);
void fill_argv(char *tmp_argv, char **my_argv);
char *_strcat(char *dest, int src);
int _strlen(char *s);
char *_strstr(char *haystack, char *needle);
char *_strncpy(char *dest, char *src, int n);
char *_strcpy(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
void get_path_string(char **tmp_evnp, char *bin_path);
void insert_pathstr_to_search(char *pathstr, char **search_path);
char *_memset(void *s, int b, size_t n);
char *_memcpy(char *dest, char *src, unsigned int n);
int attach_path(char *cmd, char **search_path);
void copy_envp(char **envp, char **my_envp);
int _strcmp(char *s1, char *s2);
void call_execve(char *cmd, char **my_envp, char **my_argv);
int get_char(void);
void free_argv(char **my_argv);
void print_crab(void);
void clear(char **argv, char **my_envp);
void run_shell(char **my_argv, char **my_envp, char **search_path, char *tmp);
=======

#define END_OF_FILE -2

#define EXIT -3


/* Global environemnt */

extern char **environ;

/* Global program name */

char *name;

/* Global history counter */

int hist;



/**
 *
 *  * struct list_s - A new struct type defining a linked list.
 *
 *   * @dir: A directory path.
 *
 *    * @next: A pointer to another struct list_s.
 *
 *     */

typedef struct list_s

{

	char *dir;

	struct list_s *next;

} list_t;



/**
 *
 *  * struct builtin_s - A new struct type defining builtin commands.
 *
 *   * @name: The name of the builtin command.
 *
 *    * @f: A function pointer to the builtin command's function.
 *
 *     */

typedef struct builtin_s

{

	char *name;

	int (*f)(char **argv, char **front);

} builtin_t;



/**
 *
 *  * struct alias_s - A new struct defining aliases.
 *
 *   * @name: The name of the alias.
 *
 *    * @value: The value of the alias.
 *
 *     * @next: A pointer to another struct alias_s.
 *
 *      */

typedef struct alias_s

{

	char *name;

	char *value;

	struct alias_s *next;

} alias_t;



/* Global aliases linked list */

alias_t *aliases;



/* Main Helpers */

ssize_t _getline(char **lineptr, size_t *n, FILE *stream);

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);

char **_strtok(char *line, char *delim);

char *get_location(char *command);

list_t *get_path_dir(char *path);

int execute(char **args, char **front);

void free_list(list_t *head);

char *_itoa(int num);



/* Input Helpers */

void handle_line(char **line, ssize_t read);

void variable_replacement(char **args, int *exe_ret);

char *get_args(char *line, int *exe_ret);

int call_args(char **args, char **front, int *exe_ret);

int run_args(char **args, char **front, int *exe_ret);

int handle_args(int *exe_ret);

int check_args(char **args);

void free_args(char **args, char **front);

char **replace_aliases(char **args);



/* String functions */

int _strlen(const char *s);

char *_strcat(char *dest, const char *src);

char *_strncat(char *dest, const char *src, size_t n);

char *_strcpy(char *dest, const char *src);

>>>>>>> cfab9d0a974dde333aed8f1c07aa94b7ab7a5d75
char *_strchr(char *s, char c);

int _strspn(char *s, char *accept);

int _strcmp(char *s1, char *s2);

int _strncmp(const char *s1, const char *s2, size_t n);



/* Builtins */

int (*get_builtin(char *command))(char **args, char **front);

int shellby_exit(char **args, char **front);

int shellby_env(char **args, char __attribute__((__unused__)) **front);

int shellby_setenv(char **args, char __attribute__((__unused__)) **front);

int shellby_unsetenv(char **args, char __attribute__((__unused__)) **front);

int shellby_cd(char **args, char __attribute__((__unused__)) **front);

int shellby_alias(char **args, char __attribute__((__unused__)) **front);

int shellby_help(char **args, char __attribute__((__unused__)) **front);



/* Builtin Helpers */

char **_copyenv(void);

void free_env(void);

char **_getenv(const char *var);



/* Error Handling */

int create_error(char **args, int err);

char *error_env(char **args);

char *error_1(char **args);

char *error_2_exit(char **args);

char *error_2_cd(char **args);

char *error_2_syntax(char **args);

char *error_126(char **args);

char *error_127(char **args);



/* Linkedlist Helpers */

alias_t *add_alias_end(alias_t **head, char *name, char *value);

void free_alias_list(alias_t *head);

list_t *add_node_end(list_t **head, char *dir);

void free_list(list_t *head);



void help_all(void);

void help_alias(void);

void help_cd(void);

void help_exit(void);

void help_help(void);

void help_env(void);

void help_setenv(void);

void help_unsetenv(void);

void help_history(void);



int proc_file_commands(char *file_path, int *exe_ret);

#endif
