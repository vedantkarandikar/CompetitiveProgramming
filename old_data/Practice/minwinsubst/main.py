x, y = map(str, raw_input())

def contains(s):
  for i in list(y):
    if not s.count(i)>=y.count(i):
      return False
  return True
l=[]
def minwinsubs():
  for i in range(len(y), len(x)):
    for j in range(len(x)-len(y)+1):
      cs = x[j:j+i]
      if contains(cs):
        return cs
print(minwinsubs())

