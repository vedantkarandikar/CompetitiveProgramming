for i in range(int(input())):
    t = []
    n = int(input())
    o = [""] * n
    for x in range(n):
        item = list(map(int, input().split(" ")))
        item.append(x)
        t.append(item)
    t.sort()
    c, j = 0, 0
    for x in range(n):
        if t[x][0]>=c:
            c = t[x][1]
            o[t[x][2]] += "C"
        elif t[x][0]>=j:
            j = t[x][1]
            o[t[x][2]] += "J"
        else:
            o = "IMPOSSIBLE"
            break
    print("Case #{}: {}".format(i+1, ''.join(o)))
        