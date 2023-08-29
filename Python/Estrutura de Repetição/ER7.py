a, b, c, d, e = map(int, input('digite 5 numeros: ').split())

maior = 0

if a > b and a > c and a > d and a > e:
    maior = a
elif b > c and b > d and b > e and b > a:
    maior = b
elif c > a and c > b and c > d and c > e:
    maior = c
elif d > a and d > b and d > c and d > e:
    maior = d
elif e > a and e > b and e > c and e > d:
    maior = e
print(maior)

#maneira mais facil
#a, b, c, d, e = map(int, input('digite 5 numeros: ').split())
# maior = max(a, b, c, d, e)
# print(maior)