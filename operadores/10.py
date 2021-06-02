t1 = float(input('Ingrese la nota de su tarea 01: '))
t2 = float(input('Ingrese la nota de su tarea 02: '))
t3 = float(input('Ingrese la nota de su tarea 03: '))
t4 = float(input('Ingrese la nota de su tarea 04: '))
emc = float(input('Ingrese la nota del EXAMEN DE MEDIO CURSO: '))
efc = float(input('Ingrese la nota del EXAMEN FINAL: '))
t_promedio = (t1+t2+t3+t4)/4
promedio = (t_promedio*0.6)+(emc*0.15)*(efc*0.25)
print(f'El promedio final es: {promedio}')