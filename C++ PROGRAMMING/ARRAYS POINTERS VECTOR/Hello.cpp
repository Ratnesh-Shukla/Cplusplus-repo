/*float vs. double
The precision of a floating point value indicates how many digits the value can have after the decimal point. 
The precision of float is only six or seven decimal digits, while double variables have a precision of about 15 digits. 
Therefore it is safer to use double for most calculations.

The general rules for naming variables are:
  > Names can contain letters, digits and underscores
  > Names must begin with a letter or an underscore (_)
  > Names are case sensitive (myVar and myvar are different variables)
  > Names cannot contain whitespaces or special characters like !, #, %, etc.
  > Reserved words (like C++ keywords, such as int) cannot be used as names

cout is pronounced "see-out". Used for output, and uses the insertion operator (<<)
cin is pronounced "see-in". Used for input, and uses the extraction operator (>>)

Data Type	      Size	            Description
boolean   	   1 byte	          Stores true or false values
char	         1 byte	          Stores a single character/letter/number, or ASCII values
int	         2 or 4 bytes	      Stores whole numbers, without decimals
float	         4 bytes	        Stores fractional numbers, containing one or more decimals. 
                                 Sufficient for storing 6-7 decimal digits
double	       8 bytes	        Stores fractional numbers, containing one or more decimals.
                                 Sufficient for storing 15 decimal digits

Boolean Types
A boolean data type is declared with the bool keyword and can only take the values true or false.
When the value is returned, true = 1 and false = 0.


C++ Operators
Operators are used to perform operations on variables and values.

C++ divides the operators into the following groups:
 > Arithmetic operators 
     Arithmetic operators are used to perform common mathematical operations.

        Operator	           Name	                Description	                          Example	
        +	                Addition	          Adds together two values	                 x + y	
        -	                Subtraction	       Subtracts one value from another	           x - y	
        *	                Multiplication	     Multiplies two values	                   x * y	
        /	                Division	          Divides one value by another	             x / y	
        %	                Modulus	           Returns the division remainder	             x % y	
        ++	              Increment	         Increases the value of a variable by 1	      ++x	
        --	              Decrement	         Decreases the value of a variable by 1	     --x

   Although the + operator is often used to add together two values, like in the example above, 
   it can also be used to add together a variable and a value, or a variable and another variable:
          Example :
            int sum1 = 100 + 50;        // 150 (100 + 50)
            int sum2 = sum1 + 250;      // 400 (150 + 250)
            int sum3 = sum2 + sum2;     // 800 (400 + 400)


 > Assignment operators 
    Assignment operators are used to assign values to variables.
    we use the assignment operator (=) to assign the value to a variable
       
       Operator	         Example	       Same As	
         =	              x = 5	          x = 5	
         +=              	x += 3	      x = x + 3	
         -=              	x -= 3	      x = x - 3	
         *=              	x *= 3	      x = x * 3	
         /=              	x /= 3	      x = x / 3	
         %=              	x %= 3	      x = x % 3	
         &=              	x &= 3	      x = x & 3	
         |=              	x |= 3	      x = x | 3	
         ^=              	x ^= 3	      x = x ^ 3	
         >>=	            x >>= 3	      x = x >> 3	
         <<=	            x <<= 3	      x = x << 3	

 > Comparison operators 
    Comparison operators are used to compare two values (or variables). 
    This is important in programming, because it helps us to find answers and make decisions.
    The return value of a comparison is either 1 or 0, which means true (1) or false (0). 
    These values are known as Boolean values

      Operator	          Name	                         Example	
        ==             	Equal to	                        x == y	
        !=             	Not equal	                        x != y	
        >	             Greater than         	            x > y	
        <	             Less than	                        x < y	
        >=            Greater than or equal to	          x >= y	
        <=            Less than or equal to	              x <= y
    
    In the following example, we use the greater than operator (>) to find out if 5 is greater than 3:
                  Example:
                      int x = 5;
                      int y = 3;
                      cout << (x > y); // returns 1 (true) because 5 is greater than 3
 
 > Logical operators 
    As with comparison operators, you can also test for true (1) or false (0) values with logical operators.
    Logical operators are used to determine the logic between variables or values:

     Operator	      Name	           Description	                                                       Example	
       && 	    Logical and	   Returns true if both statements are true	                             x < 5 &&  x < 10	
       || 	    Logical or	   Returns true if one of the statements is true	                       x < 5 || x < 4	
       !	      Logical not	   Reverse the result, returns false if the result is true	             !(x < 5 && x < 10)
 
 > Bitwise operators 

String Types
The string type is used to store a sequence of characters (text). 
This is not a built-in type, but it behaves like one in its most basic usage. 
String values must be surrounded by double quotes.
To use strings, you must include an additional header file in the source code, the <string> library

String Concatenation
The + operator can be used between strings to add them together to make a new string, this is called concatenation.

Append
A string in C++ is actually an object, which contain functions that can perform certain operations on strings. 
For example, you can also concatenate strings with the append() function

WARNING!
  C++ uses the + operator for both addition and concatenation.
  Numbers are added. Strings are concatenated.

String Length
To get the length of a string, use the length() function
You might see some C++ programs that use the size() function to get the length of a string. 
This is just an alias of length(). 
It is completely up to you if you want to use length() or size()

Access Strings
You can access the characters in a string by referring to its index number inside square brackets []
Note: String indexes start with 0: [0] is the first character. [1] is the second character, etc.

Change String Characters
To change the value of a specific character in a string, refer to the index number, and use single quotes.

Strings - Special Characters
Because strings must be written within quotes, C++ will misunderstand this string, and generate an error
  Example : string txt = "We are the so-called "Vikings" from the north.";

The solution to avoid this problem, is to use the backslash escape character.
The backslash (\) escape character turns special characters into string characters:

Escape character	            Result	              Description
     \'	                        '	                  Inserts Single quote in a string
     \"	                        "	                  Inserts Double quote in a string
     \\	                        \	                  Inserts Backslash in a string

  Example : string txt = "We are the so-called \"Vikings\" from the north.";

User Input Strings
It is possible to use the extraction operator >> on cin to store a string entered by a user 
However, cin considers a space (whitespace, tabs, etc) as a terminating character, 
which means that it can only store a single word even if you type many words

That's why, when working with strings, we often use the getline() function to read a line of text. 
It takes cin as the first parameter, and the string variable as second




*/

