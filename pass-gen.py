# Imports the string and random modules
import string, random
# Prints the title
print("== PASS-GEN ==")
# Asks the user for a desired password length and then converting it to an integer
length = int(input("[+] Desired password length: "))
# Initial values for the variables
index = 0
final_pass = ""
# This is a loop that will continue until the index is greater than the length
while index <= length:
    final_pass = final_pass + list(string.printable)[random.randint(0, 99)]
    index += 1
# Replaces the spaces in the final password with nothing, and then prints the final password
print("\nPassword:\n"+final_pass.replace(" ",""))