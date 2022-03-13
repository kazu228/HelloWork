#include <stdio.h>
#include <string.h>
int main(void){
    // Your code here!
    FILE *fp;
    char car_maker[100];
    char car_name[100];
    char haikiryou[100];
    fp = fopen("/Users/lss-guest/Desktop/car.csv", "a");
    while (1) {
        scanf("%s", car_maker);
        if (strcmp(car_maker, "end") == 0) {
            break;
        }
        scanf("%s", car_name);
        scanf("%s", haikiryou);
        fprintf(fp, "%s,%s,%s\n", car_maker, car_name, haikiryou);
    }
    fclose(fp);
    return 0;
}
