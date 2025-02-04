Algoritmo suma_menores
	definir n, dato, s, contador Como Entero
	Escribir "Ingresa cuantos datos quieres ingresar "
	Leer n
	contador = 0
	s = 0
	mientras contador < n Hacer
		Escribir "Ingrese un numero "
		Leer dato
		contador = contador + 1
		s = s + dato
	FinMientras
	Escribir "La acumulacion de ", n, " = ", s
	
FinAlgoritmo
