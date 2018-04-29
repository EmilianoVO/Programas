#include <iostream>
#include <queue>
using namespace std;
struct siguientes{
char actual;
int fila;
int col;
};
int main()
{

    int n;
    cin >> n;
    siguientes matriz[n][n];
    bool visitados[n][n];
    queue <siguientes> arbol;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
        {


            cin >> matriz[i][j].actual;
            matriz[i][j].fila = i;
            matriz[i][j].col = j;
        }
 for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
        {
            visitados[i][j] = false;
        }
    arbol.push(matriz[0][0]);

    while(!arbol.empty())
    {
        siguientes nodoAct = arbol.front();



        cout << arbol.front().actual << " ";

        visitados[nodoAct.fila][nodoAct.col] = true;
        arbol.pop();
         if((visitados[nodoAct.fila + 1][nodoAct.col] == true  && visitados[nodoAct.fila][nodoAct.col + 1] == true) || (nodoAct.fila == n-1 && nodoAct.col == n-1))
        {

            cout << "no tiene conexiones";

        }
        if(visitados[nodoAct.fila + 1][nodoAct.col] == false && nodoAct.fila < n-1)
        {
            arbol.push(matriz[nodoAct.fila + 1][nodoAct.col]);
            cout << "conecta con " << matriz[nodoAct.fila + 1][nodoAct.col].actual << " ";
             visitados[nodoAct.fila + 1][nodoAct.col] = true;
        }

         else if(visitados[nodoAct.fila][nodoAct.col + 1] == false && nodoAct.col < n-1)
        {
            arbol.push(matriz[nodoAct.fila][nodoAct.col + 1]);
             cout << "conecta con " << matriz[nodoAct.fila][nodoAct.col + 1].actual << " ";
             visitados[nodoAct.fila][nodoAct.col + 1] = true;
        }
        if(visitados[nodoAct.fila][nodoAct.col + 1] == false && nodoAct.col < n-1)
        {
            arbol.push(matriz[nodoAct.fila][nodoAct.col + 1]);
             cout << "y con " << matriz[nodoAct.fila][nodoAct.col + 1].actual << " ";
             visitados[nodoAct.fila][nodoAct.col + 1] = true;
        }


          cout << endl;
    }
    return 0;
}
