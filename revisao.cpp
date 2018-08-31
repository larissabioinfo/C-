 Revisão C++ - 31/08
/*FAZER UMA FUNCAO QUE RETORNA QUALQUER VALOR
*******************************************************************************/

#include <iostream>
using namespace std;

int verifica_par(int valor){
   if((valor % 2) != 0) {   /*se o resto da divisao for diferente de 0*/
       return 1;
       }else{return 0;}
}

int main()
{
    int numero = 10;
    cout << verifica_par (numero);
}
---------------------------------------------------------------------------------------------

#include <iostream>

using namespace std;
void imprime (int valor){
cout << valor << endl;
}


int main()
{
    int controle = 0;
    int vetor [10] =  {1,2,3,4,5};
    while (controle < 10) {
    imprime (vetor [controle]);
    controle = controle + 1;
}
}


