import string, random
print("== PASS-GEN ==")
length = int(input("[+] Desired password length: "))
index = 0
final_pass = ""
while index <= length:
    final_pass = final_pass + list(string.printable)[random.randint(0, 99)]
    index += 1
print("\nPassword:\n"+final_pass.replace(" ",""))