# Linguagem.algoritimos.1
#  Calculadora Científica em C

# Descrição do Projeto
Este projeto consiste no desenvolvimento de uma **calculadora científica robusta baseada em console**, programada inteiramente na linguagem **C**. O sistema foi projetado para oferecer uma interface de texto intuitiva e organizada, permitindo ao usuário realizar desde operações aritméticas elementares até cálculos trigonométricos e logarítmicos complexos.

#  Objetivo da Calculadora
O objetivo principal deste software é fornecer uma ferramenta de cálculo rápida, precisa e acessível via terminal. Além disso, o projeto serve como um consolidador de práticas fundamentais de programação estruturada, demonstrando como modularizar um código complexo em funções independentes e reutilizáveis.

#  Funcionalidades Implementadas
* **Interface via Menu:** Navegação fluida por meio de menus numerados e submenu de opções científicas.
* **Validação de Entradas:** Proteção contra divisões por zero, raízes de números negativos e outras indeterminações matemáticas.
* **Histórico ou Continuidade:** Sistema estruturado para permitir múltiplos cálculos sem a necessidade de reiniciar o programa.
* **Precisão Decimal:** Uso de tipos de dados de dupla precisão (`double`) para garantir a confiabilidade dos resultados.

# Relação das 20 Funções Desenvolvidas
O sistema é composto por 20 funções matemáticas e utilitárias bem definidas:

1. `soma`: Realiza a adição de dois números.
2. `subtracao`: Realiza a subtração de dois números.
3. `multiplicacao`: Realiza a multiplicação de dois números.
4. `divisao`: Realiza a divisão, com validação de denominador zero.
5. `potencia`: Eleva uma base a um determinado expoente (\(x^y\)).
6. `raiz_quadrada`: Calcula a raiz quadrada de um número não-negativo.
7. `raiz_cubica`: Calcula a raiz cúbica de qualquer número real.
8. `seno`: Calcula o seno de um ângulo (em radianos).
9. `cosseno`: Calcula o cosseno de um ângulo (em radianos).
10. `tangente`: Calcula a tangente de um ângulo, validando indeterminações.
11. `logaritmo_base10`: Calcula o logaritmo na base 10 de um número positivo.
12. `logaritmo_natural`: Calcula o logaritmo natural (ln) de um número positivo.
13. `fatorial`: Calcula o fatorial de um número inteiro não-negativo.
14. `porcentagem`: Calcula o percentual de um valor.
15. `modulo_absoluto`: Retorna o valor absoluto (positivo) de um número.
16. `inverso_numero`: Calcula o inverso de um número (\(1/x\)).
17. `graus_para_radianos`: Função utilitária para converter ângulos.
18. `radianos_para_graus`: Função utilitária para converter radianos em graus.
19. `limpar_tela`: Função utilitária de sistema para limpar o console.
20. `exibir_menu`: Renderiza as opções da calculadora na tela.

*(Nota: Caso suas 20 funções sejam diferentes, substitua os nomes e descrições acima pelos equivalentes do seu código).*

## Bibliotecas Utilizadas
* `<stdio.h>`: Responsável pelas operações de entrada e saída padrão (como `printf` e `scanf`).
* `<stdlib.h>`: Utilizada para funções de controle do sistema (como `system("clear")` ou `system("cls")`).
* `<math.h>`: Biblioteca matemática essencial para operações avançadas como `pow()`, `sqrt()`, `sin()`, `cos()`, `log()`, entre outras.

##  Organização do Código
O código está estruturado de forma **modular e linear** em um único arquivo (ou dividido em arquivos `.c` e `.h`, se for o seu caso), seguindo as boas práticas de desenvolvimento:
* **Protótipos das Funções:** Declarados no início do arquivo para que o compilador reconheça a assinatura de todas as operações.
* **Função Principal (`main`):** Atua como o cérebro do programa, gerenciando o fluxo dos menus, capturando a escolha do usuário e direcionando para as funções correspondentes.
* **Implementação das Funções:** Bloco isolado ao final do arquivo contendo a lógica matemática individual de cada uma das 20 funções.

# Conceitos de Programação Aplicados

# 1. Funções
Utilizadas para modularizar o código, dividindo o problema principal em subproblemas menores. Cada operação matemática possui sua própria assinatura (`tipo_retorno nome(parametros)`), o que facilita a manutenção, leitura e evita a repetição de código.

# 2. Estruturas Condicionais (`if`, `else if`, `else`, `switch`)
O `switch` foi aplicado no menu principal para direcionar o fluxo do programa com base na escolha do usuário. As estruturas `if`/`else` foram fundamentais para realizar validações de segurança matemática (ex: impedir divisão por zero ou raiz de número negativo).

### 3. Estruturas de Repetição (`do-while` / `while`)
Utilizadas para manter o programa em execução contínua até que o usuário decida explicitamente sair (escolhendo a opção "Sair" no menu). Também servem para validar se o usuário digitou uma opção válida.

# 4. Entrada e Saída de Dados
Implementadas através das funções `printf` (para exibir menus, instruções e resultados de forma clara no terminal) e `scanf` (para capturar os comandos e os dados numéricos digitados pelo usuário).

# 5. Utilização da Biblioteca `math.h`
A integração com a biblioteca matemática nativa do C permitiu estender a capacidade da calculadora, fornecendo algoritmos otimizados para o cálculo de potências reais, raízes exatas e funções trigonométricas de alta precisão.

# Instruções para Compilação e Execução
Para compilar o projeto, certifique-se de ter um compilador C (como o **GCC**) instalado em sua máquina.

> * Importante:** Ao compilar códigos que usam a biblioteca `<math.h>` no Linux/macOS, é necessário incluir a flag `-lm` ao final do comando para vincular a biblioteca matemática.

### Passo 1: Compilação
Abra o terminal na pasta do arquivo e digite:
```bash
gcc main.c -o calculadora -lm
```

### Passo 2: Execução
No terminal, execute o binário gerado:
* **Linux/macOS:**
  ```bash
  ./calculadora
  ```
* **Windows:**
  ```bash
  calculadora.exe
  ```

# Exemplos de Uso

**Cenário 1: Operação Simples (Soma)**
```text
=== MENU CALCULADORA ===
1. Soma
2. Subtração
...
Escolha uma opção: 1

Digite o primeiro número: 12.5
Digite o segundo número: 7.5

Resultado da Soma: 20.00
```

**Cenário 2: Validação de Erro (Divisão por Zero)**
```text
=== MENU CALCULADORA ===
4. Divisão
...
Escolha uma opção: 4

Digite o dividendo: 10
Digite o divisor: 0

[ERRO]: Divisão por zero não é permitida!
```

# Identificação do Estudante
* **Nome:** [ rodrigo de oliveira marques ]
* **Matrícula/RGM:** [  48013188]
* **Curso:** [engenharia de soft  ]
* **Instituição:** [ cruzeiro do sul  ]
* **Período/Ano:** [ Ex: 2º semestre / 2026 ]
