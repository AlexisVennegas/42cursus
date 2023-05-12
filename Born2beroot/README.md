1.- Que es una maquina virtual

    R:  Es un software que simula un sistema de computación, ejecutando programas. Permite crear múltiples entornos simulados

2.- Debian

    R:  Debian es una distribución de Linux comunitaria que se enfoca en la estabilidad y la seguridad. Es conocida por tener un proceso de desarrollo lento pero estable y por su sistema de paquetes de software, que permite la fácil instalación, actualización

    CentOS es una distribución de Linux de nivel empresarial que se basa en el código fuente de Red Hat Enterprise Linux (RHEL). Es conocida por su enfoque en la estabilidad y la seguridad, al igual que Debian, pero también se enfoca en la compatibilidad con hardware y software de servidor empresarial. 

    Entre Debian y CentOS dependerá de las necesidades específicas del proyecto y las preferencias del usuario

3.- Cual es el proposito de las maquinas virtuales

    R:  Proporciona un entorno ejecutable distinto al sistema operativo, ejempl, linux, y tener windows

4.-  Diferencias entre apt (Advance Package Tool) y aptitude

    R:  Ambos son capaces de de proporcionar los medios necesarios para realizar la gestión de paquetes. Sin embargo, si se busca un enfoque con mas caracteristicas, debería ser, Aptitude (interfaz mas nutrida ).

5.- Que es APPArmor

    R:  Es un módulo de seguridad del kernel Linux que permite al administrador del sistema restringir las capacidades de un programa.
        APPArmor: otorga acceso a todas las aplicaciones primero y luego restringe (sudo aa-status) ;
        SELinux:  restringue acceso a todas las aplicaciones y le da acceso a aquellas que tengan certiifaciones adecuadas

6.- Que es LVM (Logical Volum Manager)

    R: Es un gestor de volúmenes lógicos. Proporciona un método para asignar espacio en dispositivos de almacenamiento masivo, que es más   flexible que los esquemas de particionado convencionales para almacenar volúmenes. OFRECE PARTICIONES

    En términos simples, LVM es como tener un gran armario en el que se pueden mover las repisas para ajustar el espacio según sea necesario, en lugar de tener repisas fijas y limitadas. Esto facilita la gestión del almacenamiento de datos en el sistema y permite una mayor flexibilidad en el uso del espacio de almacenamiento.

----------------------------------------------------------------------------------------------------------------------------------------------

1.-  Comprobar que no haya ninguna interfaz grafica en uso.

    R: ls /usr/bin/*session || ps -e | grep Xorg

2.-  Comprobar que el servicio UFW esta en uso. (Uncomplicated Firewall)

    R: configurar reglas para permitir que solo ciertos puertos de red sean accesibles desde Internet,

    R: sudo ufw status; indica permite el trafico en el puerto 4242 (allow), y from significa que de cualquier ip//iPv6

    R: sudo service ufw status; 

3.- Comprobar que el servicio SSH (Secure Shell )esta en uso. 

    R: protocolo de red que permite conectarse a un servidor de forma segura y remota utiliza cifrado para proteger las comunicaciones.

    Además de permitir la conexión remota al servidor, SSH también se puede utilizar para transferir archivos de forma segura y ejecutar comandos en el servidor de forma remota. SSH

    R:  sudo service ssh status

4.-  Comprobar que utilizas el sistema operativo Debian o Centos.

    R: uname -v (Unix name -version)

5.- Comprobar que tu usuario este dentro de los grupos "sudo" y "user42".

    R: getent group sudo

    R: getent group user42

6.- Crear un nuevo usuario y mostrar que sigue la politica de contraseñas que hemos creado.

    R: sudo adduser name_use

7.- Creamos un nuevo grupo llamado "evaluating".

    R: sudo addgroup evaluating

8-  Añadimos el nuevo usuario al nuevo grupo

    R: sudo adduser name_user evaluating;
    R: getent group evaluating;

9.- Comprobar que el hostname de la maquina es correcto login42.

    R: hostname

10.- Modificar hostname para remplazar tu login por el del evaluador. En este caso lo reemplazare por student42.

    R: sudo nano /etc/hostname
    R: sudo nano /etc/hosts
    R: sudo reboot
    R: Hostname

11.- Comprobar que todas las particiones son como indica el subject.

    R: lsblk

12.- Comprobar que sudo esta instalado

    R: which sudo // sudo --version

13.- Introducimos el nuevo usuario dentro del grupo sudo.

    R: sudo adduser name_user sudo
    R: getent group sudo

    R -> nano /etc/login.defs
    R -> nano /etc/pam.d/common-password


14.- Muestra la aplicación de las reglas impuestas para sudo por el subject.

    R: /var/log/sudo# || nano /etc/sudoers.d/sudo_config

15.- Muestra que la ruta /var/log/sudo/ existe y contiene almenos un fichero, en este se debería ver un historial de los comandos utilizados con sudo.

    R: cd /var/log/sudo 
    R: ls y cat sudo_config;
    R: cd cd home/avenegas

16.- Comprueba que el programa UFW esta instalado en la maquina virtual y comprueba que funciona correctamente.

    R: dpkg -s ufw (debian package)  estor de paquetes en sistemas Debian y sus derivados, que se utiliza para instalar, actualizar y eliminar paquetes.
    R: sudo service ufw status

17.- Lista las reglas activas en UFW si no esta hecha la parte bonus solo debe aparecer la regla para el puerto 4242.

    R: sudo ufw status numbered

18.- Crea una nueva regla para el puerto 8080. Comprueba que se ha añadido a las reglas activas y acto seguido puedes borrarla

    R: sudo ufw allow 8080
    R: sudo ufw status numbered
    R: sudo ufw delete (numero)

19.- Comprueba que el servicio ssh esta instalado en la maquina virtual, que funciona correctamente y que solo funciona por el puerto 4242.

    R: which ssh
    R: sudo service ssh status

20.-  Usa ssh para iniciar sesión con el usuario recién creado. Asegurate de que no puede usar ssh con el usuario root.

    R: ssh newuser@localhost -p 4242

21.-  Modifica el tiempo de ejecución del script de 10 minutos a 1.

    R: sudo crontab -u root -e
    R: primer paramentro , en vez de 10 lo cambiamos a 1.

22.- Finalmente haz que el script deje de ejecutarse cuando el servidor se haya iniciado, pero sin modificar el script.

    R: sudo /etc/init.d/cron stop

    R: sudo /etc/init.d/cron start