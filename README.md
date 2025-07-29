# 🛠️ push_swap

---

![Descripción](https://img.shields.io/badge/Descripción-blue?style=for-the-badge)

- Implementación del proyecto **push_swap** de 42: ordenar una lista de enteros usando dos pilas y un conjunto limitado de operaciones.
- El objetivo es generar la **secuencia mínima** de movimientos para ordenar los valores de menor a mayor.
- Refuerza conceptos de:
  - Manipulación de estructuras tipo **stack**.
  - Algoritmos de ordenación adaptados a restricciones de movimientos.
  - Gestión de memoria y punteros en C.

---

![Operaciones](https://img.shields.io/badge/Operaciones-green?style=for-the-badge)

Se disponen de dos pilas, **A** y **B**, y estas operaciones:

| Código | Descripción                                    |
|:------:|------------------------------------------------|
| `sa`   | Swap los dos primeros elementos de la pila A   |
| `sb`   | Swap los dos primeros elementos de la pila B   |
| `ss`   | `sa` y `sb` al mismo tiempo                    |
| `pa`   | Push: mueve el primer elemento de B a A        |
| `pb`   | Push: mueve el primer elemento de A a B        |
| `ra`   | Rotate: desplaza todos los elementos de A ↑    |
| `rb`   | Rotate: desplaza todos los elementos de B ↑    |
| `rr`   | `ra` y `rb` al mismo tiempo                    |
| `rra`  | Reverse rotate: desplaza todos los de A ↓      |
| `rrb`  | Reverse rotate: desplaza todos los de B ↓      |
| `rrr`  | `rra` y `rrb` al mismo tiempo                  |

---

![Estructura](https://img.shields.io/badge/Estructura-orange?style=for-the-badge)

```text
06.push_swap-main/
├── includes/            # Cabeceras (.h)
│   └── push_swap.h      # Prototipos y definiciones
├── srcs/                # Código fuente (.c)
│   ├── push_swap.c      # Lógica principal y algoritmo
│   ├── utils.c          # Funciones auxiliares (parsing, validación)
│   ├── ops.c            # Implementación de operaciones (sa, pb, ra…)
│   └── …
├── tests/               # (Opcional) Bancos de prueba
├── Makefile             # Reglas de compilación
└── libpush.a            # Biblioteca estática generada
```

![Compilación](https://img.shields.io/badge/Compilación-blue?style=for-the-badge)

- make

- make all — Compila todos los .c y crea libpush.a.

- make clean — Elimina los objetos intermedios (*.o).

- make fclean— Además de clean, elimina libpush.a y el binario.

- make re — Ejecuta fclean y luego all.

![Uso](https://img.shields.io/badge/Uso-yellow?style=for-the-badge)

Ejecutar en terminal
  
  ./push_swap 3 2 5 1 4

    - Cada argumento es un entero (puede repetirse el signo “−”).

    - El programa imprime en stdout la lista de operaciones, una por línea.

    - Para verificar el resultado, puedes usar checker (parte bonus) que aplica esas operaciones y comprueba el orden.
    
![Autor](https://img.shields.io/badge/Autor-red?style=for-the-badge)

- Roberto del Olmo Lima
- [![GitHub](https://img.shields.io/badge/GitHub-Profile-informational?style=for-the-badge&logo=github&logoColor=white&color=181717)](https://github.com/legrol)
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;[![LinkedIn](https://img.shields.io/badge/LinkedIn-0077B5?style=for-the-badge&logo=linkedin&logoColor=white)](https://www.linkedin.com/in/roberto-del-olmo-731746245)
