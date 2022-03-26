// Imports the required modules
#include <iostream>
#include <string>
int main() {
  // Prints the title and asks the user for the desired length of their password
  std::cout << "== PASS-GEN ==\n";
  std::cout << "[+] Desired password length: ";
  int password_length;
  std::cin >> password_length;
  // Defines the variable for the final password and the list which contains all characters allowed in the password
  std::string final_pass;
  char chars[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!/*-+.&'(-_)=^$ù*:;,}]@^`|[{#";
  // Generates a random character and appends it to the final password
  for (int index = 0; index <= password_length; index++) {
    final_pass = final_pass + chars[rand() % 91];
  }
  // Prints the final password
  std::cout << final_pass;
  return 0;
}