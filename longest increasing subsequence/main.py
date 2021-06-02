a = [32, 32, 30, 6, 28, 17, 19, 4, 15, 25, 34, 15]
l = [ 1,  1,  1, 1,  1,  1,  1, 1,  1,  1,  1,  1]

for x, i in enumerate(a[1:]):
    for y, j in enumerate(a):
        if i < j:
            l[x] += l[y]
        else:
            break

print(l)
