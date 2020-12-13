# your code goes here
l=int(input())
x=1
y=1;
for j in range(11):
	x*=(l-j-1)
	y*=(j+1)
print(x//y)