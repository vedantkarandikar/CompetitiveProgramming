import numpy as np
for i in range(int(input())):
    n = int(input())
    a = []
    for j in range(n):
        a.append(list(map(int, input().split(" "))))
    a = np.array(a)
    r, c = 0, 0
    for j in range(n):
        if len(np.unique(a[j]))<n:
            r += 1
        if len(np.unique(a[:, j]))<n:
            c += 1
    print("Case #{}: {} {} {}".format(i+1, np.trace(a), r, c))