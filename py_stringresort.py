data = input()
result = []
value = 0

#���̽㿡�� ���ڰ� �ݺ��������� �ϳ��� �Էµ�.
for x in data:
    #�Է°��� ���ڸ� �߰�
    if x.isalpha():
        result.append(x)
    #�Է°��� ���ڸ� ���ڷ� �߰�
    else :
        value += int(x)

#result���� ���ڿ��� �Է����.
result.sort()

if value != 0:
    result.append(str(value))

#�׳� result���ϸ��� �迭�� ��µ�.
print(''.join(result))
