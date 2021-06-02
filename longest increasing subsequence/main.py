a = [30, 34, 11, 34, 5, 30, 17, 13, 12, 8, 30, 18]
l = [ 1,  1,  1,  1, 1,  1,  1,  1,  1, 1,  1,  1]

for x, i in enumerate(a[1:]):
    for y, j in enumerate(a):
        if i < j:
            l[x] += l[y]
        else:
            break

print(l)

# L = [1, 2, 1, 2, 1, 2, 2, 2, 2, 2, 3, 3]
# max(L) -> 3 -> LONGEST INCREASING SUBSEQUENCE