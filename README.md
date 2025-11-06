# 🛳️ Desafio Batalha Naval – Nível Aventureiro

Este repositório contém a implementação do **Nível Aventureiro** do desafio "Batalha Naval" proposto pela equipe de ensino MateCheck.

O objetivo deste nível é trabalhar com **vetores bidimensionais (matrizes)**, posicionar **quatro navios** no tabuleiro e exibir toda a matriz com indicações das posições ocupadas.

---

## ✅ **Descrição do Nível Aventureiro**

No Nível Aventureiro, o sistema deve:

* Criar um **tabuleiro 10x10** usando uma matriz de inteiros.
* Posicionar **quatro navios**, sendo:

  * 1 navio horizontal
  * 1 navio vertical
  * 2 navios posicionados **na diagonal** (um descendente e um ascendente)
* Preencher o tabuleiro usando:

  * **0** para posições vazias
  * **3** para posições ocupadas por navios
* Exibir **toda a matriz completa** utilizando `printf`.

---

## 🧩 **Como o Tabuleiro Funciona**

Cada navio é representado pelo número **3**, enquanto posições vazias têm o valor **0**.

Exemplo de saída (parcial):

```
0 0 0 0 0 0 0 0 3 0
0 0 0 0 0 0 0 0 3 0
0 0 0 3 3 3 3 0 3 0
...
```

---

## 🧪 **Como executar o programa**

### 🖥️ Compilador online:

🔗 [https://www.onlinegdb.com/online_c_compiler](https://www.onlinegdb.com/online_c_compiler)

1. Copie o conteúdo do arquivo `Batalha_Naval.c`
2. Cole no editor
3. Clique em **Run**

### 🖥️ Localmente com GCC

```
gcc -o batalha Batalha_Naval.c
./batalha
```

---

## 📂 Estrutura do Repositório

```
📁 batalha-naval
 ├── Batalha_Naval.c   # Código-fonte do Nível Aventureiro
 └── README.md         # Documentação do projeto
```

---

## ✨ Melhorias Futuras

* Implementar modo  Mestre
* Criar versão interativa com entrada do usuário

---

## 👩‍💻 Autora

Projeto desenvolvido por **Dila Luiz Oliveira**

---

Se quiser adicionar prints, exemplos ou diagramas, posso incluir no README também!

