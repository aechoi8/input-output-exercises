This program uses the input and output functions of the <stdio.h> library, specifically 
'getchar()' and 'putchar().'

The program reads one character at a time and immediately outputs each character. The process
continues until end-of-file (EOF) is detected. 

*EOF is -1, but inputting '-1' does not end the program. In UNIX-like OSs such as Linux/MAC,
'CTRL D' and ENTER must be pressed to indicate to the terminal driver that EOF has been reached. 
While on Windows, 'CTRL Z' followed by Enter is used to signal EOF. 
