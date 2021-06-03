num = int(input('Inserte un numero: '))
if num == 0:
    print(f'El numero {num} es CERO')
elif num % 2 == 0:
    print(f'El numero {num} es PAR')
else:
    print(f'El numero {num} es IMPAR')