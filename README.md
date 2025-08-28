# Taller-Caos-1
Hecho por: Juan Pardo & Felipe Amador


Teórico


¿Que es un sistema dinámico?

Un sistema dinámico es aquel que evoluciona y presenta cambios a través del tiempo, regido por normas que determinan cómo será su cambio. Estos sistemas pueden describir distintas situaciones en campos como la física, economía, biología o ingeniería.


Diferencias entre 
Sistemas discretos y continuo

Sistemas directos: Sus variables cambian en momentos determinados o específicos, el tiempo se mide en intervalos separados y se analiza con secuencias, ecuaciones en diferencia y algoritmos.
Sistemas continuos: Sus variables o valores pueden tomar cualquier valor dentro de el rango y cambian de forma continua con el paso del tiempo. Se estudia con funciones continuas y ecuaciones diferenciales.

Diferencias entre estabilidad y caos
Estabilidad: Donde el comportamiento es similar y no varia exageradamente, se mantiene firme y un sistema estable suele resistir distintas adversidades.

Caos: Donde el comportamiento es desordenado e imprevisible, pueden haber cambios severos de un momento a otro y no sigue un patrón, no siempre es malo, ya que puede significar que todas las variables están actuando al mismo tiempo






Xn representa el valor actual
Xn + 1 es el valor que habrá en el siguiente paso
r es el índice de crecimiento
1- Xn e

¿Qué pasa si r sube mucho?

Si r es pequeño el valor llegará a números cercanos o pequeños, pero mientras va creciendo el rango de esos valores va aumentando hasta entrar en un estado de caos.




Puntos fijos:
X1= 0
X2 = r-1r

Derivada:

f '(x) = r (1-x) - rX = r(1 - 2	X)
Si r es menor que 1 solo es estable si X = 0
Si r es mayor que 1 pero menor que 3 es estable solo en X2
Si r> 3 se genera inestabilidad y caos






Programación y exploración

(Código en gitHub)

Si r es igual a 2.5 el sistema está estable y no presenta malformaciones
Si r = 3.2 el sistema entra en caos y empieza a tirar valores muy aleatorios y lejanos
Si r es igual a 3.8 pasa lo mismo, el sistema entra en caos y salen datos llamados (- inf)


Bifurcaciones

(código en github)


¿Cuándo aparecen los puntos de bifurcación?

Cuando r = 1 el valor de x entra en caos, pero al pasar a 1.1 se regula
Cuando r = 3, el valor estable ya no es único y empieza a alternarse en x
Cuando r = 3.57 el valor de x ya es completamente inestable.



En qué intervalos aparece el caos?

En 1 < r < 3 aparece en solo un valor (r = 1)
En 3 < r < 3,57 aparecen oscilaciones periódicas
En r = 3.57 todo el sistema entra en caos


¿Qué significado real puede tener?
Que cambiando una cosa a un sistema, este puede pasar de ser predecible  a ser impredecible y entrar en caos, cambiando los valores y su comportamiento en general.






Análisis crítico


¿Por qué sistemas deterministas pueden generar caos? 
Porque a diferencia de los lineales, un pequeño cambio en las iteraciones puede alterar el sistema ya sea al principio o pasado un tiempo, además, independientemente de las reglas que tenga, la retroalimentación interna y la sensibilidad aleatorizan el comportamiento del sistema a largo plazo o corto plazo.

¿Qué diferencias encuentras entre orden, caos y homeostasis? 
Orden: En el sistema se seleccionan valores y se asigna otro valor x de manera estable y es predecible

Caos: En el sistema los valores seleccionados toman valores muy aleatorios y no se logra predecir con facilidad cual tomará cada variable

Homeostasis: Cuando el sistema se reordena gracias a cambios externos

• Relaciona este comportamiento con fenómenos reales (ej: clima, mercado  financiero). 

Reproducción: Si la tasa de reproducción de un pueblo es muy alta puede llevar a oscilaciones y eventualmente al caos, o tasas muy bajas pueden generar inestabilidad, por ejemplo en Corea y China están llamando hombres latinos para reproducirse en esos países.



