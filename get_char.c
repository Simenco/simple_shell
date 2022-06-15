#include "simple_shell.h" 

/** 
 * get_char - reads from stdin 
 * 
 * Return: an integer
 */ 

int get_char(void) 
{ 
	static char buf[1024]; 
	static int nread; 
	static char buffer; 
	static  int index;
	if(index >= nread)
	{

		nread = read(STDIN_FILENO, buf, 1024); 

		if (nread > 0) 
		{ 
			buffer = buf; 
			index = 0;
			return (*(buffer + index++)); 
		} 
		else 
			return (EOF); 
	}else
		return (*(buffer + index++)); 

}
