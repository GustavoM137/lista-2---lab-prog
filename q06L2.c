#include <stdio.h>

int main() {
    int paulo = 0, renata = 0, branco = 0, nulo = 0, total, voto;
    float porcentagem_paulo, porcentagem_renata, porcentagem_branco, porcentagem_nulo;
    char confirmar;

    while (1) {
        puts("Digite em quem votar, 5-Paulo, 7-Renata e 0-Em branco:");
        scanf("%d", &voto);

        if (voto < 0) {
            break;
        }

        printf("Confirmar voto ");

        switch (voto) {
            case 5:
                puts("em Paulo? (S para confirmar)");
                scanf(" %c", &confirmar);

                if (confirmar == 'S' || confirmar == 's') {
                    paulo += 1;
                    puts("Voto confirmado.");
                }
                break;

            case 7:
                puts("em Renata? (S para confirmar)");
                scanf(" %c", &confirmar);

                if (confirmar == 'S' || confirmar == 's') {
                    renata += 1;
                    puts("Voto confirmado.");
                }
                break;

            case 0:
                puts("em branco? (S para confirmar)");
                scanf(" %c", &confirmar);

                if (confirmar == 'S' || confirmar == 's') {
                    branco += 1;
                    puts("Voto confirmado.");
                }
                break;

            default:
                puts("nulo? (S para confirmar)");
                scanf(" %c", &confirmar);

                if (confirmar == 'S' || confirmar == 's') {
                    nulo += 1;
                    puts("Voto confirmado.");
                }
        }
    }

    total = paulo + renata + branco + nulo;

    if (total == 0) {
        puts("Não houve votação.");
        return 0;
    }

    porcentagem_paulo = (float)paulo / total * 100;
    porcentagem_renata = (float)renata / total * 100;
    porcentagem_branco = (float)branco / total * 100;
    porcentagem_nulo = (float)nulo / total * 100;

    puts("Porcentagens de votos:");
    printf("Paulo: %.2f%% \nRenata: %.2f%% \n", porcentagem_paulo, porcentagem_renata);
    printf("Em branco: %.2f%% \nNulo: %.2f%% \n", porcentagem_branco, porcentagem_nulo);

    if (paulo > renata)
        puts("Candidato eleito: Paulo.");
    else if (paulo < renata)
        puts("Candidato eleito: Renata.");
    else
        puts("Empate de votos");

    return 0;
}