#include <iostream>
#include <string>

using namespace std;           // instead of using std again and again we can use 'using namespace std;'

 int main()
 {
  const int myNumber = 50;//const keyword will declare the variable as "constant",which means unchangeable and read-only
  
  std :: cout << "Hello World!\n";      // we can use std in every line to get the output
  cout << "Hello World!\n";
  cout << "Hello World!" << endl;  // endl is used for the addition of new line 
  
  int myNum = 3;   // int  - stores integers (whole numbers), without decimals, such as 123 or -123
  cout << myNum << "\n";     // to print the variable we do not have to use double inverted commas 
  float myFloatingNum = 5.0987;  // float / double - stores floating point numbers, with decimals, such as 19.99 
  string myName = "Brook"; // string - stores text, such as "Brook". String values are surrounded by double quotes
  char letter = 'D'; // char - stores single characters,such as 'a' or 'B'. Char values are surrounded by single quotes
  bool myBoolean = false;         // bool - stores values with two states: true or false
  
  int x , y, z;        // declaring a variable
  x = y = z = 90;      // initializing value to a variable
  cout << x + y + z << "\n";  // use of operators and giving output
  
  cout << myNumber << "\n";
  
  int a; 
  cout << "Type a number: "; // Type a number 
  cin >> a; // Get user input 
  cout << "Your number is: " << a << "\n"; // Display the input value
  
  int x1, y1;
  int sum;
  cout << "Type a number: ";
  cin >> x1;
  cout << "Type another number: ";
  cin >> y1;
  sum = x1 + y1;
  cout << "Sum is: " << sum << "\n";

// String Concatenation
  string firstName = "Roronoa ";         
  string lastName = "Zoro";
  string fullName = firstName + lastName;
  cout << fullName << "\n"; 
  /*we added a space after firstName to create a space between Roronoa and Zoro on output. 
  However, you could also add a space with quotes (" " or ' ')*/
  string firstName1 = "Pirate";
  string lastName1 = "Hunter";
  string fullName1 = firstName1 + " " + lastName1;
  cout << fullName1 << "\n";

// Append
  string firstName2 = "King Of ";
  string lastName2 = "Hell";
  string fullName2 = firstName2.append(lastName2);
  cout << fullName2 << "\n";

// String Length
  cout << "The length of the fullName string is: " << fullName.length() << "\n";
  cout << "The length of the fullName1 string is: " << fullName1.length() << "\n";
  cout << "The length of the fullName2 string is: " << fullName2.size() << "\n";

// Access String
  cout << fullName[0] << "\n";         // prints the first character in fullName
  cout << fullName[1] << "\n";         // prints the second character in fullName

// Change String Chracter 
  string myString = "Hello";
  myString[0] = 'J';
  cout << myString << "\n";

// User Input Strings
  string userInput;
  cout << "Input your first name user: " << "\n";
  cin >> userInput;
  cout << "Your first name is : " << userInput << "\n";

  string user;
  cout << "Input your full name user: " << "\n";
  getline (cin, user);
  cout << "Your full name is: " << user << "\n";
    


  return 0;
 }