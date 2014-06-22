C++ is the programming language we use to program the robot and one of the most commonly used languages today. However, it is not an easy language to learn for a beginner due to the fact that it has a steep learning curve. This document is designed to help teach the basics of C++.

**You will learn**

* Why you want to know C++
* How C++ goes from a text file to binary code that can run
* Basic syntax of C++
* C++ variable types
* Event-driven programming
* Programming paradigms you can use in C++

**You need to know**

* Basic computer components
* How programs are structured
* Algebra

**About C++**
C++ was created by a man named Bjarne Stoustrup as an upgrade to C that fixed many of the issues and complaints. There are many C-based languages, but C++ is one of the most popular. C was created in order to write the Unix operating system, the mainstay of the computing industry since the 1970's. C was created to be simple, fast, efficient, and powerful.

A few C-based programming languages are...

* C++
    * Designed to be extremely fast and efficient
    * More complex than C
    * Object-oriented programming supported
    * Much of the C++ code is backwards-compatible with C
    * Often used for background tasks such as graphics engines, robotics, and operating systems
* Java (not to be confused with JavaScript)
    * Slow when compared to C and C++ because it runs in a virtual machine – high RAM and CPU usage
    * Similar syntax to C++
    * Object-oriented
    * Designed for user-level applications and good cross-platform support
    *Used for web programming and cross-platform applications, the main programming language used on Android phones
* Objective-C
    * Implements many of the same missing features from C that C++ added
    * Object-oriented
    * Not backwards-compatible with C, syntax is significantly different
    * Can be mixed with C++ code 
    * Primarily used on Apple devices, used to write apps for Mac and iOS devices

**A few notes**

* // makes the rest of this line a comment in C++, the compiler ignores this
* /*This is a block comment... Anything I type in here is ignored by the compiler.*/
* \# is a preprocessor directive, more on those later
* Each line of code must end with a semicolon (';').
If you don't include this, two lines will be seen as the same line (which can be useful if you need to do a lot of comparisons).
* If you can't figure out why your code doesn't compile, it is probably because you missed a semicolon somewhere.
* Blocks of code are enclosed in { }

**A few suggestions**

* **Always comment your code.** This will help a lot when someone (or you) tries to look at it in the future. It doesn't matter how self-explanatory your code is, comment it!
* If you can't figure out what is wrong with your code, ask someone else. They will find the missing semicolon in 30 seconds that you didn't notice after five hours.
* Write self-documenting code. This means use names that make since and clearly show the logic that the program uses. Make it consistent.


----------------------------------------------------------------------

\section cppbuild Build Process
A computer does not understand C++ or any other programming language alone. It has to be turned into machine (binary) code first. Binary is extremely tedious and error-prone. Coding in binary was extremely difficult and error-prone, and it was soon realized that there needed to be something that humans could write easily. Also, machine code that could run on one CPU could not run on a newer version of that same processor. This is where Assembly comes in. Assembly is written in text and is a 1:1 equivalent to machine code. Assembly code is fed into a program called an assembler that converts the keywords into their binary counterparts. However, you still need to manually manipulate each individual byte, and Assembly is still difficult to read. You can't tell what an Assembly program is going to do just be looking at it, and once you start writing large programs, Assembly easily becomes confusing. Both Assembly and machine code are considered to be low-level languages because you are controlling everything in the program directly.

To bridge the readability gap, numerous high-level languages were created. Early ones included Fortran (for scientific applications) and COBOL (for business applications). Now, there are hundreds. High-level languages are much slower when you run them, but are also far more coherent, easier to write, and much faster to write. High-level languages used today include Java, Python, Perl, C# (C-sharp), F#, JavaScript, PHP, VisualBasic.NET, and Ruby.

