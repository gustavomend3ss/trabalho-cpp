# Sistema de Gerenciamento de Estoque - Loja de Computadores

- **Instituição:** Faculdade Independente do Nordeste (FAINOR)
- **Disciplina:** Estrutura de Dados
- **Professor:** Marcelo Almeida
- **Integrantes da Equipe:** Dhones Castor, Gabriel Curcio, Gustavo Mendes, João Paulo Dias


## Sobre o Projeto

Este projeto consiste em um sistema em C++ para gerenciamento do estoque de uma loja de computadores. O programa permite realizar a manutenção completa dos dados de computadores utilizando vetores dinâmicos (`vector`), permitindo operações fundamentais de estruturas de dados, tais como:

- **Inserção e Cadastro:** Adição de novos produtos no final ou em posições específicas da lista.
- **Consulta e Busca:** Localização de itens por nome ou código.
- **Edição e Atualização:** Alteração dos atributos de computadores já cadastrados.
- **Remoção:** Exclusão de itens do estoque a partir do código.
- **Relatório:** Exibição ordenada de todos os produtos cadastrados.

---

## Tecnologias Utilizadas

- **Linguagem:** C++
- **Biblioteca Padrão:** `<iostream>`, `<string>`, `<vector>`
- **Compilador Recomendado:** GCC / G++ (MinGW para Windows ou native gcc no Linux/macOS)

---

## Funcionalidades

1. **Cadastros:** Adiciona um ou múltiplos computadores sequencialmente ao estoque.
2. **Alterar Dados:** Busca um computador pelo código e atualiza suas informações (modelo, marca, processador, RAM, armazenamento, preço e quantidade).
3. **Consulta:** Permite pesquisar itens cadastrados por **Nome** ou por **Código**.
4. **Relatório:** Exibe uma lista detalhada com a posição e os dados de cada computador, além do total de itens no estoque.
5. **Inserir em uma posição:** Permite incluir um novo computador em um índice específico da lista (`std::vector::insert`).
6. **Remover computador:** Deleta um produto do estoque com base em seu código (`std::vector::erase`).

---

## Versão Alternativa (branch `featureCurcio`)

Além da versão principal, o repositório tem uma segunda implementação do sistema, desenvolvida por **Gabriel Curcio**, disponível na branch [`featureCurcio`](https://github.com/gustavomend3ss/trabalho-cpp/tree/featureCurcio).

Nessa versão, o código é dividido em três arquivos:

- **`Computador.h`:** declaração da classe `Computador` e de seus métodos.
- **`computador.cpp`:** implementação dos métodos da classe.
- **`Main.cpp`:** menu principal e as funções de cada operação.

Os computadores ficam armazenados em um vetor estático com capacidade para 100 itens, cada operação foi separada em uma função própria e o menu é controlado por `switch`.

### Funcionalidades

1. **Cadastrar computador:** Adiciona um novo computador ao final do vetor.
2. **Consultar computador:** Busca um computador pelo **Código** e exibe seus dados.
3. **Listar computadores:** Exibe todos os computadores cadastrados.
4. **Remover computador:** Exclui um computador pelo código, deslocando os seguintes para ocupar a posição liberada.