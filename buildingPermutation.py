def solution(a,n):
    a.sort()
    moves=0
    k=1
    for i in a:
        moves = moves + abs(k-i)
        k = k+1
    print (moves)

n = int(input())
str_a = input().split(' ')
a = [int(num) for num in str_a]

solution(a,n)