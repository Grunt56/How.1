#include <iostream>
#include <locale.h>
#include <math.h>
#include <stdlib.h>

using namespace std;

int main()
{
   int contador = 1;
   int decimal;
   int binario [11];

   do{
        int opcao;
        setlocale (LC_ALL, "Portuguese");
        cout << "Calculadora Binario" << endl;
        cout << "Qual conversão voce deseja" << endl;
        cout << "  " << endl;
        cout << "1 - Binario para Decimal" << endl;
        cout << "2 - Decimal para Binario" << endl;
        cout << "0 - para sair" << endl;
        cout << "   " << endl;
        cin >> opcao;


        if(opcao == 0){
            cout << "saindo do programa";
            contador = opcao;

        }else{
            if(opcao == 1){
                int binario;
                int decimal = 0;
                cout << "digite o valor em Binario" << endl;
                cin >> binario;
                cout << "O valor em Binario e:  " << binario << endl;
                int i = 0;
                for(int i = 0; i < 11 ; i++){
                    decimal = decimal + pow(2, i)*(binario %10);
                    binario = binario / 10;

                }cout << decimal << endl;

            }else{
                if(opcao == 2){
                    cout << "digite um valor em Decimal" << endl;
                    cin >> decimal;
                    cout << "O valor em Decimal e:  " << decimal << endl;
                    for(int cont = 10 ; cont >= 0; cont--){
                        if(decimal % 2 == 0) {
                           binario[cont] = 0;
                        }else{
                            binario[cont] = 1;
                        }
                        decimal = decimal / 2;

                    }
                    for(int i = 0; i < 11; i++){
                        cout << binario[i];

                    }



                }else{
                    cout << "Opcao inexistente" << endl;

                }
            }
        }

    }while (contador > 0);




    return 0;
}
