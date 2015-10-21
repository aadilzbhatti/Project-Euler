import time

def count(x, y, tx, ty):
	if (x == tx and y == ty):
		return 1
	if (x > tx or y > ty):
		return 0
	if (x < tx or y < ty):
		return count(x + 1, y, tx, ty) + count(x, y + 1, tx, ty)

print(count(0, 0, 2, 2))
