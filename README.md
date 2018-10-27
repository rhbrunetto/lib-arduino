# lib-arduino
Biblioteca para utilização de módulos básicos para Arduino

## Introdução
Biblioteca desenvolvida como primeiro trabalho da disciplina de Sistemas Digitais, curso Ciência da Computação pela Universidade Estadual de Maringá. O trabalho consiste em uma bilblioteca para integração com os seguintes módulos para o microcontrolador Arduino:

* Manipulação dos pinos E/S
* Geração de ondas
* Delay variável
* Interface com LED
* Interface com botão
* Interface com Display de 7-segmentos
* Sensor de distância

## Requisitos

A biblioteca foi desenvolvida para ambiente Linux, chip alvo Atmega328p. As dependências:

```
avrdude
gcc-avr
```

## Utilização 

Crie um arquivo fonte ~~main.c~~ no diretorio ~~src/exec~~, em seguida:
```
make
```

Para utilizar a biblioteca basta incluir as arquivos header. Ex:

```
#include "pins.h"
```

## Documentação

A documentação está disponível em ~~doc/~~.

## Autores

Ricardo Henrique Brunetto ra94182
Thiago Kira ra78750




