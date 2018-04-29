#include <iostream>
<<<<<<< HEAD

using namespace std;
struct instrucciones{
int fila, columna;
};
int main()
{
    int n;
    int FF;
    int FC;
    int contador = 0;
    cin >> n;
    cin >> FF >> FC;

    instrucciones mapa[n][n];
    bool visitados[n][n];

    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
        {
            cin >> mapa[i][j].fila >> mapa[i][j].columna;

        }
        for(int i = 0; i < n; i++)
=======
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
>>>>>>> 81e823d8bf7e784e4ad70aaf98518d70bf09a57c
        for(int j = 0; j < n; j++)
        {
            visitados[i][j] = false;
        }
<<<<<<< HEAD

          for(int i = 0; i < n; i++)
            for(int j = 0; j < n; j++)
          {
              int auxi = i;
              int auxj = j;

              while(!(mapa[i][j].fila == FF && mapa[i][j].columna == FC) && !(mapa[i][j].fila == -1 && mapa[i][j].columna == -1) && !(visitados[i][j] == true) && !(i == FF && j == FC))
              {
                visitados[i][j] = true;
                 int aux2i = i;
                    i = mapa[i][j].fila;
                    j = mapa[aux2i][j].columna;
              }
              if(mapa[i][j].fila == FF && mapa[i][j].columna == FC)
              {
                  contador++;
                  cout << i << " " << j << endl;
              }
               for(int l = 0; l < n; l++)
                  for(int t = 0; t < n; t++)
                    {

                       visitados[l][t] = false;
                    }

                    i = auxi;
                    j = auxj;

          }


     cout << contador;

=======
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
>>>>>>> 81e823d8bf7e784e4ad70aaf98518d70bf09a57c
    return 0;
}
