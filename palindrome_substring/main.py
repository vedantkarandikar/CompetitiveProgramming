s = raw_input()
if s==s[::-1]:
  print(s)
else:
  m=""
  for i in range(3,len(s)):
    for j in range(len(s)-3):
      cs = s[j:j+i]
      if len(cs) > len(m) and cs == cs[::-1]:
        m = cs
  if m=="":
    m="none"
  print(m)
