a = input()
b = input()

c = int(a) + int(b)
d = str(c)
a = a.replace('0', '')
b = b.replace('0', '')
d = d.replace('0', '')

# print(a)
# print(b)
# print(d)
# print(int(a)+int(b)==int(d))

if int(a) + int(b) == int(d):
    print('YES')
else:
    print('NO')
