# 1914. 하노이 탑
# 2021.11.07
# 재귀
def hanoi(num, nFrom, nBy, nTo):
    if num == 1:
        print('%d %d' % (nFrom, nTo))
    else:
        hanoi(num-1, nFrom, nTo, nBy)
        print('%d %d' % (nFrom, nTo))
        hanoi(num-1, nBy, nFrom, nTo)


a = int(input())
ans = 2**a - 1
print(ans)
if a <= 20:
    hanoi(a, 1, 2, 3)
