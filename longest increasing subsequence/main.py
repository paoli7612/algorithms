a = [32, 32, 30, 6, 28, 17, 19, 4, 15, 25, 34, 15]
l = [ 1,  1,  1, 1,  1,  1,  1, 1,  1,  1,  1,  1]

def mins(a, v):
    p = list()
    for x, i in enumerate(a):
        if i < v:
            p += [x]
    return p

for x, i in enumerate(a):
    if not x:
        continue
    print(mins(a[0:x], i))