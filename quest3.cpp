/*Ler as notas de diversos alunos (use while ou do while), informe quantos alunos deverão fazer 
VS. Em seguida leia uma nota para cada aluno que fez VS (use  for), informando o número de 
aprovados.*/

#include <iostream>
using namespace std;

int main()
{
    int totalAlunos;
    int alunosVS = 0; // Contador de alunos que fizeram VS

    cout << "Informe o número total de alunos: ";
    cin >> totalAlunos;

    int i = 1;
    while (i <= totalAlunos)
    {
        float nota;
        cout << "Informe a nota do aluno " << i << ": ";
        cin >> nota;

        if (nota < 6.0) // Se a nota for menor que 6, consideramos que o aluno fez VS
        {
            alunosVS++;
        }

        i++; // Incrementa o contador
    }

    cout << "Total de alunos que fizeram VS: " << alunosVS << endl;

    return 0;
}