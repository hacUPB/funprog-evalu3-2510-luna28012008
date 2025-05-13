# Análisis del Módulo de Ley de Ohm

1. Fórmula Principal

La Ley de Ohm establece que la diferencia de potencial (V) entre dos puntos de un conductor es igual al producto de la corriente (I) que fluye a través de él y su resistencia (R).

>Fórmula: 
V = I * R


2. Fórmulas Despejadas

- Para calcular el voltaje (V):

        V = I * R

- Para calcular la corriente (I):

        I = V / R

- Para calcular la resistencia (R):

        R = V / I


3. Variables de Entrada

    - voltaje: Valor en voltios (V) ingresado por el usuario.

    - corriente: Valor en amperios (A) ingresado por el usuario.

    - resistencia: Valor en ohmios (Ω) ingresado por el usuario.

    - opcion: Determina qué cálculo se realizará (voltaje, corriente o resistencia).

4. Variables de Salida

    - voltaje: Resultado del cálculo de la diferencia de potencial.

    - corriente: Resultado del cálculo de la corriente eléctrica.

    - resistencia: Resultado del cálculo de la resistencia eléctrica.

5. Variables Utilizadas en el Programa

- voltaje (float)

- corriente (float)

- resistencia (float)

- opcion (int)

6. Funciones Secundarias Utilizadas

- menu_ley_ohm: Función específica para el cálculo de Ley de Ohm, encargada de gestionar el submenú y realizar los cálculos según la opción seleccionada.

- switch: Para elegir entre las tres operaciones posibles (voltaje, corriente, resistencia) según la opción ingresada.



# Análisis del Módulo de Resistencia de un Conductor

## Fórmula Principal

La fórmula utilizada para calcular la resistencia de un conductor es la siguiente:

        R = R0 * (1 + α * ΔT)

Donde:

- R: Resistencia del conductor a la temperatura final (en Ohms).

- R0: Resistencia del conductor a la temperatura inicial (en Ohms, Ω).

- α (alfa): Coeficiente de temperatura de la resistencia del material del conductor (en 1/°C o 1/K). Este valor varía dependiendo del material (ej: cobre, aluminio, etc.).

- ΔT (Delta T): Diferencia de temperatura (en °C o K) entre la temperatura final y la temperatura inicial. ΔT = T - T0.

- T: Temperatura final (en °C o K).

- T0: Temperatura inicial (en °C o K). 

## Variables de Entrada

1. Opción de material (oro, aluminio, cobre u otro)

2. Longitud del conductor

3. Área de la sección transversal

4. Temperatura

5. Resistividad (en caso de seleccionar "Otro")

6. Coeficiente de temperatura (en caso de seleccionar "Otro")

## Variables de Salida

Resistencia del conductor calculada

## Variables dentro del Programa

1. longitud: almacena la longitud del conductor ingresada por el usuario.

2. area: almacena el área de la sección transversal.

3. temperatura: almacena la temperatura en grados Celsius.

4. resistencia: almacena el resultado del cálculo de la resistencia.

5. resistividad: almacena el valor de resistividad según el material seleccionado.

6. coeficiente: almacena el coeficiente de temperatura del material.

7. Funciones Secundarias Utilizadas

### variable de control dentro del programa

1. menu_resistencia_conductor() 

muestra el submenú para calcular la resistencia del conductor y ejecuta el cálculo según los valores ingresados.

# Análisis del Módulo de Resistencia de un LED

## Fórmulas Principales

        R = (Vcc - Vled) / Iled

Resistencia (Serie): 

        R = (V_fuente - V_LED) / I_LED

Resistencia (Paralelo): 

        R = (Voltaje de la fuente - Voltaje del LED) / (Corriente del LED * Número de LEDs)

Potencia en la resistencia: 

        P=I^2×R

Potencia total del circuito: 

    P total = V × Itotal

Corriente total (Paralelo): 

    I total​ = v / Req
Donde:

- Vcc (Voltaje de la fuente):
Es el voltaje que tienes disponible para alimentar el LED (por ejemplo, 5V, 9V, etc.). 
- Vled (Voltaje directo del LED):
Es el voltaje que el LED necesita para encender correctamente. Puedes encontrar este valor en la hoja de datos del LED o en la información del fabricante. 
- Iled (Corriente del LED):
Es la corriente que deseas que fluya a través del LED. Generalmente, se recomienda una corriente entre 10mA y 30mA para una buena luminosidad y vida útil del LED. 
- R (Resistencia):
Es el valor de la resistencia que necesitas para limitar la corriente que fluye a través del LED y evitar que se queme
- V_fuente: El voltaje de la fuente de alimentación (por ejemplo, 12V, 5V, etc.).

### potencia en la resistencia

P = Potencia disipada en la resistencia (Watts)

𝐼
I = Corriente que atraviesa la resistencia (Amperios)

𝑅
R = Resistencia (Ohmios)

### potencia total del circuito

P total = Potencia total del circuito (Watts)

V = Voltaje total del circuito (Volts)

𝐼𝑡𝑜𝑡𝑎𝑙 = Corriente total del circuito (Amperios)

### corriente total 
Itotal= Corriente total (Amperios)

V = Voltaje de la fuente (Volts)

Req= Resistencia equivalente en paralelo (Ohmios)

## Variables de Entrada

- Voltaje de la fuente

- Número de LEDs

- Voltaje nominal del LED

- Corriente nominal del LED

- Tipo de conexión (Serie o Paralelo)

## Variables de Salida

- Resistencia calculada

- Potencia de la resistencia

- Potencia total del circuito

- Corriente total

## Variables dentro del Programa

- voltaje_fuente (float): Tensión de la fuente

- voltaje_led (float): Tensión nominal del LED

- corriente_led (float): Corriente nominal del LED

- resistencia (float): Resistencia calculada

- potencia_resistencia (float): Potencia disipada en la resistencia

- potencia_total (float): Potencia total del circuito

- corriente_total (float): Corriente total suministrada

- numero_leds (int): Cantidad de LEDs

- (char): Tipo de conexión (Serie o Paralelo)

- **link del video de sustentacion:** https://drive.google.com/file/d/1hPBBC5bgR4BRJSKh9uiqkaHQS8hA6tO7/view?usp=sharing