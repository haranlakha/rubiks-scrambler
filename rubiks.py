import sys
import random

# Rubik's cube scrambler program:

# This program generates moves used to scramble a Rubik's cube.
# The amount of moves is specified by the user in the command line.

# Run with: python3 rubiks.py [No. of moves]

# For example, to generate 10 moves, enter python3 rubiks.py 10

arr = ["F", "R", "U", "L", "B", "D",
					   "F'", "R'", "U'", "L'", "B'", "D'",
					   "F2", "R2", "U2", "L2", "B2", "D2"]

a = int(sys.argv[1])


for i in range(0,a):
	r = random.randint(0,17)
	print(arr[r], end = ' ')
print('\n')



