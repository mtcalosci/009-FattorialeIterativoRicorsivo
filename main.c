#include <stdio.h>
#include <stdlib.h>

int fattorialeIterativo(int n);
int fattorialeRicorsivo(int n);

int main(int argc, char** argv) {
    int n;
    int fIterativo, fRicorsivo;
    
    printf("Inserisci un numero naturale non negativo: ");
    scanf("%d", &n);
    
    fIterativo = fattorialeIterativo(n);
    fRicorsivo = fattorialeRicorsivo(n);
    
    printf("%d! = %d (formulazione iterativa)\n", n, fIterativo);
    printf("%d! = %d (formulazione ricorsiva)\n", n, fRicorsivo);
    return (EXIT_SUCCESS);
}

int fattorialeIterativo(int n) {
    int Fat;
    
        for(Fat = 1; n>1; n--)
            
            {
                Fat = Fat * n;
            }
    
    return Fat;
}
int fattorialeRicorsivo(int n) {
    int Fat;
    
    if(n == 0)
        {
            return 1;
        }
        else
            {
                Fat = n * fattorialeRicorsivo(n-1);
            }  

}