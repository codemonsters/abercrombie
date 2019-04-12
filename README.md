# Abercrombie

Four-legged didactic and minimalistic robot using an Arduino Nano board, two SG90 servos and five easy to print parts.

The design is extremely simple. It is meant to be used in the classroom and also by anyone that wants to assemble his first robot from scratch.

([versión en español aquí](README.es.md))

![Abercrombie](images/abercrombie_web.jpg)

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

* Simple and completely open design with a very permisive license (GPL3 for the code and CC BY-NC-SA 4.0 for the 3D printed parts).
* Standard and extremelly simple electronics: mostly just two SG90 servos, one Arduino Nano board, a Nano sensor shield (or a perfboard) and a 9V battery.
* Very easy to print: just a few parts of reduced size that don't need support material while printing.
* Customizable: Creating new designs for any of his parts, but also because the chassis has connectors in the front area to attach any new piece designed by us.
* Extensible: After soldering an Arduino Nano board the perfboard should have enough free space to add extra componentes: a buzzer, LED lights, an ultraosinic sensor, LDR resistors...
* It is a four-legged robot. And a bit clumsy, but also lovely and funny while walking.

Cons:

* It is a four-legged robot. Sure this is also and disadvantage and his movement is not suited for certain activities where wheeled robots are much better (i.e.: using it with line following circuits).

## Friendly for the classroom

The robot can be used and also built in the classroom: it is simple, price per unit is very low and printing times for all the parts are quiet reasonable. Depeding on the size of the group and the number of printers available it could be feasible to build one per student.

The design of the robot is suited to focus the activity in any of the main areas of robotics:
* Mechanics: It uses a gear wheel, gear racks and servomotors.
* Electronics: It is possible to build the robot soldering the needed components in a standard perfboard and add new elements. On the other hand is also possible to simplify its construction using an Arduino Nano sensor shield. That way one should just plug the connectors to the board using his bare hands.
* Programming: Even with its simplistic design, the robot can be programmed to walk forward, backwards and to turn in both directions.

The chassis of the robot has four connectors in the front to allow attaching swappable parts. These part could have aesthetical purposes (a new face for the robot) or even functional.

## Current state of the project

The current design of the robot is ready to be built with both kind of boards (sensor shield or perfboard) and it is also able to make all the basic movements it was meant for (walking forward, backward and turning in both directions).

## Version history

* v1.4: Design improvements in the chassis to allow attaching both a perfboard or a Nano sensor shield.
* v1.3: Small modifications in the chassis to minimize completely horizontal hanging areas.
* v1.2: Chassis design changed to be printed in less time and using less material.
* v1.1: Several parts modified to be printed without support material.
* v1.0: First working version.

## Gallery

Screenshots (pictures caputed with the phone... sorry) showing the desing of the parts:

![CAD parts](images/cad_piezas_web.jpg)

![CAD chassis](images/cad_chasis_web.jpg)

Chassis just printed (without support material):

![Chassis in printer](images/chasis_en_impresora.jpg)

Collection of parts ready to be used in a group activity:

![Set of parts for the classroom](images/sets_piezas_1_web.jpg)

![Set of parts for the classroom](images/sets_piezas_2_web.jpg)

Video with his first steps (prototype):

[![Video with his first steps (prototype)](https://img.youtube.com/vi/WuDx59RuUR0/0.jpg)](https://www.youtube.com/watch?v=WuDx59RuUR0)

They are alive! Robots built and customized during an activity:

[![¡Están vivos!](https://img.youtube.com/vi/RpZjiBUb5sI/0.jpg)](https://www.youtube.com/watch?v=RpZjiBUb5sI)

Perfboard with an Arduino Nano soldered but also with added temporary switches to program the sequence of movements, a buzzer, a RGB LED and a power switch:

![Perfboard with components](images/perfboard_con_pulsadores_web.jpg)

Prototype that uses a sensor shield. Plug & play assembly: zero soldering, the connections between the battery and the board used a standard power jack and the servos are directly connected to the sensor board using its own triple dupont female connector, no modifications needed).

![Prototype using a sensor shield](images/prototipo_con_sensor_shield_web.jpg)

## Bill of materials

* 1x Arduino Nano board
* 2x SG90 servos
* In case you want to solder the elements:
    * 1x perfboard
    * 1x Arduino Nano socket
    * 1x power switch (breadboard friendly)
    * Any other component you want to add: un zumbador, ledes, resistencias LDR...
* If you choose to simplify things and avoid soldering:
    * 1x Arduino Nano Sensor Shield
    * 1x 9v battery connector with an Arduino compatible jack
* 1x 9v battery
* Printing these parts (the models are published in the [stl](./stl) folder):
    * 1x chassis
    * 1x gear wheel
    * 1x rear legs
    * 2x forward legs

## Construction

Basic electrical diagram to be used with a perfboard:

![Electrical diagram](images/esquema_perfboard.png)

Former diagram shows a simple robot, having only a power switch. Place the Arduino Nano board so it has the USB connector to the right if you want to have more free space to add extra components like switches to program sequences of movements, a buzzer to make sounds, an RGB LED or any other component.

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
