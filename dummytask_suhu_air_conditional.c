#include <stdio.h>
int main(){
    int Temperatur;
    /*asumsikan berada pada kondisi 1 atm*/

    printf("suhu pada kondisi 1 atmosfir \n");
    printf("ketikkan nilai suhu (Celcius): ");
    scanf("%d", &Temperatur);

    if(Temperatur <= 0){
        printf("air berada dalam keadaan beku \n");
    }

    else if (Temperatur > 0 && Temperatur < 100){
        printf("air berada dalam keadaan padat (cair)");
    }

    else{
        printf("air berada dalam kondisi uap");
    }
return 0;
}