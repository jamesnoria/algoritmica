num = int(input('Inserte un numero: '))
if num < 0:
    print(f'El numero {num} es NEGATIVO')
elif num > 0:
    print(f'El numero {num} es POSITIVO')
else:
    print(f'El numero {num} es CERO')