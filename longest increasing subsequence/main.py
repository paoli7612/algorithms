a = [32, 32, 30, 6, 28, 17, 19, 4, 15, 25, 34, 15]
l = [ 1,  1,  1, 1,  1,  1,  1, 1,  1,  1,  1,  1]

def mins(a, v):
    l = list()
    for x, i in enumerate(a):
        if i < v:
            l += [x]
    return l

for x, i in enumerate(a[1:]):
    print(x, i)
    print(mins(a[0:x+1], i))
    print()