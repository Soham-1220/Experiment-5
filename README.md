# Experiment-5

Aim: Expt 6 – To study and implement C++ decision-making statements and loops

(01) Check Whether a Number is Even or Odd

Algorithm:

1. Start the program.
2. Declare an integer variable.
3. Prompt the user to enter a number and read the input.
4. Check if the number is divisible by 2 (using modulus operator `%`).
5. If the remainder is 0, print "The number is even."
6. Else, print "The number is odd."
7. End the program.

Theory:

• The program checks whether a number is even or odd.

• It uses the modulo operator `%` to divide the input number `a` by 2.

• If the remainder is 0 (`a % 2 == 0`), the number is even; otherwise, it's odd.

• This program uses a simple `if-else` condition and demonstrates basic input, arithmetic, and decision-making in C++.


(02) Find the Largest Among Three Numbers

Algorithm:

1. Start the program.
2. Declare three integer variables.
3. Prompt the user to enter the first number and read the input.
4. Prompt the user to enter the second number and read the input.
5. Prompt the user to enter the third number and read the input.
6. If the first number is greater than the second:

   • If the first number is also greater than the third, print that the first number is the largest.
   • Else, print that the third number is the largest.
7. Else (the second number is greater than or equal to the first):

   • If the second number is greater than the third, print that the second number is the largest.
   • Else, print that the third number is the largest.
8. End the program.

Theory:

• The program finds the largest among three numbers entered by the user.
• It uses nested `if-else` conditions to compare the values:

  • First, it compares `num1` with `num2`.
  • If `num1` is greater, it then checks whether `num1` is also greater than `num3`.
  • If true, `num1` is the largest; otherwise, `num3` is.
  • If `num2` is greater than `num1`, the program compares `num2` with `num3` to find the larger.


(03) Check Whether a Character is a Vowel or Consonant

Algorithm:

1. Start the program.
2. Declare a character variable.
3. Prompt the user to enter a letter and read the input.
4. Check if the character is a vowel (`a, e, i, o, u, A, E, I, O, U`).
5. If it is a vowel, print "The character is a vowel."
6. Else, print "The character is a consonant."
7. End the program.

Theory:

• The program checks if the entered character is a vowel by comparing it with all vowel letters (both uppercase and lowercase).
• If it matches, it prints "vowel"; otherwise, it prints "consonant".
• It uses `if-else` and logical OR (`||`) operators.

(04) Simple Calculator Using Switch-Case

Algorithm:

1. Start the program.
2. Declare two variables for numbers and one for the result.
3. Declare a variable for the operator.
4. Prompt the user to enter the first number and read the input.
5. Prompt the user to enter an operator (`+, -, *, /`) and read the input.
6. Prompt the user to enter the second number and read the input.
7. Use a `switch-case` statement to check the operator:

   • If '+', add the numbers and print the result.
   • If '-', subtract the numbers and print the result.
   • If '\*', multiply the numbers and print the result.
   • If '/', check if the second number is not zero:

     • If not zero, divide and print the result.
     • If zero, print an error message.
   • For any other operator, print "Invalid operator!"
8. End the program.

Theory:

• This program is a simple calculator that performs basic arithmetic operations: addition, subtraction, multiplication, and division.
• It uses a `switch` statement to choose the operation based on the operator input.
• It checks for division by zero to avoid runtime errors.
• This demonstrates the use of `switch-case` and basic arithmetic in C++.


(05) Display Weekday Based on Day Number Using Switch-Case**

Algorithm:

1. Start the program.
2. Declare an integer variable for the day number.
3. Prompt the user to enter a day number (1–7) and read the input.
4. Use a `switch-case` statement to check the day number:

   • If 1, print "Monday".
   • If 2, print "Tuesday".
   • If 3, print "Wednesday".
   • If 4, print "Thursday".
   • If 5, print "Friday".
   • If 6, print "Saturday".
   • If 7, print "Sunday".
   • For any other number, print "Invalid day number!"
5. End the program.

Theory:

• The program maps numeric day input (1 to 7) to actual weekday names using `switch-case`.
• If the input doesn't match any defined case, the `default` prints "Invalid day number!".
• This is a good example of choice-based output using control structures.

(06) Menu Program Using Nested Switch-Case**

Algorithm:

1. Start the program.
2. Display the main menu:

    1. Snacks
    2. Meal
    3. Beverages
3. Prompt the user to enter their main choice and read the input.
4. Use a `switch-case` statement for the main choice:

   • If choice is 1 (snacks):

     • Display snacks menu: 1. Samosa, 2. Vadapav, 3. Maggi
     • Prompt the user to enter snacks choice and read the input
     • Use `switch` to print the selected item
   • If choice is 2 (meal):

     • Display meal menu: 1. Veg, 2. Non-Veg
     • Prompt the user to enter meal choice and read the input
     • Use `switch` to print the selected item
   • If choice is 3 (beverages):

   •Display beverages menu: 1. Tea, 2. Coffee, 3. Cold drink
     • Prompt the user to enter beverages choice and read the input
     • Use `switch` to print the selected item
5. End the program.

Theory:

• This program demonstrates a **nested `switch-case` menu system** where the user selects a category (snacks, meal, beverages), followed by a specific item.
• **Logical flaw noted**: the submenu uses the same `choice` variable as the main menu, which causes incorrect behavior. A separate variable should be used for submenu selection.
• The concept shows how **multi-level menu-driven applications** can be implemented using control structures in C++.


Conclusion:

These six programs demonstrate the use of conditional and `switch-case` statements in C++ for:

• Making decisions (`if-else`)
• Performing arithmetic and comparisons
• Classifying input (even/odd, vowel/consonant, max value)
• Building **menu-driven applications** using `switch-case` and **nested logic**
