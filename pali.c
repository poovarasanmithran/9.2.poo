b=input()
def pal(x):
	a=x[:-1]
	return a
x=pal(b)
if b.isalpha():
	if(x==b):
		print("YES a Palindrome\n")
	else:
		print("Not a palindrome\n")
else:
	print("INVALID INPUT")
