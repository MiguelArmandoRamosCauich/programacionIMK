#include <stdio.h>

int main()
{
    int password=1234;

    do
    {
        printf("Ingrese un password\n");
        scanf("%d",&password);
    }
    while(password==1234);
    printf("FIN DEL PROGRAMA\n");
    return (0);
}
