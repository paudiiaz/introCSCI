/*
 * Author      : Paulina Diaz ♥
 * Description : Simple cin/cout
 */

#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;

#include <cctype>
#include <vector>

// Program Execution Starts Here
int main() {
  // (1) Declare a string variable named user_name
  string user_name;
  // (2) Declare a character variable named programmed_before and another named
  //     my_character. Initialize both of them to the value 'z'
  char programmed_before='z';
  char my_character='z';
  // (3) Display a welcome message to standard output
  cout << "Welcome fellow programmer! " << endl;
  // (4) Prompt the user for their first name
  cout << "Please type in your first name." << endl;
  // (5) Read the name from standard input and store in the variable user_name
  cin >> user_name;
  // (6) Display the message "Nice to meet you, NAME" where NAME is replaced
  //     with the value of user_name
  cout << "Nice to meet you " << user_name << " !" << endl;
  // (7) Ask the user if they have programmed before. Make sure you inform them
  //     that you want the answer as a single character (y/n)
  cout << "Have you programmed before,\nType y for yes and n for no" << endl;
  // (8): Read in the answer from standard input and store in the variable
  //      programmed_before
  cin >> programmed_before;
  // For testing (DO NOT ALTER)
  UnitTest(user_name, programmed_before, my_character);

  // This ends program execution
  return 0;
}
