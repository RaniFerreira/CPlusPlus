#include <iostream>
#include <iomanip>

#define PESOA 2
#define PESOB 3
#define PESOC 4
#define PESOD 1

using namespace std;

int main()
{
    double N1, N2, N3, N4;
    double media = 0;
    double notaExame;
    double mediaExame;

    cin >> N1 >> N2 >> N3 >> N4;

    media = ((N1 * PESOA) + (N2 * PESOB) + (N3 * PESOC) + (N4 * PESOD)) / 10;

    cout << fixed << setprecision(1);

    if(media >= 7){

        cout << "Media: " << media << endl;
        cout << "Aluno aprovado." << endl;
    }
    else if(media < 5){

        cout << "Media: " << media << endl;
        cout << "Aluno reprovado." << endl;
    }
    else if(media >= 5 && media <= 6.9){

        cout << "Media: " << media << endl;
        cout << "Aluno em exame." << endl;

        cin >> notaExame;

        mediaExame = (media + notaExame) / 2;

        cout << "Nota do exame: " << notaExame << endl;

        if(mediaExame >= 5){
            cout << "Aluno aprovado." << endl;
        }
        else{
            cout << "Aluno reprovado." << endl;
        }

        cout << "Media final: " << mediaExame << endl;
    }

    return 0;
}