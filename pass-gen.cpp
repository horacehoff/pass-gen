#include <iostream>
#include <string>
int main() {
  std::cout << "== PASS-GEN ==\n";
  std::cout << "[+] Desired password length: ";
  int password_length;
  std::cin >> password_length;
  std::string final_pass;
  char chars[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!/*-+.&'(-_)=^$ù*:;,}]@^`|[{#";
  for (int index = 0; index <= password_length; index++) {
    final_pass = final_pass + chars[rand() % 91];
  }
  std::cout << final_pass;
  return 0;
}