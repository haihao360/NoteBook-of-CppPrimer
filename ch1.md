1.1 Compiler
a. Using compiler by commamd prompt. eg:$ g++ ex1.cc
   On UNIX systems, we obtain the status by writing
   $ g++ ex1.cc
   $ echo $?
   To see the status on a Windows system, we write
   $ cl /EHsc .\ex1.cpp
   $ echo %ERRORLEVEL% 
   

1.2 IO
a. Four IOstream objects: cin,cerr,cout,clog.Using endl to flush the buffer.

1.3 Comments
a. Comment pairs dont nest.

1.4 Flow of control.
a. while,for,if. 
b. <code>1.11
c. An istream becomes invalid when we hit end-of-file(ctrl-   z or ctrl d enter)or encounter an invalid input.
d. compilation error---(syntax error,type error,declaration   error

1.5 Class
a. File redirection eg:$ addItems <infile >outfile
b. BookStore example.


 