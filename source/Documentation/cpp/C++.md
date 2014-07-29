C++ is the programming language we use to program the robot and one of the most commonly used languages today. However, it is not an easy language to learn for a beginner due to the fact that it has a steep learning curve. This document is designed to help teach the basics of C++.

###You will learn

- Why you want to know C++
- How C++ goes from a text file to binary code that can run
- Basic syntax of C++
- C++ data types
- Functions
- Arrays
- Classes
- Inheritance and composition
- Dynamic memory

###You need to know

- Basic computer components
- How programs are structured
- Algebra

###About C++
C++ was created by a man named Bjarne Stoustrup as an upgrade to C that fixed many of the issues and complaints. There are many C-based languages, but C++ is one of the most popular. C was created in order to write the Unix operating system, the mainstay of the computing industry since the 1970's. C was created to be simple, fast, efficient, and powerful.

A few C-based programming languages are...

- C++
    - Designed to be extremely fast and efficient
    - More complex than C
    - Object-oriented programming supported
    - Much of the C++ code is backwards-compatible with C
    - Often used for background tasks such as graphics engines, robotics, and operating systems
- Java (not to be confused with JavaScript)
    - Slow when compared to C and C++ because it runs in a virtual machine – high RAM and CPU usage
    - Similar syntax to C++
    - Object-oriented
    - Designed for user-level applications and good cross-platform support
    - Used for web programming and cross-platform applications, the main programming language used on Android phones
- Objective-C
    - Implements many of the same missing features from C that C++ added
    - Object-oriented
    - Not backwards-compatible with C, syntax is significantly different
    - Can be mixed with C++ code 
    - Primarily used on Apple devices, used to write apps for Mac and iOS devices

###A few notes

- `// makes the rest of this line a comment in C++, the compiler ignores this`
- \code
/*
This is a block comment... Anything I type in here is ignored by the compiler.
It can span multiple lines.
*/
\endcode
- `#` is a preprocessor directive, more on those later
- Each line of code must end with a semicolon (`;`).
If you don't include this, two lines will be seen as the same line (which can be useful if you need to do a lot of comparisons).
- Blocks of code are enclosed in `{ }`

###A few suggestions

- **Always comment your code.** This will help a lot when someone (or you) tries to look at it in the future. It doesn't matter how self-explanatory your code is, comment it!
- If you can't figure out what is wrong with your code, ask someone else. They will find the missing semicolon in 30 seconds that you didn't notice after five hours.
- Write self-documenting code. This means use names that make since and clearly show the logic that the program uses. Make it consistent.

##Pages

- \subpage cppbuild "Build Process"
- \subpage cppdata "Simple Data Types"
- \subpage cpplayout "Program Layout"
- \subpage cppconsole "Console I/O"
- \subpage cppflow "Program Flow"
- \subpage cppfn "Functions"
- \subpage cppenum "Enumeration"
- \subpage cpparray "Arrays"
- \subpage cppstr "Strings"
- \subpage cppfileio "File I/O"
- \subpage cppnamespace "Namespaces & Headers"
- \subpage cppstruct "Structures"
- \subpage cppclass "Classes"

