#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf ("====== NOM & PRENOM ======");
    char nom[9], prenom[9];
    int age;
    printf ("\nQuel est ton nom :\n");
    scanf ("%s",&nom);
    printf ("Quel est ton prenom :\n");
    scanf ("%s",&prenom);
    printf ("Donnez maintenant votre Age :\n");
    scanf ("%d",&age);
    printf ("\nvoici vos information :");
    printf ("\nNom : %s",nom);
    printf ("\nPrenom : %s",prenom);
    printf ("\nAge : %d",age);
    if (age < 18)
    {
        printf ("\nEt vous etes mineure");
    }
    else
    {
        printf ("\nEt vous etes Majeur");
    }
    return 0;
}
