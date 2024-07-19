# Estudos de C++

Repositório dedicado a estudos e modelos de código para consulta utilizando a linguagem de programação C++

### Compilação base

Quando precisamos conpilar apenas um arquivo contendo um mais para gerar um executavel .exe ou .out:

    ```shell
        g++ meuarquivo_main.cpp -o nome_de_saida.exe 
    ```

Quando a compilação necessita de outros arquivos:

    ```shell
        g++ meuarquivo_main.cpp -o nome_de_saida.exe meu_outro_arquivo1.cpp meu_outro_arquivo2.cpp
    ```