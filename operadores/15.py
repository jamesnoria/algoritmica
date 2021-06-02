cant_pan = float(input('Inserte el numero de panes: '))
precio_desc = 3.49 - (3.49*0.6)
desc_total = cant_pan * precio_desc
print('El precio habitual de un pan es: 3.49')
print('El precio cuando NO es del dia es del -60%')
print(f'El descuento total por {cant_pan} es de: {desc_total}')