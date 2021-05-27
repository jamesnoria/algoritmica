t1 = float(input('¿Cuanto saco en su TA01: '))
t2 = float(input('¿Cuanto saco en su TA02: '))
t3 = float(input('¿Cuanto saco en su TA03: '))
t4 = float(input('¿Cuanto saco en su TA04: '))
emc = float(input('¿Cuanto saco en su EMC: '))
efc = float(input('¿Cuanto saco en su EFC: '))
promedio = (((t1+t2+t3+t4)/4)+emc+efc)/3
if promedio >= 11:
    print(f'Usted esta aprobado con {promedio}')
elif promedio <= 10:
    print(f'Su promedio es {promedio}')
    rpta = int(input('¿Desea ir al sustitutorio?:\n[1]SI\n[2]NO\n'))
    if rpta == 1:
        susti = float(input('¿Cual fue su nota?: '))
        if susti < emc or susti < efc:
            print('Su promedio se mantiene por que es menor a las obtenidas')
        elif emc < efc:
            promedio = (((t1+t2+t3+t4)/4)+susti+efc)/3
            print(f'Su nuevo promedio es: {promedio}')
        else:
            promedio = (((t1+t2+t3+t4)/4)+susti+efc)/3
            print(f'Su nuevo promedio es: {promedio}')
    else:
        print('Tendra que llevar el curso nuevamente')

