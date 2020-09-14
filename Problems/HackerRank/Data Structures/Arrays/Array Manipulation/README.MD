https://www.hackerrank.com/challenges/crush/problem

common_gcd = counter[nums[0]]
for no in counter:
    cg = gcd( counter[no] , common_gcd)

return common_gcd > 1