C and C++ are considered high-level, although the allow for a much finer degree of control than most of the languages noted above. High-level programs are typically sent into a piece of software called a compiler. A compiler converts the code that you write into machine code.
\note
A compiler is much more complex than an assembler. Remember that all Assembly code has a counterpart in machine code. High-level languages do not have exact equivalents in machine code, and, in some cases, no equivalent at all.

**The code you write has to go through multiple steps before it can be compiled and run...**

1. Build command run from editor: the editor is where you write the code, many editors that programmers use can send the build command to the compiler automatically.
2. **Preprocessor:** before the code can be compiled, the preprocessor checks to see if there are any instructions before the code is compiled. Often these instructions are to copy the contents of another file into your code (the #include statement does this in C++)
\note These files are often required to make your code run and often provide information for libraries (a library adds extra functionality and commands to your code).
3. **Parser:** finds errors in the code that prevent the compiler from working. For example, if you reference a variable you didn't create or mistyped a word. This step sometimes happens as the code is compiled, and, if it finds an error, will stop the compiling process.
\note The parser has two kinds of output: errors and warnings. Errors will keep your code from being compiled, you have to fix the problem. Warnings usually show up in the code when you add is something extra, such as a variable you don't use.
4. **Compiler:** your code is turned into machine code and put into object files
\note Object files contain the machine code for your program, but it cannot yet be run because it may still require information and binary code from other sources.
5. **Linker:** adds the machine code for the libraries you used to your code
\note Libraries are often precompiled. They are programs that your program can reference but are not used by you directly. If you have ever installed a program on Windows, you have probably seen .dll files before. DLL stands for Dynamic Link Library and is simply a file that contains the machine code your programs can access.
6. **Loader:** Puts all of the object files together into a single executable files (this is a .exe files in Windows, and has no extension on most other systems)
7. **Execution:** running the program

In addition to the parser, many editors also have built-in error checking. This can be useful as it is similar to the spell checker in Microsoft Word. It will find issues before you try to compile and as you type. If any issues are found, the editor will show you this issue like this. The error checker is not associated with the compiler, and it does not catch everything, but it will catch many syntax errors.

\note
Many of the languages I listed earlier are actually interpreted. An interpreter takes the code and compiles it during execution... one line at a time. Needless to say, this is much slower and less efficient than compiling, but it is great for prototyping, debugging (to find logic issues in your code), and small projects where speed does not matter. Python, Perl, and F# are all interpreted. Java and C# use a similar tool, called a virtual machine. Instead of compiling your code completely at runtime, Java and C# are converted into bytecode, a much smaller (but not human-readable) version of your code that is then interpreted. This is faster than a normal interpreter because your code is reogranized and simplified, but it is also much slower than compiled code. The benefit of a virtual machine is that it is truly portable and can be run on any system with the appropriate virtual machine. Compiled code has to be re-compiled every time you change the system on which it is running.


-----------------------------------------------------------------------

\section cppdatatypes Simple Data Types
C++ has several types of data that you can store while the code is running. These include integer, floating point, character, and string. All of these have different mathematical and logical operations you can subject them to.

The data types are...
* Integer: data types that are stored as number with no decimal point
	* int: a whole number that can be any value between -4,000,000,000 (billion) and 4 billion
	\note These ranges can change from system to system. A 64 bit system will store longer variables than a 32 bit system.
	* long: a longer version of int that can store numbers much larger and smaller, as a consequence, it also takes up more RAM.
	* long long: self explanatory
	* char: a single ASCII character. This type is stored as a value between 0 and 127. An ASCII character table showing the characters that correspond to the numbers is shown below. You can preform mathematical operations on them like normal integers.
	* bool: a logical (true or false) value, it can either be 1 or 0.
	\note C++ has associated the keywords “true” and “false” with 1 and 0, so you can use the actual words in logical tests.
* Floating point: data types that contain a decimal value, these are always stored in scientific notation
	* float: a number that can have a decimal value. It has 7 significant digits and can have a power of ±38
	* double: a larger version of float with 15 significant digits. It also can have a power of up to ±308
	* long double: a longer version of double
* string: a user defined variable type, it can be any size, but you cannot preform mathematical operations in the same way that you can with any of the above variables.

You can put an “unsigned” in front of any of these variable types in order to make the numbers positive only. This allows them to be twice as large, but be careful, if you do an operation that turns it into a negative value, it will turn into an extremely large number.

Example:

    unsigned int num = 5; // creates a variable of type integer called num and sets it to 5

\note As mentioned earlier, you a char variable is a value between 0 and 127 that corresponds to a character on the ASCII character table. You can either feed it a numeric value (such as 65) or an actual character such as 'A'3. To see an ASCII table, go to http://en.cppreference.com/w/cpp/language/ascii.

\subsection cppvars Variables
You can create a variable in C++ by specifying the type and name.

    int num; // this is valid code, you can declare variables in C++ without giving them a value

The reason allocation without initialization is possible is because assigning a value to a variable takes a significant amount of time, so it is pointless to assign every variable you create to 0 if you are going to make it nonzero before it is used. For instance, if you are using a variable for user input, then you can create (allocate) it and give it a value later. Long story short, don't assign an initial value to a variable unless you are going to be doing calculations on it directly.

\note
* It is customary to name variables using camelCase likeThis
* A variable name cannot include a space
* The variable name must start with either a letter of an underscore '_'
* You can only use letters, numbers, and underscores when naming variables
* Variables are typically declared as locally as possible for debugging reasons (I will explain this later)
* **Name your variables something that makes sense!** Example: don't name a variable that holds user input x, call it something like userInput. Its name should be self-explanatory.

\subsection cppconst Constants
Declaring a constant is almost the same as declaring a variable. Just put a “const” in front of the type.

    const float PI = 3.14f; //I put the f at the end because sometimes C++ associates 
	//the float and double types, meaning that floats are treated as doubles
	//when you declare them. The f tells the compiler that the value must have
	//no more than 5 significant digits
	//Unlike variables, you have to define constants when you create them.

\note
* It is customary to name constants using ALL_CAPS, using underscores to separate words
* All of the naming restrictions for variables also apply to constants
* Typically constants are declared at the very top of your code,  before anything else happens
* **Use names that are self-explanatory!** I cannot repeat that enough.

\subsection cpparithops Arithmetic Operations
You can perform all of the basic math operations on numeric variables. The following operations are built into C++, they are sorted by the PEMDAS order of operations.
\note For those who were not paying attention in math class, PEMDAS stands for **Parenthesis, Exponents, Multiplication, Division, Addition, Subtraction.** However, C++ does not have a single operator for exponents, I will talk more about that later.

**C++ Order of Precedence**

1. **Parenthesis:** operations inside () are always evaluated first
2. **Function calls** (more on those later)
3. **Multiplication, division, modulus (remainder):** done in order from left to right
4. **Addition, subtraction:** done in order from left to right
5. **Comparison operations**
6. **Logical operations**
7. **Assignment operator**

Note that exponents are not on this list, that is because C++ does not have an operator for raising numbers to a power. However, there is a function called "pow" that fills this role.

**C++ Operators**
Name           | Symbol
---------------|-------
Assignment     | =
Addition       | +
Subtraction    | -
Multiplication | *
Division       | /
Modulus        | %


The mod[ulus] operator calculates the remainder. If you divide an equation with a decimal value using integer math (14/4 is a good example), you will end up with a whole number answer that is not estimated, it simply ignores any decimal digits.

We know:

> 14/4 = 3.5

However, using integer math, this expression evaluates to 3, but there is still a remainder of 2.

In order to get the remainder, use the expression 14 % 4, the resulting value will be 2.

The mod operator can be useful in many different situations... you can use it to...
* Detect whether a number is odd or even: x % 2, if the mod is 0, then you know the number is even
* Look at only the last digit or digits of a number: x % 10 gets the last digit, x % 100 gets the last two digits, x % 1000 gets the last 3, and so on.

When programming, you often want to add a certain value to a variable and store the result back into that same variable. C++ has a few operators to do that. These shorthand expressions can be seen to the left.

One thing worth noting is that x++ and ++x evaluate to the same thing, but there is a difference in some cases, as shown in the code below.

**Shorthand Operations**
Shorthand | Action
----------|-----------
x++;      | x = x + 1;
x--;      | x = x - 1;
++x;      | x = x + 1;
--x;      | x = x - 1;
x += 5;   | x = x + 5;
x -= 5;   | x = x - 5;
x *= 5;   | x = x * 5;
x /= 5;   | x = x / 5;

~~~{.cc}
int a, b = 1, 1; // creates variables a and b and
	             //initializes them both to 1
int c, d;
c = a++; //c=1
/* long version:
c = a;
a++;
*/
d = ++b; //d=2
/* long version:
b++;
d = b;
*/
~~~

\note It is generally a good idea to avoid code like this. Small errors are very difficult to find.

\warning This is when you need to make sure that the appropriate variables are initialized. If they are not, they can be any arbitrary value.

\subsection cppcompare Comparison Operators
Comparison operators can compare two different values.

**Comparison operators**
Operator | Action
---------|-------------------------------------------------
\>       | greater than
<        | less than
\>=      | greater than or equal
<=       | less than or equal
==       | equal, evaluates to true if values are the same
!=       | not equal

\note ! (the not operator) can also be used as a unary operation to a logical statement. It will always evaluate to the opposite of a logical value (true of false).
~~~{.cc}
//Here is ! as a binary operator...
1<2;//evaluates to true
1>2;//false
!(1<2);//false
!(1>2);//true
//...which is different from using it as a binary operator:
1 != 2;//true
1 != 1;//false
~~~

\warning It is important that you use the == operator to test and = to declare variables. They are completely different.

    a == b; //evaluates to true, checks to see if a is equal to b
    a = b; //copies the value of b into a

\subsection cppcast Type Conversion
To temporarily change the type of a variable, use the following code.

    static_cast<type_to_convert_to>(variable_name);

The following code is valid...
~~~{.cc}
// Let's say you want to convert a character into an integer so that
// you have the exact ASCII value of it...
char ch = 'B';
int chInt = static_cast<int>(ch);
// The resulting value of chInt is 66 in this case, 66 is the ASCII value of 'B'.
// There are many reasons you may want to convert variable types.
// This is just a simple example.
~~~

\subsubsection cppautotype Automatic Type Selection
There are certain cases where the C++ compiler will automatically determine the type of math to use.

\note Integer math is much faster than floating point, therefore, you want to use integers as much as possible.

Condition (If...) | The result...
------------------|----------------
all operands (numbers) are of type int. | is an integer.
all operands are float. | is a float.
the expression has multiple types of operands. | The compiler will detect that there is a floating point number in the expression, and automatically use floating point math. \note 3.0 / 2 evaluates to 1.5 \note 3 / 2 evaluates to 1
the value of a float is assigned to an int | the number is truncated (cut off) at the decimal. 2.95 becomes 2 5.37 becomes 5
an integer expression is stored into a float variable. | Integer math will be preformed, even if the result has a decimal value. int a, b = 2, 3; float x = b / a; // x has a value of 0

Integer operations and float variables:
As shown in the chart above, 3 / 2 evaluates to 1. This applies even if you are storing the value in a float variable. This could cause some issues, as you cannot always be sure that the numbers you are entering into the float have a decimal place. If they may not, then it is best to surround your expression in a static_cast statement.
float x = static_cast<float>(3) / 2; // this will evaluate to 1.5 and store it to x
x = static_cast<float>(3 / 2); // will evaluate to 1 and then convert the type, 	//meaning that 1 is stored to x
