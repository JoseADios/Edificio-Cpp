# 🌟 Proyecto de Gráficos ASCII en C++ 🌟

Este proyecto es un programa en C++ que dibuja gráficos ASCII en la consola. Utiliza funciones de Windows para controlar la posición del cursor y colores para crear un paisaje y un edificio con un ascensor en movimiento.

## 📋 Requisitos

- 🖥️ Compilador compatible con C++.
- 🪟 Sistema operativo Windows (debido al uso de las funciones de la biblioteca `<windows.h>`).

## 🚀 Cómo ejecutar el programa

1. 📂 Clona este repositorio en tu máquina local.
2. ✏️ Abre el proyecto en tu IDE o editor de texto preferido.
3. 🛠️ Compila el archivo principal del programa (`main.cpp`).
4. ▶️ Ejecuta el programa compilado.

## 📝 Descripción del Código

### 🎨 Definición de Colores

El programa define una serie de macros para facilitar el uso de colores en la consola:

```cpp
//===Color font code===/
#define BLACK   "\x1B[30m"
#define RED     "\x1b[31m"
// ... (otros colores)
#define RESET   "\x1b[0m"
```

### 🔧 Funciones Principales

#### `gotoxy`

```cpp
void gotoxy(short x, short y);
```
Mueve el cursor de la consola a la posición `(x, y)`.

#### `Limpia`

```cpp
void Limpia(int x1, int x2, int y1, int y2);
```
Limpia una región rectangular de la consola.

#### `paisaje`

```cpp
void paisaje();
```
Dibuja un paisaje con estrellas, árboles y césped.

#### `pintaPared`

```cpp
void pintaPared(int inicio, int fin, char col);
```
Pinta una pared de un edificio con colores específicos.

#### `edificio`

```cpp
void edificio();
```
Dibuja un edificio con un ascensor.

#### `dibujaCentro`

```cpp
void dibujaCentro(int inicio, int final);
```
Dibuja el centro del edificio.

#### `ascensor`

```cpp
void ascensor(int VaAlpiso, int pisoActual);
```
Anima el movimiento del ascensor entre pisos.

## 💡 Ejemplo de Uso

```cpp
int main()
{
    // Inicialización de la semilla para la generación de números aleatorios
    srand(time(NULL));
    
    // Dibuja el paisaje
    paisaje();
    
    // Dibuja el edificio
    edificio();
    
    // Anima el ascensor al primer piso desde el tercer piso
    ascensor(1, 3);
    
    return 0;
}
```

## 👤 Autor

- ** José de Dios** - [Perfil](https://github.com/JoseADios)

