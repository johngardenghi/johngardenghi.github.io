---
layout: page
excerpt: "Ambiente de desenvolvimento APC (2022-1)"
exclude: true
---

Esta página contém instruções para instalação e configuração básica do ambiente de desenvolvimento para APC.

## Ambiente básico de desenvolvimento

Nessa disciplina, nossa sugestão é utilizar a IDE <a href="https://code.visualstudio.com/" target="_blank">Visual Studio Code</a> para codificar e o compilador GCC para compilar e rodar um programa via linha de comando de algum terminal. Como terminais, sugerimos
1. Windows Powershell ou
2. Bash (Ubuntu/Ubuntu WSL)

### Instalação do VS Code

Faça o *download* do instalador apropriado para seu sistema operacional <a href="https://code.visualstudio.com/" target="_blank">aqui</a>.

Depois de realizar o download, basta seguir os passos de instalação.

Nossa sugestão incluir usar a IDE apenas como editor de código fonte. *Instalação e uso de extensões fica por conta de cada aluno*. Recomendo que vocês sempre procurem ser o mais curiosos possível, mas que não fiquem dependentes de extensões (ou seja, saibam fazer as coisas sem elas).

### Preparação do terminal

Para compilar e rodar um código C no VS Code, sugerimos utilizar o terminal contido no próprio VS Code juntamente com o compilador de C da suite GCC.

Você pode usar o terminal de sua preferência, mas será necessário instalar a suíte GCC nele.

#### Instalação do GCC no Ubuntu

Caso você resolva usar o Ubuntu, para instalar a suíte GCC, basta digitar no terminal
```
sudo apt install gcc
```

Se você quiser usar Ubuntu dentro do próprio Windows, uma boa opção é o WSL. Você pode ver como instalar o WSL <a href="https://docs.microsoft.com/pt-br/windows/wsl/install" target="_blank">aqui</a>.

#### Instalação do GCC no Windows

Para instalar o GCC no Windows, a sugestão é utilizar o MinGW. Um bom e simples tutorial para instalação pode ser visto <a href="https://edisciplinas.usp.br/mod/resource/view.php?id=2294808" target="_blank">aqui</a> (apenas ignore a parte que fala do Dev C++).

### Como compilar seu código

No terminal, basta digitar
```
gcc -o nome_executavel codigo_fonte.c
```

É importante observar que, caso você esteja usando Powershell no Windows, ao `nome_executavel` será adicionada automaticamente a extensão `.exe`.


### Como rodar seu código

No Linux,
```
./nome_executavel
```

No Windows Powershell,
```
.\nome_executavel.exe
```
