import re
S = input()

if re.match("[A-Z]", S):
    print("A")
else:
    print("a")