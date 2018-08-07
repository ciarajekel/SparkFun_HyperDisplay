/*

This is a configuration file for the hyperdisplay library

The purpose is to customize the instance of the library
for the particular needs of the application. For example
on a small system the size of included code is a concern
and so fewer optional items would be included. On a larger
system however more advanced features may be desired, and
they will require additional inclusions

*/ 

/*
USE_MATH: 
0 - disables mathematical drawing
1 - enables mathematical drawing, includes math.h and defines a mathematical object type
*/
#define HYPERDISPLAY_USE_MATH 0	


/*
USE_PRINT: 
0 - disables printing text
1 - enables printing text, requires users to implement "getCharInfo()""
*/
#define HYPERDISPLAY_USE_PRINT 1