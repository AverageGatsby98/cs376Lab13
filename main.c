/**
 * main.c
 * 
 * The main entrypoint of the "I really love robots" program.  The
 * program prints the phrase "I really love robots!" to the screen.
 *
 * @author Tanya L. Crenshaw
 * @since August 2013
 *
 */
#include "robot.h"

/**
 * main()
 *
 * The main entrypoint of the program.
 * 
 * @param command line arguments.
 * 
 * @returns nothing.
 */
int main(int argc, const char * argv[])
{
  if(argc == 1)
  {
  	robotPrintAscii();

  	return 0;
  }

  if(argc == 2)
  {
	robotPrintAscii();
	dalekPrintAscii();
  	robotPrintMessage();

  }
}
