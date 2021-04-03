# RANDOM-PASSWORD-GENERATOR-WITH-C++

Random password generator is a software which randomly generates a password which is a combination of lowercase alphabets (a-z), 
uppercase alphabets (A-Z), special characters, digits (0-9). Random password generator is used now a days in many software so that the
password generated is not predictable. The project has been implemented using C++ language and IDE used is code blocks. 
A pseudo random function is developed in the program to generate random numbers which will be used to extract the characters from strings. 
There were certain conditions in the string which were taken care of while developing the project.  They were as follows:

⦁	No inbuilt function has to be used to generate random numbers. 
⦁	We have to develop our own pseudo random function to generate random numbers.
⦁	The first character of the generated password must be a lowercase alphabet.
⦁	 The last character of the Password must be an uppercase alphabet only.
⦁	The length of the password must be between the range 12 to 32.
⦁	There must be at least one digit and one special character in the generated password.
1.2 Requirement of Project.

  
1.3 MODULE OF PROJECT:

⦁	Int Psuedorand (int a): -
                This function is used to generate a random number. This function has a return type of int as it will return the generated 
                random number. First, we store the value returned by time (0) function in a long variable p. 
                Then extracted the last three digits of p as those are the one’s which changes rapidly while the other remain constant 
                for very long period of time. Then to make the number more random some basic mathematics is performed. 
                This function has an integer argument which is used to perform mathematics to make number more random. 
                After doing this the function returns the random number.

⦁	Intro (): -
               This function has return type void. It is used to print introduction to the program and ask the user to enter the difficulty
               level of the password.

⦁	Int main (): -
               This is the driver function of the program. Here 6 strings are defined which contains characters and 1 string b 
               is defined to store the generated password. 

               ⦁	String a - contains alpha-numeric characters and special characters
               ⦁	String b - Empty String which will store the password generated.
               ⦁	String c - only contains lowercase alphabets.
               ⦁	String d - contains only uppercase alphabets.
               ⦁	String e – contains alpha- numeric characters and special characters in order different than a.
               ⦁	String f- contains alpha- numeric characters and special characters in order different than a and e. 
                 String g - contains alpha- numeric characters and special characters in order different than a, e and f.

              If user enter 1 then password length is set to be of 15 and for loop starts and iterates from 1 to 15.
              When I ==1 means the first character has to be in lower case and will come only from string c. so psuedorand(int a) is 
              called and the number returned by psuedorand is then modulus by c. length (). So that number is within range of string c.
              Now the character at c.at(r) is concatenated with string b to store password. 

              For the characters (2-14) the character can be extracted from any string a or string e, string f, string g. 
              we have used multiple string so password is random. To decide which string to choose we have used switch statement
              and used 4 case. The choice of cases will again be decided by psuedorand() function.  
              If psuedorand () returns a negative value it is made positive by multiplying it with -1. 
              Since we have 4 cases, we take modulus of returned value by 4 and then add 1 so the choice range is between [1-4].
            
            ⦁	If choice is 1:  case 1 is executed, psuedorand (int a) is called, returned value is stored in r,
                r=r% a. length () and character is extracted from string a.at(r) and concatenated with string b.
             ⦁	If choice is 2:  case 2 is executed, psuedorand (int a) is called, returned value is stored in r,
                r=r% e. length () and character is extracted from string e.at(r) and concatenated with string b.
             ⦁	If choice is 3:  case 3 is executed, psuedorand (int a) is called, returned value is stored in r,
                r=r% f. length () and character is extracted from string f.at(r) and concatenated with string b.
             ⦁	If choice is 4:  case 4 is executed, psuedorand (int a) is called, returned value is stored in r, 
                r=r% g. length () and character is extracted from string g.at(r) and concatenated with string b.

             When I ==15 means the first character has to be in uppercase and will come only from string d.
             so psuedorand (int a) is called and the number returned by psuedorand is then modulus by d. length (). 
             So that number is within range of string d. Now the character at d.at(r) is concatenated with string b to store password.

             After this the loop terminates and the Generated password is displayed.
             The same logic works for:
             ⦁	for length =25 (medium level password) user presses 2 for it.
             ⦁	for length =32 (difficult level password) user presses 3 for it.
             
            If user wants to generate password again. The Screen is cleared and the entire process is repeated again. 
            If not, credits are displayed and program terminates..
            
            Hope it helps.. thanks..
