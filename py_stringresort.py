data = input()
result = []
value = 0

#파이썬에선 문자가 반복문에서는 하나씩 입력됨.
for x in data:
    #입력값이 문자면 추가
    if x.isalpha():
        result.append(x)
    #입력값이 숫자면 숫자로 추가
    else :
        value += int(x)

#result에는 문자열만 입력됬었다.
result.sort()

if value != 0:
    result.append(str(value))

#그냥 result만하면은 배열로 출력됨.
print(''.join(result))
