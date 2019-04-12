# Abercrombie

Four-legged didactic and minimalistic robot built with an Arduino Nano board, two SG90 servos and five easy to print parts.

([versión en español aquí](README.es.md))

![Abercrombie](images/abercrombie_web.jpg)

The design is extremely simple. It is meant to be used in the classroom and also by anyone that wants to assemble his first robot from scratch.

## Motivation

The general design and also the mechanism that allows the robot to move around is based in an awesome project by Randy Sarafan [published here]((https://www.instructables.com/id/3D-Printed-Robot/)). After reaching the project for the first time and building one it seemed that a four-legged minimalistic robot like his is a great idea and that for didactic purposes it would be great to have a similar one but just smaller, easier to print and build with components even cheaper and easier to find in any place you live.

So the robot was designed to be built, customized and programmed in the classroom. It wants to be a starting point so kids, teenagers and of course anyone else interested can created his first walking robot. Its design is intentionally simplistic, trying to be friendly even for people not initiated in programming, electronics or 3D printing.

The robot can be used in educational activities dedicated to different aspects of robotics:

* Work only in the design and 3D printing customizing the robot with our own designs, assembling it with just a scissor and a screwdriver.
* Turn the activity more into electronics making use of perfboards, soldering irons and including different electronic components.
* Use the robot for programming activities: defining the instructions that form every movement or creating programs that control any sensor or actuator we have attached to the robot.
* Treat all the pointed challenges together.

## General characteristics

Pros:

* Un buen primer proyecto para iniciarse en la robótica.
* Completely open design with very permisive license (GPL3 for the code and CC BY-NC-SA 4.0 for the 3D printed parts).
* Standard and extremelly simple electronics: mostly just two SG90 servos, one Arduino Nano board, a Nano sensor shield (or a perfboard) and a 9V battery.
* Very easy to print: just a few parts of reduced size that don't need support material while printing.
* Customizable: Creating new designs for any of his parts, but also because the chasis has connectors in the front area to attach any new piece designed by us.
* Extensible: After soldering an Arduino Nano board the perfboard should have enough free space to add extra componentes: a buzzer, LED lights, an ultraosinic sensor, LDR resistors...
* Is a four-legged robot. Sure it is a bit clumsy, but also lovely and funny while walking.

Cons:

* Es un cuadrúpedo. Porque esto también es un inconveniente ya que su desplazamiento hace muy complicada su utilización en ciertas actividades en las que contar con unas ruedas sería mucho más adecuado (ej: robot siguelíneas).

## Amigable para el aula

El robot puede ser utilizado y además construido en el aula ya que es sencillo, el precio por unidad es muy reducido y los tiempos de impresión de las piezas necesarios son bastante razonables. Esto siempre que tratemos grupos pequeños o bien contemos con un número adecuado de impresoras hace viable construir uno por alumno.

Su diseño permite llevar a cabo actividades en las que se pueda experimentar con las tres ramas fundamentales de la robótica:
* Mecánica: Hace uso de una rueda dentada, cremalleras y servomotores.
* Electrónica: Es posible construir el robot soldando distintos elementos en una placa perforada estándar y añadir elementos nuevos. Por contra también se puede simplificar su construcción utilizando una sensor shield para Arduino Nano, lo que eliminaría el uso de soldadores y componentes discretos, siendo solo necesario conectar elementos de una manera muy sencilla.
* Programación: A pesar de sus capacidades motrices limitadas es posible programarlo para realizar movimientos hacia adelante, atrás y giros en ambas direcciones.

Asimismo el chasis del robot cuenta con unos conectores en la parte frontal que permiten conectar piezas intercambiables. Estas piezas podrían ser diseños imprimidos en 3D creados con finalidad decorativa o bien funcional.

## Estado actual del proyecto

El robot ya se puede construir de ambas formas y realiza todos los movimientos para los que fue diseñado. El actual diseño de su chasis ya permite conectar tanto una sensor shield como una perfboard, lo que hace posible que su montaje se pueda realizar simplemente conectando elementos o bien soldando nuestro propio circuito en la perfboard.

## Historial de versiones

* v1.4: Mejorado el diseño del chasis para que pueda albergar tanto un sensor shield como una perfboard
* v1.3: Pequeñas modificaciones en el chasis para minimizar zonas de impresión completamente horizontales sin soporte
* v1.2: Modificado el diseño chasis para que se pueda imprimir en menos tiempo y utilizando menos material
* v1.1: Modificado el diseño de varias piezas para que se puedan imprimir sin soporte
* v1.0: Primera versión funcionalmente completa

## Galería

Capturas de pantalla (fotos hechas con el móvil... perdón) mostrando el diseño de las piezas 3D:

![Piezas CAD](images/cad_piezas_web.jpg)

![Chasis en CAD](images/cad_chasis_web.jpg)

Chasis recién imprimido (sin material de soporte):

![Chasis en impresora](images/chasis_en_impresora.jpg)

Sets de piezas preparados para ser utilizados en el aula:

![Sets de piezas en aula](images/sets_piezas_1_web.jpg)

![Sets de piezas en aula](images/sets_piezas_2_web.jpg)

Vídeo con sus primeros pasos (prototipo):

[![Vídeo primeros pasos (prototipo)](https://img.youtube.com/vi/WuDx59RuUR0/0.jpg)](https://www.youtube.com/watch?v=WuDx59RuUR0)

¡Están vivos! Robots construidos durante una actividad:

[![¡Están vivos!](https://img.youtube.com/vi/RpZjiBUb5sI/0.jpg)](https://www.youtube.com/watch?v=RpZjiBUb5sI)

Perfboard a la que además de soldar un Arduino Nano se le han añadido pulsadores para programar secuencias de órdenes, un zumbador, un led RGB y un interruptor de encendido:

![Perfboard con pulsadores](images/perfboard_con_pulsadores_web.jpg)

Prototipo montado utilizando una sensor shield. Montaje plug & play: cero soldaduras, la conexión a la pila se realiza mediante un jack estándar y los servos se unen a la placa con el mismo conector dupont hembra triple que recibimos según los compramos).

![Prototipo usando sensor shield](images/prototipo_con_sensor_shield_web.jpg)

## Lista de materiales

* 1x Arduino Nano
* 2x Servos SG90
* Si quieres soldar elementos en una placa:
    * 1x Placa perforada / perfboard
    * 1x Zócalo para conectar la placa Arduino Nano
    * 1x Interruptor que pueda ser soldado en la perfboard
    * Cualquier otro componente que quieras añadir: un zumbador, ledes, resistencias LDR...
* Si prefieres simplificar las cosas y no soldar nada:
    * 1x Sensor shield para Arduino Nano (Nano Shield)
    * 1x Conector pila 9v a jack de alimentación Arduino
* 1x Pila 9v
* Impresión de las siguientes piezas (modelos publicados en la carpeta [stl](./stl)):
    * 1x Chasis
    * 1x Rueda dentada
    * 1x Patas traseras
    * 2x Patas delanteras

## Construcción

Esquema básico de conexiones para su montaje utilizando una perfboard:

![Esquema conexiones](images/esquema_perfboard.png)

El anterior esquema muestra un montaje sencillo, donde únicamente existe un interruptor para encender o apagar el robot. Colocando la placa con el conector USB hacia la derecha quedaría más espacio disponible para por ejemplo añadir pulsadores con los que programar una secuencia de movimientos, un zumbador para emitir sonidos, un led RGB o cualquier otro componente.

Una vez tengamos delante de nosotros las piezas imprimidas y el resto del material necesario veremos que el procedimiento para montar el robot es prácticamente autoexplicativo. Posiblemente solo sea necesario comentar los siguientes puntos:

* Empeza cortando con un cutter los conectores plásticos que vienen con los servos para que uno quepa dentro de la rueda dentada y otro dentro de las patas traseras.
* Asegúramte que los dos servos están en su posición central antes de montarlos (puedes usar la misma pieza de plástico o cualquier otra de las incluidas para girarlos manualmente).
* Es posible que tengas que limar un poco la parte superior del hueco en el que se debe insertar el servo delantero. Los servos deberían insertarse con cierta resistencia, el diseño de estas zonas es deliberadamente justo (lo que permite prescindir de tornillos de sujección en la mayoría de los casos).
* Cuando coloques la parte delantera tendrás que insertar todos los elementos imprimidos juntos (las dos patas y la rueda). Piensa que estás colocando todo en su posición central y por tanto debería quedar aproximadamente el mismo número de dientes encima y debajo del eje del motor. Coloca las piezas y después inserta y atornilla el servo.

## Sketch Arduino

En la carpeta [src](./src) se han publicado los siguientes sketches Arduino de ejemplo:

* minimum.ino: Movimiento recto. Código didáctico y simplificado al máximo.
* abercrombie.ino: Tiene métodos para avanzar, girar y caminar hacia atrás. Añadidas definiciones para ajustar fácilmente el funcionamiento del robot según la posición inicial de cada servo (para facilitar su configuración a las pequeñas variaciones originadas durante el montaje).

## Colabora

Si construyes tu propio robot o lo utilizas en alguna actividad envía por favor una foto. ¡Sería genial verlo!

¿Has realizado alguna mejora o modificación? ¡Comparte tu trabajo!
