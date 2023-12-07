# Integracion-Numerica-Regla-de-Rectangulos
Proyecto de Metodos numericos y Programacion Avanzada

## Descipcion de colaboracion 
### 3G Mecatronica

- 22310204 Eduardo Martinez Collazo
- 22310222 Cesar Nicolas Aguilar
## Contexto conceptual del proyecto 

![imagen abaco des metodos num](/imagenes/metodos%20numericos%20abaco.png)


    A lo largo de la historia del desarrollo de métodos numéricos, se destaca el método del rectángulo como una técnica fundamental. Este enfoque, utilizado para aproximar integrales definidas, se remonta a la antigua Mesopotamia y ha evolucionado a lo largo de los siglos. En su esencia, el método de rectángulo divide una región bajo una curva en rectángulos más pequeños, calculando la suma de las áreas de estos rectángulos para estimar la integral. Desde las tablillas de arcilla sumerias hasta las modernas computadoras, el método de rectángulo ha sido una herramienta valiosa en la resolución numérica de problemas matemáticos, proporcionando una aproximación eficaz para abordar una amplia variedad de situaciones y contribuyendo a la base de los métodos numéricos utilizados en la actualidad.  
  # Integracion numerica por rectangulos
  ![imagen](/imagenes/geogebra-export-1-1.png)  
    
Este metodo consiste en dividir el area abajo de la curva en varios rectangulos, la cantidad de rectangulos corresponde a el numero de intervalos. Entre mayor el intervalo es menor la distancia del area del rectangulo a la integral, por lo tanto es una aproximacion mas exacta. "h" corresponde a la distancia entre los intervalos h=((x3-x0)/Intervalo)  (de acuerdo con la imagen). La formula por metodo de rectangulos Y=h[Σf(x0 - x(3-1))]   (de acuerdo con la imagen). Proporcionamos todos los datos necesarios para comprovar la aproximacion de la integral dentro del programa (Ver capturas de pantalla).
## Manual de usuario
Este programa se desarrollo con MSYS2 Link de descarga: https://www.msys2.org/  
Mas no es necesario descargarlo para su funcionameinto.      
  
  
   ![imagen](/imagenes/Integral%20definida.jpg)  
   Nuestro programa se encarga de todo el calculo, lo unico que se necesita es introducir una ecuacion en funcion de X, la cual Corresponde a la Integral a evaluar. Acompañado de los limites de la integral (b,a) y la cantidad de intervalos que quieres evaluar, los cuales se te pide al momento de ejecutar el programa (make run).
     

     
Tenemos una Integral ya preparada con el fin de demostracion. En caso de que quieras introducir tu propia integral para evaluar debes generar la en el apartado dentro de la clase "Calculos.hpp" en el metodo llamado "Integral".
Puedes borrar la ecuacion F(x) que se encuentra como predeterminada o comentar la y crear tu propia funcion utilizando las funciones de math.h y los procesos base de C++.
#### Funciones de la libreria (math.h) aqui: 
     https://platzi.com/tutoriales/1968-funciones-c/9103-todas-las-funciones-de-la-biblioteca-mathh-en-c/  

# Capturas de pantalla  

![imagen](/imagenes/Capturas%20de%20pantalla%20de%20programa%20en%20fucionamiento%201.jpg)  
![imagen](/imagenes/Capturas%20de%20pantalla%20de%20programa%20en%20fucionamiento%202.jpg)