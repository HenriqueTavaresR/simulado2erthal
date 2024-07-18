/*Ler o resultado (número de gols de cada time) de N (definido em uma constante) partidas 
de futebol jogadas por um mesmo time contra diversos adversários, informando em seguida o 
número total de pontos ganhos e o total de gols pró (gols feitos - gols dos adversários).*/

#include <iostream>
using namespace std;
#define N 5

int main()
{
    int time1gol;
    int time2gol;

    cout << "quantos gol o time 1 fez";
    cin >> time1gol;

    cout << "quantos gols o time 2 fez";
    cin >> time2gol;

    if(time1gol>time2gol){
        cout << "time 1 teve vitoria" << endl;
    }else if (time1gol>time2gol){
        cout << "time 2 teve vitoria" << endl;
    }else{
    cout << "empate" << endl;
    
    }

    cout << "o time 2 teve " << time2gol << "gols" << endl;
    cout << "o time 1 teve " << time1gol << "gols" << endl;

    cout << "a diferença entre os gols dos times é" << time2gol-time1gol << endl;
    
    return 0;
}