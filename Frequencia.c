#include <stdio.h>
#include <stdlib.h>

/*int linhafrequente(int*a, b){


}*/

int main (void){
    int n, q, x, r, k, t;
    int cont1, cont2, cont3;

    scanf("%d", &n);
    scanf("%d", &q);

    int arr1[n][q];

    for(cont1=0; cont1<q; cont1++){
        scanf("%d", &t);

        if (t==1){
            scanf("%d", &x);
            scanf("%d", &r);

            for(cont2=0; cont2<=n; cont2++){
                if(x>n) printf("\n error1\n");
                arr1[x][cont2]=r;
            }
        }

        if (t==2){
            scanf("%d", &x);
            scanf("%d", &r);

            for(cont2=0; cont2<=n; cont2++){
                if(x>n) printf("\n error2\n");
                arr1[cont3][x]=r;
            }


        }

        if (t==3){
            scanf("%d", &x);
            for(cont2=0; cont2<=n; cont2++){
                if(x>n) printf("\n error3\n");



            }


        }

        if (t==4){
            scanf("%d", &k);


        }
    }
    return 0;
}
