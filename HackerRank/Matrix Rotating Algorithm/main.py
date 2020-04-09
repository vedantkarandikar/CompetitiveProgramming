def toList(x, m, n):
    t = []
    n = len(x)
    for i in range(n/2):
        item = []
        item.append(x[i][i:n-i])
        item.append(x[n-i][i:n-1])
        item.append(x[i:n-i][i])
        item.append(x[i:n-i][n-i])
        t.append(item)
    return t

m, n, r = map(int, input().split(" "))
for i in range(m):
    a = []
    a.append(list(map(int, input().split(" "))))
    print(toList(a, m, n))