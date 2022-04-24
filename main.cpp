#include <iostream>

using namespace std;

int main()
{
   int valor;
   bool executa = true;
   int bin[8];

    while(executa){
        valor = 0;
        cout << "Calculadora de Binario" << endl;
        cout << "Qual conversão voce deseja" << endl;
        cout << "1 - Binario para Decimal" << endl;
        cout << "2 - Decimal para Binario" << endl;
        cout << "0 para sair" << endl;
        cin >> valor;
        cout << " = valor que digitei" << endl;
        if(valor == 0){
            cout << "saindo do programa";
            executa = false;
            exit;
        }else{
            if(valor == 1){
                cout << "digite o valor em Binario" << endl;
                cin >> valor;
                cout << "O valor em Binario e:  " << valor << endl;

            }else{
                if(valor == 2){
                    int Decimal;
                    cout << "digite um valor em Decimal" << endl;
                    cin >> valor;
                    cout << "O valor em Decimal e:  " << valor << endl;
                    for(int i = 7; i >= 0; i--){
                        if(Decimal % 2 == 0){
                            bin[i] = 0;
                        }else{
                            bin[i] = 1;
                        }
                        Decimal = Decimal / 2;

                    }
                    for(int i = 0; i < 8; i++){
                        cout << bin[i];

                    }
                    cout << endl;


                }else{
                    cout << "Opcao inexistente" << endl;

                }
            }
        }
    }




    return 0;
}




