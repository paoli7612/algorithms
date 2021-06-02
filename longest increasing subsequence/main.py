a = [32, 32, 30, 6, 28, 17, 19, 4, 15, 25, 34, 15]
l = list()
for _ in a:
    l.append(1)

def foo(a, v):
    p = list()
    for x, i in enumerate(a):
        if i < v:
            p += [l[x]]
    return p

for x, i in enumerate(a):
    if not x:
        continue
    try:
        l[x] = max(foo(a[0:x], i)) + 1
    except: pass

print(l)