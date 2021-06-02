a = [30, 34, 11, 34, 5, 30, 17, 13, 12, 8, 30, 18]

for i in a[1:]:
    for j in a:
        print(str(i)+"-"+str(j)+", ", end="")
    print()

# L = [1, 2, 1, 2, 1, 2, 2, 2, 2, 2, 3, 3]
# max(L) -> 3 -> LONGEST INCREASING SUBSEQUENCE