import re

patterns = ['c=', 'c-', 'dz=', 'd-', 'lj', 'nj', 's=', 'z=']

txt = input()

for p in patterns:
    txt = re.sub(p, ' ', txt)

print(len(txt))