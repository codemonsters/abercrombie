# Abercrombie

Robot cuadrúpedo didáctico y minimalista basado en un Arduino Nano, 2 servos SG90 y varias piezas sencillas imprimibles en 3D.

## Descripción

Abercrombie es un robot cuadrúpedo extremadamente sencillo pensado sobre todo para ser utilizado en el aula, pero también para todo aquel que quiera construir un primer robot sencillo desde cero.

Una clara inspiración para desarrollar este robot fue sin duda el fantástico diseño de Randy Sarafan [accesible desde aquí](https://www.instructables.com/id/3D-Printed-Robot/). Es un robot bonito con un diseño muy bien planteado, pero para fines didácticos se adapta mejor un robot más pequeño, fácil y rápido de imprimir y que esté formado por componentes que sean muy fáciles de conseguir.

## Motivación

El robot está diseñado para ser construido y utilizado en el aula. Pretende ser una base para que niños, jóvenes y por supuesto cualquier adulto pueda construir, programar y personalizar su propio robot, incluso teniendo poca o ninguna experiencia previa en este tipo de problemática.

Pros:

* Diseño completamente abierto y licencia muy permisiva (GPL3 para el código y CC BY-NC-SA 4.0 para las piezas 3D).
* Electrónica estándar y extremadamente simple: dos servos SG90, un Arduino Nano, una pila de 9V y poco más.
* Impresión 3D sencilla: pocas piezas, de tamaño contenido e imprimibles sin necesidad de material de soporte.
* Un buen primer proyecto para iniciarse en la robótica.
* Extensible: En la placa perforada además caber una placa Arduino Nano debería quedar espacio libre para añadir elementos extra: un zumbador, pulsadores, ledes, un sensor de ultrasonidos, resistencias LDR...
* Personalizable: Se pueden conectar piezas también imprimidas en 3D a su parte frontal.
* Es un cuadrúpedo. Un poco torpe (pobriño...), pero con un aspecto y movimiento simpático y amigable.

Contras:

* Es un cuadrúpedo, y esto es también un inconveniente ya que su desplazamiento hace muy complicada su utilización en ciertas actividades en las que contar con unas ruedas sería mucho más adecuado (ej: robot siguelíneas).

## Amigable para el aula

El robot puede ser utilizado y además construido en el aula ya que es sencillo, el precio por unidad es muy reducido y los tiempos de impresión de las piezas necesarios son bastante razonables. Esto siempre que tratemos grupos pequeños o bien contemos con un número adecuado de impresoras hace viable construir uno por alumno.

Su diseño permite llevar a cabo actividades en las que se pueda experimentar con las tres ramas fundamentales de la robótica:
* Mecánica: hace uso de una rueda dentada, cremalleras y servomotores.
* Electrónica: Es posible construir el robot soldando distintos elementos en una placa perforada estándar y añadir elementos nuevos. Por contra también se puede simplificar su construcción utilizando una sensor shield para Arduino Nano, lo que eliminaría el uso de soldadores y componentes discretos, siendo solo necesario conectar elementos de una manera muy sencilla.
* Programación: A pesar de sus capacidades motrices limitadas es posible programarlo para realizar movimientos hacia adelante, atrás y giros en ambas direcciones.

Asimismo el chasis del robot cuenta con unos conectores en la parte frontal que permiten conectar piezas intercambiables. Estas piezas podrían ser diseños imprimidos en 3D creados con finalidad decorativa o bien funcional.

## Galería

Capturas de pantalla (ejem...) mostrando el diseño de las piezas 3D:

![Piezas CAD](imagenes/cad_piezas_web.jpg)

![Chasis en CAD](imagenes/cad_chasis_web.jpg)

Chasis recién imprimido (sin material de soporte):

![Chasis en impresora](imagenes/chasis_en_impresora.jpg)

Sets de piezas preparados para ser utilizados en el aula:

![Sets de piezas en aula](imagenes/sets_piezas_1_web.jpg)

![Sets de piezas en aula](imagenes/sets_piezas_2_web.jpg)

Vídeo con sus primeros pasos (prototipo):

[![Vídeo primeros pasos (prototipo)](https://img.youtube.com/vi/WuDx59RuUR0/0.jpg)](https://www.youtube.com/watch?v=WuDx59RuUR0)

¡Están vivos! Robots construidos durante una actividad:

[![¡Están vivos!](https://img.youtube.com/vi/RpZjiBUb5sI/0.jpg)](https://www.youtube.com/watch?v=RpZjiBUb5sI)

## Lista de materiales

* 1x Arduino Nano
* 2x Servos SG90
* Si quieres soldar elementos en una placa:
    * 1x Placa perforada / perfboard
    * 1x Interruptor que pueda ser soldado en la perfboard
    * Cualquier otro componente que quieras añadir: un zumbador, ledes, resistencias LDR...
* Si prefieres simplificar las cosas y no soldar nada:
    * 1x Sensor shield para Arduino Nano
    * 1x Conector pila 9v a jack de alimentación Arduino
* 1x Pila 9v
* Impresión de las siguientes piezas (modelos publicados en la carpeta [stl](./stl)):
    * 1x Chasis
    * 1x Rueda dentada
    * 1x Patas traseras
    * 2x Patas delanteras

## Construcción

Esquema básico de conexiones para su montaje utilizando una perfboard:

![Esquema conexiones](imagenes/esquema_perfboard.png)
Tras el montaje debería quedar espacio libre en la perfoard para añadir componentes extra


## Sketch Arduino

En la carpeta [src](./src) se han publicado los siguientes sketches Arduino de ejemplo:

* minimo.ino: Movimiento recto. Código simplificado al máximo.
* simple.ino: Movimiento recto. Añadidos algunas definiciones para adaptar el funcionamiento del robot según la posición inicial de cada servo (para facilitar su configuración a las pequeñas variaciones originadas durante el montaje).
* movimientos.ino: Similar a simple.ino pero añadidas funciones para que el robot pueda girar y retroceder.
