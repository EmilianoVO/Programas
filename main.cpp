#include <iostream>

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
        for(int j = 0; j < n; j++)
        {
            visitados[i][j] = false;
        }

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

    return 0;
}
