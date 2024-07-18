/* Ler o número de gols de dois times em uma partida de futebol, em seguida informar o 
número de pontos que cada time ganhou (derrota 0 pontos; empate 1 ponto; vitória 3 pontos).*/

#include <iostream>
using namespace std;

int main()
{
    int time1gol;
    int time2gol;

    cout << "quantos gol o time 1 fez";
    cin >> time1gol;

    cout << "quantos gols o time 2 fez";
    cin >> time2gol;

    if(time1gol>time2gol){
        cout << "time 1 teve vitoria";
    }else if (time1gol>time2gol){
        cout << "time 2 teve vitoria";
    }else{
    cout << "empate";
    
    }
    
    return 0;
}
