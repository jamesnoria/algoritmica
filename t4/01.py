# 1) Realice un programa en C++, que permita el ingreso de varios números enteros y
#  que pare sólo cuando se ingrese 0 (cero), luego que muestre:
#  • El promedio de todos los impares ingresados.
#  • El promedio de todos los números que están entre 7 y 31.

sum_impar = 0
cont_impar = 0

while True:
    num = int(input('Ingrese un número: '))
    if num % 2 != 0 and num != 0:
        cont_impar += 1
        sum_impar += num
        continue
    if num <=31 and num >=7:
        print('Hola')
    elif num == 0:
        break

print(sum_impar)
print(cont_impar)