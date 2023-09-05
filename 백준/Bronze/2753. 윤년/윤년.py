def isLeaf(y: int) -> bool:
    if ((y % 100 != 0) or (y % 400 == 0)) and (y % 4 == 0):
        return True
    else:
        return False
a = int(input())

if isLeaf(a) :
    print(1)
else :
    print(0)