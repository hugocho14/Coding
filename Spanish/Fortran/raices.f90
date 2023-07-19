complex(16) :: a,b,c,x1,x2
a=(1.d0,1.d0)
b=(2.d0,2.d0)
c=(3.d0,3.d0)
x1=(-b+((b**2.d0)-(4.d0*a*c))**(1.d0/2.d0))/(2.d0*a)
x2=(-b-((b**2.d0)-(4.d0*a*c))**(1.d0/2.d0))/(2.d0*a)

print*, "la primera raíz es: ", x1
print*, "la segunda raíz es: ", x2

print*, "Ahora, comprobamos que realmente estamos en lo correcto"
print*, "Al insertar en la ecuación x1 obtenemos: ", a*(x1**2.d0)+b*x1+c
print*, "Al insertar en la ecuación x2 obtenemos: ", a*(x2**2.d0)+b*x2+c

end program
