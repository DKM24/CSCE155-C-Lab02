
# Computer Science I 
## Lab 2.0 Worksheet

Name(s) and Login(s):



1. Dennis Ritchie, the creator of the C programming language,
was born on September 9th, 1985.  If he were still alive,
how old would he be today?  Find out by running the `birthday`
program on the appropriate inputs and enter your solution here.
Please Enter Your First Name (no spaces) followed by ENTER: DennisRichie
Enter the year in which you were born: 1985
Enter the month in which you were born (1-12): 9
Enter the day of the month in which you were born (1-31): 9
Today is 2023/10/18
Your birthday was 1985/09/09
Hello, DennisRichie.  You are 38 years, 5 weeks, and 4 days old today



2. Bjarne Stroustrup, the creator of the C++ programming
language, the object-oriented extension of C, was born on
December 30th, 1990.  How old is he today?
Please Enter Your First Name (no spaces) followed by ENTER: BjarneStroustrup
Enter the year in which you were born: 1990
Enter the month in which you were born (1-12): 12
Enter the day of the month in which you were born (1-31): 30
Today is 2023/10/18
Your birthday was 1990/12/30
Hello, BjarneStroustrup.  You are 32 years, 41 weeks, and 5 days old today



3. Software testing often involves testing code with known
"bad" input in an attempt to break it (sometimes this is
referred to as *fuzzing*).  Try breaking the `birthday_cli`
program by giving it "bad" input and observe the consequences.
Give at least two examples of potentially bad input and the
results you observe.




4. Complete all the size and range entries below.

* `char`
  size: 1 byte
  range: -128 to 127
* `short int`
  size: 2 bytes
  range: -32768 to 32767
* `int`
  size: 4 bytes
  range: -2147483648 to 2147483647
* `long int`
  size: 4 bytes
  range: -2147483648 to 2147483647
* `float`
  size: 4 bytes
  range: 7 digits of accuracy
* `double`
  size: 8 bytes
  range: 15 digits of accuracy


5. Use your working currency conversion to determine
the exchange amounts for the following inputs:

  a) $250.25
Exchange tax is 25.02
GBP is 88.96
Yen is 14374.99

  b) $1,000.52
Exchange tax is 100.05
GBP is 355.68
Yen is 57472.37

  c) $968,410.12
Exchange tax is 96841.02
GBP is 344269.81
Yen is 55627900.00


6. Suppose that you had used only `int` types
in your conversion program.  Would you be able
to use it to convert the US national debt
(which as of 2020 was \$26,009,754,625,487)?
Why or why not?
We won't be able to convert it because the value of the national debt and its subsequent conversions lie outside
the range of the int datatype. 




7. Mixed types

a) Run the `area` program with 3 and 4 as inputs.  
What value do you get?  Is this result correct?
The value is incorrect as it is 0

b) Execute the program again with inputs 3 and 5.
Does the program give correct results?  Why not?
There was an error in the formula used (no bracket when using 1/2)

c) Fix the program by editing the `area.c` source
code so that the program produces correct results.
We replace the "1/2" with 0.5