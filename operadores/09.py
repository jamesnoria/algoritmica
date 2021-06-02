import math

varones = float(input('¿Cuantos varones hay en el salón? '))
mujeres = float(input('¿Cuantas mujeres hay en el salón? '))
total = varones + mujeres
porcentaje_varones = (100*varones)/total
porcentaje_mujeres = (100*mujeres)/total
print(f'Varones: {math.trunc(porcentaje_varones)}%')
print(f'Varones: {math.trunc(porcentaje_mujeres)}%')