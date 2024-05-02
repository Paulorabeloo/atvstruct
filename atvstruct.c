#include <stdio.h>
#include <stdlib.h>

struct aluno
{
    float nota1;
    float nota2;
    float nota3;
    float nota4;
    char nome[20];
};

int main()
{
    struct aluno ALUNO;
    float media = 0;

    printf("\n Entre com os dados do aluno");
    printf("\n Nota1 ==>");
    scanf("%f", &ALUNO.nota1);
    printf("\n Nota2 ==>");
    scanf("%f", &ALUNO.nota2);
    printf("\n Nota3 ==>");
    scanf("%f", &ALUNO.nota3);
    printf("\n Nota4 ==>");
    scanf("%f", &ALUNO.nota4);

    while (getchar() != '\n');

    printf("\n Informe o nome do aluno: ");
    fgets(ALUNO.nome, 20, stdin);

    ALUNO.nome[strcspn(ALUNO.nome, "\n")] = '\0';

    media = (ALUNO.nota1 + ALUNO.nota2 + ALUNO.nota3 + ALUNO.nota4) / 4.0;

    printf("\n Nome do aluno: %s\n Media final: %.2f\n", ALUNO.nome, media);

    system("pause");
    return 0;
}
