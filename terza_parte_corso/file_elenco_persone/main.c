#include <stdio.h>
#include <string.h>

struct Persona {
    char nome[50]; 
    char cognome[50];
};

int main(int argc, char **argv)
{
	struct Persona persona;
    int select = -1;
    
    FILE *fp = fopen("elencoPersone", "wb");
    do{
        printf("Nome: ");
        fgets(persona.nome, 30, stdin);
        (persona.nome)[strlen(persona.nome)-1] = '\0';
        
        printf("Cognome: ");
        fgets(persona.cognome, 30, stdin);
        (persona.cognome)[strlen(persona.cognome)-1] = '\0';
        
        fwrite(&persona, sizeof(persona), 1, fp);
        
        printf("Vuoi aggiungere un\'altra persona?");
        printf("[1] => SI, [0] => NO\n");
        scanf("%d%*c", &select);
    }while(select != 0);
    
    fclose(fp);
    
    FILE *fp2 = fopen("elencoPersone", "rb");
    
    struct Persona persone[100];
    
    int numeroPersone = fread(&persone, sizeof(persone), 100, fp2);
    
    int i;
    
    for (i = 0; strlen(persone[i].nome) > 0; i++){
        printf("Nome: %s, Cognome: %s\n", persone[i].nome, persone[i].cognome);
    }
    fclose(fp2);
	return 0;
}
