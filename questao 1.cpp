/* Ler a quantidade em estoque de um produto, o preço de compra e o preço de venda. Em 
seguida o programa deve solicitar o número de unidades vendidas informando:
a) se a venda é possível (produtos suficientes no estoque);
b) * o valor total da venda;
c) * o novo estoque;*/


#include <iostream>
using namespace std;

int main()
{
    int estoque, compra, venda, un_vendidas;

    cout << "Digite a quantidade em estoque: ";
    cin >> estoque;
    cout << "Digite quantas unidades serão compradas: ";
    cin >> compra;
    cout << "Digite o preço de venda: ";
    cin >> venda;
    cout << "Digite o número de unidades vendidas: ";
    cin >> un_vendidas;

    if (un_vendidas <= estoque) {
        cout << "Venda é possível." << endl;
        cout << "Valor total da venda: " << venda * un_vendidas << endl;
        cout << "Novo estoque: " << estoque - un_vendidas << endl;
    } else {
        cout << "Venda é impossível. Estoque insuficiente." << endl;
    }

    return 0;
}
