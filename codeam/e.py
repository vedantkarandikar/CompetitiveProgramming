import numpy as np
from itertools import permutations

def getLatin(n):  
    k = n + 1
    z = []
    for i in range(1, n + 1, 1):  
        temp = k  
        x = []
        while (temp <= n) : 
            x.append(temp)
            temp += 1
        for j in range(1, k): 
            x.append(j)
        k -= 1
        z.append(x)
    return z
        
for i in range(int(input())):
    print("Case #{}: ".format(i+1), end="")
    n, k = map(int, input().split(" "))
    y = np.array(getLatin(n))
    z = []
    s = False
    al = list(permutations(y, n))
    print(al)
    al = al[al[:,0].argsort()]
    for j in al:
        s = False
        if np.trace(j) == k:
            print("POSSIBLE")
            print('\n'.join([' '.join([str(cell) for cell in row]) for row in j]))
            s = True
            break
        elif np.trace(np.transpose(j)) == k:
            print("POSSIBLE")
            print('\n'.join([' '.join([str(cell) for cell in row]) for row in j]))
            s = True
            break
    if not s:
        print("IMPOSSIBLE")
            
    
