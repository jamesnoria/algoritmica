import math

peso = float(input('Inserte su peso (kgs): '))
estatura = float(input('Inserte su estatura (mts): '))
imc = peso / pow(estatura,2)
print(f'IMC: {math.trunc(imc)}')