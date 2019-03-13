# learncpp
my notes from learncpp.com

++++++++++++++++++++++++++++++++++++++
Identifiers: Names with which we can access the variables, functions, classes etc..

assigning value of a integer variable:
============================
copy assignment:                        int num; num = 2;
copy initialization:                       int num1 = 5;
Direct initialization:                     int num2(15);
Uniform/Brace initialization:     int num3{ 25 };


iostream library:
=============
predefined variables:
	• std::cout
		○ To send data to console
		○ Flushes the console
	• std::cin
		○ Reads input from keyboard
	• std::endl
		○ Flushes the console
		○ Moves the cursor to next line
		○ its similar ... << '\n' << std::flush;
		○ avoid endl and use \n instead. Thus you avoid flushing problems. Not always flushing needs to be done.
Operators:
	• Insertion operator <<
	• extraction operator >>
		
Identifier naming best practises:
==========================
variable name: 	lower case; 
function name: 	camel  case; 

e.g: int max_num;
       void printDetails();


conditional compilation:
====================
To avoid multiple inclusion of header files. we have two ways.
	• Header guards.
	Every header file will have the below #defines to avoid multiple inclusions of the file.
	#ifndef SQUARE_H
	#define SQUARE_H
	• #pragma once
	This is compiler specific and not recommended.
	
Debugging:
=========
	1) Add logs
	2) Use conditional logging. e.g: enabling debug flag to write logs.
	3) use a logger to write logs into a file.
	4) use GDB
		a. use watch points
		b. use step, next, bt features for debugging
	5) Defensive programming. Program to keep the code fail safe anticipating that someone will try to break it.
	6) Find error fast. 
	7) Write unit test cases.

Data types:
=========
	• Integers 
		○ Normal Integers:
		Minimum : 2 Bytes.
		Maximum: Depends on architecture. 8 bytes in 64 bit.
	
		○ Fixed size integers:
		int8_t : The size of this integer data type will be 8 bits /1 byte whatever the architecture may be.

	• Others:
	int_fast#_t
	int_least#_t
	
	• Unsigned:
	It should be normally avoided. Coz, C++ internally converts -1 or any other number to positive number to store it in unsigned int.
	
	• Floats
		○ Convert from scientific way to normal float
		9.87654e+006 ->  9.87654 * 10 ^ 6 ->   9876543.21f
		○ How to increase the precission of float integer. determines how many digits it should print. 
		 std::setprecision(17)
	• bool
		○ Can take the values [true | false]
	• char
		○ \n : prints next line
		○ \t: prints tab
		○ Fixed size charecters :char16_t, char32_t
	• const 
		○ compile time const
		const int radius = 4;
		○ runtime const
		cin>>radius;
		const int diameter = radius * 2;
		○ constexpr : A keywork that forcely makes variable a compile time const.
		constexpr int radius = 12; //Its okay.
		constexpr int diameter = 2  * radius; //Not okay. will throw error.

Typecasting"
===========
	• C-stype typecasting
	to convert type must must write the (<data_type>) before assignment operator.
	e.g: float f = 9.12;
	        int x = (int) f;
	• static typecasting
	to convert inbuilt types we must use static_cast<data_type>
		e.g:  double d =  4.125;
		         int I = static_cast<int> d;
	• const cast
	• dynamic cast
	• reinterpret cast

Namespace:
==========
	• keep variables/functions in namespace:
	namespace <namespace_name>
	{
	.
	content
	.
	}

	• Telling which namespace you are using
	using namespace <name_space_name>
	e.g:
		type 1:
		using namespace std;
		cout<<"hello world";
		
		type 2:
		std::cout<<"hello world";

Strings:
======
include <string>  must be included for using string class/data_type.
we can add two strings using + operator.
functions: 
	• length() -> returns length of the string.

Enums:
=======
	• Normal enums
	Same C style of enums
	e.g: enum color { RED = 12, BLUE, GREEN, YELLOW}
	        int pixel_color = 15;
	       pixel_color == RED?"Danger":"proceed";
	• Class enums
	enum has a class and you can only use enums using the class name.
	e.g: 
	enum color { RED = 12, BLUE, GREEN, YELLOW}
	        int pixel_color = 15;
	       pixel_color == color::RED?"Danger":"proceed";
	
Auto keyword:
===========
Instead of providing data type for every variable we can use auto keyword and compile will take care which datatype to use.
e.g: double d = 1 .32;
        can be written as 
        auto d = 1.32;

References:
==========
	• References to non-const. Once referenced to a int, we cannot refer to another integer.
		syntax:
		int a = 12, x =102;
		int &aa = a;
		aa = 25; //This will change the value of a.
		&aa = x;//Will throw compilation error.
		int &&b; //will throw compilation error. References must be initialized
	• References to const.
		syntax:
		int a = 22;
		const int &&a = a;
		aa = 31; //will throw error. reference is const. 
		
	• References to R values.
		syntax:
		int &aa = 22;
		
		you cannot change value of aa using aa =24; or aa++. But you can use it just like const int. aa points to code segment.
	
Arrays
========
	definition:
		std::array <int, 10> marks;
	functions:
		marks.size()
	access:
		marks[10];


Vectors:
=======
	definition:
		std::vector <int, 20> vect1;
	functions:
	           vect1.push_back("pavan");
		vect1.begin()
		vect1.end()
		vect1.size()
		vect1.resize(new_size)
	Accessing:
		vect1[2];
