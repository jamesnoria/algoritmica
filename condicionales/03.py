t1 = float(input('¿Cuanto fue su note en la PRACTICA 01: '))
t2 = float(input('¿Cuanto fue su note en la PRACTICA 02: '))
t3 = float(input('¿Cuanto fue su note en la PRACTICA 03: '))
t4 = float(input('¿Cuanto fue su note en la PRACTICA 04: '))
emc = float(input('¿Cuanto fue su note en el medio curso: '))
efc = float(input('¿Cuanto fue su note en el fin de curso: '))
promedio = (((t1+t2+t3+t4)/4)+emc+efc)/3
if promedio >= 10.5:
    print(f'Usted esta aprobado con {promedio}')
elif promedio < 10.5:
    print(f'Su promedio es {promedio}')
    rpta = int(input('¿Desea ir al sustitutorio?:\n[1]SI\n[2]NO\n'))
    if rpta == 1:
        susti = float(input('¿Cual fue su nota?: '))
        if emc < efc and susti > emc:
            promedio = (((t1+t2+t3+t4)/4)+susti+efc)/3
            print(f'Su nuevo promedio es {promedio}')
        elif emc > efc and susti < emc:
            promedio = (((t1+t2+t3+t4)/4)+emc+susti)/3
            print(f'Su nuevo promedio es {promedio}')
        else:
            print('Su promedio se mantiene porque es menor a las obtenidas')
else:
    print('Tendra que llevar el curso nuevamente')