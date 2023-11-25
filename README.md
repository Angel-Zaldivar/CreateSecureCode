# CreateSecureCode
Author: Angel Zaldivar

Goal: Create Secure Code

This C++ program, authored by Angel Zaldivar, aims to create a secure version of a six-digit integer.
The user is prompted to input a six-digit integer, and the program then processes the input to generate
a secure version of the original number.

Code Explanation:

The program begins by declaring several integer variables, including a, b, c, accum, original_value,
and secure_version. These variables are used to store intermediate and final values during the processing
of the input.

The user is prompted to enter a six-digit integer, which is then stored in the variable original_value.

The processing of the input involves breaking the six-digit integer into two parts (a and b), summing
these parts (c), calculating the sum of the digits in c (accum), and finally obtaining a secure version
of the original number (secure_version).

The program calculates a by dividing original_value by 1000, and b is obtained by taking the remainder
when dividing original_value by 1000. The sum of a and b is stored in c. Then, the digits of c are summed,
and the result is stored in accum. The secure version is then calculated by taking the last digit of accum
and adding it to the digit at the tens place of accum.

Finally, the program outputs both the original version and the secured version of the input six-digit integer.

In summary, the program takes a six-digit integer as input, performs a series of calculations to create
a secure version, and outputs both the original and secured versions. The goal appears to be to enhance
the security of the input integer through a specific mathematical transformation.
