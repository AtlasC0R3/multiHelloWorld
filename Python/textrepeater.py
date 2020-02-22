#!usr/bin/python3
# Soo, for some reason this script only works with Python3.
# i mean it works so yay

print()
toPrint = input("Type something in: ")

import os
os.system('cls' if os.name == 'nt' else 'clear')
# This, to clear the terminal.

print(toPrint)
print()