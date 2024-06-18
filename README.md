# Hotel Descanso Garantido - Sistema de Gerenciamento

## Introdução

Este projeto é um sistema de gerenciamento para um hotel fictício chamado "Hotel Descanso Garantido". O sistema permite o cadastro e consulta de clientes, funcionários, quartos, e estadias. As principais funcionalidades incluem registrar estadias e dar baixa nelas, mantendo os dados persistentes em arquivos.

## Estrutura do Projeto

O projeto está organizado da seguinte forma:

```
HotelDescansoGarantido/
├── bin/
├── include/
│   ├── cliente.h
│   ├── funcionario.h
│   ├── quarto.h
│   └── estadia.h
├── src/
│   ├── cliente.c
│   ├── funcionario.c
│   ├── quarto.c
│   ├── estadia.c
│   └── main.c
├── data/
│   ├── clientes.dat
│   ├── funcionarios.dat
│   ├── quartos.dat
│   └── estadias.dat
├── docs/
├── README.md
└── Makefile
```

- **bin/**: Diretório onde o executável final será colocado após a compilação.
- **include/**: Diretório contendo todos os arquivos de cabeçalho (.h).
- **src/**: Diretório contendo todos os arquivos fonte (.c).
- **data/**: Diretório onde são armazenados os arquivos de dados (.dat).
- **docs/**: Diretório para documentação adicional do projeto.
- **README.md**: Arquivo de texto explicativo sobre o projeto, incluindo instruções de uso.
- **Makefile**: Arquivo de construção para facilitar a compilação e limpeza do projeto.

## Funcionalidades

- Cadastro de clientes
- Consulta de clientes
- Cadastro de funcionários
- Consulta de funcionários
- Cadastro de quartos
- Consulta de quartos
- Registro de estadias
- Baixa de estadias
- Consulta de estadias

## Arquivos de Cabeçalho (include/)

### cliente.h

Define a estrutura e as funções para gerenciamento de clientes.

### funcionario.h

Define a estrutura e as funções para gerenciamento de funcionários.

### quarto.h

Define a estrutura e as funções para gerenciamento de quartos.

### estadia.h

Define a estrutura e as funções para gerenciamento de estadias.

## Arquivos Fonte (src/)

### cliente.c

Implementa as funções de cadastro e consulta de clientes.

### funcionario.c

Implementa as funções de cadastro e consulta de funcionários.

### quarto.c

Implementa as funções de cadastro e consulta de quartos.

### estadia.c

Implementa as funções de registro, baixa e consulta de estadias.

### main.c

Contém o ponto de entrada do programa e o menu principal para acesso às funcionalidades do sistema.

## Compilação e Execução

Para compilar e executar o projeto, siga os passos abaixo:

1. Navegue até o diretório raiz do projeto.
2. Execute o comando `make` para compilar o projeto.
3. O executável será gerado no diretório `bin/`.
4. Execute o comando `./bin/HotelDescansoGarantido` para iniciar o programa.

## Exemplo de Uso

1. Execute o programa.
2. Escolha a opção desejada no menu principal.
3. Siga as instruções exibidas na tela para cadastrar, consultar ou gerenciar os registros.

## Contribuição

Se desejar contribuir para este projeto, siga os passos abaixo:

1. Faça um fork do repositório.
2. Crie uma branch para sua feature ou correção (`git checkout -b feature/AmazingFeature`).
3. Faça commit de suas alterações (`git commit -m 'Add some AmazingFeature'`).
4. Envie para o branch original (`git push origin feature/AmazingFeature`).
5. Abra um Pull Request.

