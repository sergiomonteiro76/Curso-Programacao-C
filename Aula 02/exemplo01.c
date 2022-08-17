#include <stdio.h>
void imprimir_mensagem(char* msg);
int main() {
    imprimir_mensagem("Olah, mundo!");
    return 0;
}

void imprimir_mensagem(char* msg){
    printf("%s", msg);
    printf("\n");
}

