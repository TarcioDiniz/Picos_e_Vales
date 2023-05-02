# Picos_e_Vales

Esse código em C tem como objetivo verificar se uma sequência de paisagens é padronizada ou não. Aqui está uma explicação linha a linha do código:

```
#include <stdio.h>
```
Esta linha inclui a biblioteca padrão de entrada e saída em C, que permite a entrada de dados através do teclado e a saída de dados para a tela.

```
int main() {
```
Esta linha inicia a função principal do programa.

```
int num_landscapes, current_landscape, previous_landscape, is_pattern = 1, is_peak;
```
Esta linha declara cinco variáveis: `num_landscapes` é o número de paisagens que serão verificadas, `current_landscape` é a paisagem atual, `previous_landscape` é a paisagem anterior, `is_pattern` é uma variável booleana que determina se a sequência é padronizada ou não (inicialmente definida como verdadeira) e `is_peak` é uma variável booleana que determina se a paisagem anterior é um pico (inicialmente indefinida).

```
scanf("%d", &num_landscapes);
```
Esta linha lê o número de paisagens que serão verificadas a partir da entrada padrão (teclado).

```
if (num_landscapes == 1) {
    scanf("%d", &current_landscape);
    printf("%d\n", is_pattern);
}
```
Esta linha é um condicional que verifica se há apenas uma paisagem a ser verificada. Se houver, o programa lerá o valor da paisagem e imprimirá o valor da variável booleana `is_pattern`.

```
else if (num_landscapes == 2) {
    scanf("%d", &previous_landscape);
    scanf("%d", &current_landscape);
    printf("%d\n", current_landscape != previous_landscape);
}
```
Esta linha é outro condicional que verifica se há apenas duas paisagens a serem verificadas. Se houver, o programa lerá os valores das duas paisagens e imprimirá o valor da comparação booleana entre as paisagens (true se forem diferentes e false se forem iguais).

```
else {
    scanf("%d", &previous_landscape);
    scanf("%d", &current_landscape);
    num_landscapes -= 2;
    is_peak = current_landscape > previous_landscape;
    do {
        previous_landscape = current_landscape;
        scanf("%d", &current_landscape);
        num_landscapes--;
        if (is_pattern) {
            if (is_peak) {
                is_pattern = current_landscape < previous_landscape;
                is_peak = 0;
            } else {
                is_pattern = current_landscape > previous_landscape;
                is_peak = 1;
            }
        }
    } while (num_landscapes > 0);
    printf("%d\n", is_pattern);
}
```
Se houver mais de duas paisagens, o programa lerá as duas primeiras paisagens e armazenará seus valores nas variáveis `previous_landscape` e `current_landscape`. Em seguida, o valor de `num_landscapes` será decrementado em 2.

A variável `is_peak` é inicializada com o valor booleano que indica se a paisagem atual é um pico em relação à paisagem anterior.

O programa então entra em um loop `do-while` que executa enquanto ainda houver paisagens a serem verificadas. Dentro do loop, o programa atualiza as variáveis `previous_landscape`
