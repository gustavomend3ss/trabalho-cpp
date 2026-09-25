# trabalho-cpp
Trabalho da disciplina de Estrutura de Dados
# Sistema de Gerenciamento de Estoque - Loja de Computadores

Projeto desenvolvido para a disciplina de **Estrutura de Dados**  Engenharia da Computaçao / **Faculdade Independente do Nordeste (FAINOR)**.

---

## 💻 Sobre o Projeto

Este projeto consiste em um sistema em C++ para gerenciamento do estoque de uma loja de computadores. O programa permite realizar a manutenção completa dos dados de computadores utilizando vetores dinâmicos (`std::vector`), permitindo operações fundamentais de estruturas de dados, tais como:

- **Inserção e Cadastro:** Adição de novos produtos no final ou em posições específicas da lista.
- **Consulta e Busca:** Localização de itens por nome ou código.
- **Edição e Atualização:** Alteração dos atributos de computadores já cadastrados.
- **Remoção:** Exclusão de itens do estoque a partir do código.
- **Relatório:** Exibição ordenada de todos os produtos cadastrados.

---

## 🛠️ Tecnologias Utilizadas

- **Linguagem:** C++
- **Biblioteca Padrão:** `<iostream>`, `<string>`, `<vector>`
- **Compilador Recomendado:** GCC / G++ (MinGW para Windows ou native gcc no Linux/macOS)

---

## 🚀 Funcionalidades

1. **Cadastros:** Adiciona um ou múltiplos computadores sequencialmente ao estoque.
2. **Alterar Dados:** Busca um computador pelo código e atualiza suas informações (modelo, marca, processador, RAM, armazenamento, preço e quantidade).
3. **Consulta:** Permite pesquisar itens cadastrados por **Nome** ou por **Código**.
4. **Relatório:** Exibe uma lista detalhada com a posição e os dados de cada computador, além do total de itens no estoque.
5. **Inserir em uma posição:** Permite incluir um novo computador em um índice específico da lista (`std::vector::insert`).
6. **Remover computador:** Deleta um produto do estoque com base em seu código (`std::vector::erase`).

---

## ⚙️ Como Compilar e Executar

### Pré-requisitos
Certifique-se de ter um compilador C++ (como o `g++`) instalado no seu computador.

### Passos para Execução

1. **Clone o repositório:**
   ```bash
   git clone https://github.com/gustavomend3ss/trabalho-cpp.git
   cd trabalho-cpp
   ```

2. **Compilar o arquivo:**
   No terminal ou prompt de comando, execute o comando do `g++`:
   ```bash
   g++ computador.cpp -o computador
   ```

3. **Executar o programa:**
   - **No Linux / macOS:**
     ```bash
     ./computador
     ```
   - **No Windows (PowerShell / CMD):**
     ```cmd
     computador.exe
     ```

---

## 👨‍🎓 Integrantes da Equipe

- **Dhones Castor**
- **Gabriel Curcio**
- **Gustavo Mendes Lima**
- **João Paulo Dias**

---

## 🏫 Informações Acadêmicas

- **Instituição:** Faculdade Independente do Nordeste (FAINOR)
- **Disciplina:** Estrutura de Dados
- **Professor:** Marcelo Almeida
- **Turma:** 6º Semestre
