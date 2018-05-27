#include <stdio.h>

// --------- Les prototypes ---------
double addition(double n1, double n2);
double soustraction(double n1, double n2);
double multiplication(double n1, double n2);
double division(double n1, double n2);
double (*displayWindow(void))(double, double);
double (*lstFunction[4])(double, double) = {addition, soustraction, multiplication, division};

// --------- Le main ---------
int main(void)
{
    // --------- Le tableau de pointeurs sur fonctions ---------    
    double (*fonctionDeCalcul)(double, double);
    double n1;
    double n2;

    fonctionDeCalcul = displayWindow();
    printf("Saisir les operandes :");
    scanf("%lf", &n1);
    scanf("%lf", &n2);
    printf("Le resultat du calcul est: %f\n", (*fonctionDeCalcul)(n1, n2));
    return (0);
}

// --------- Fonction d'affichage ---------
double (*displayWindow(void))(double, double)
{
    int choix;

    do {
        printf("-------------------------------MENU--------------------------------------\n");
        printf("Veuillez choisir une operation (en choisissant un nombre entre 1 et 4) :\n");
        printf("1 pour addition\n");
        printf("2 pour soustraction\n");
        printf("3 pour multiplication\n");
        printf("4 pour division\n");
        printf("Votre choix : ");
        scanf("%d",&choix);
    } while (choix < 1 || choix > 4);
    return (lstFunction[choix - 1]);
}

double addition(double n1, double n2)
{
    return (n1 + n2);
}

double soustraction(double n1, double n2)
{
    return (n1 - n2);
}

double multiplication(double n1, double n2)
{
    return (n1 * n2);
}

double division(double n1, double n2)
{
    return (n1 / n2);
}
