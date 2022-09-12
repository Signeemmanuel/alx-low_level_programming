#include <stdio.h>                                                                                                                                       /*
 *main: entry point of the program
 *return: 0
 */ 
int main(void)                                                                                                                                           
{                                                                                                                                                        
	char ch;                                                                                                                                         
	for (ch = 'a'; ch <= 'z'; ch++)                                                                                                                  
		if(ch == 'e' || ch == 'q')
			continue;
		putchar(ch);                                                                                                                             
	putchar('\n');                                                                                                                                   
	return (0);                                                                                                                                      
}                                                                                                                                                        
                                                                                                                                                         
