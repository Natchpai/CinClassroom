#include <stdio.h>
#include <stdlib.h>

void print_windows() {
    printf("========= EE Formular ========== \n");
    printf("    1. U = IR  \n");
    printf("    2. P = IIR  \n");
    printf("    3. RT = R1 + R2 + R3  \n");
    printf("    4. Exit  \n");
    printf("================================ \n");
}

void getInput(double *select, char *txt) {
    printf("%s", txt);
    scanf("%lf", select);
}

void voltage_cal() {
    double I, R;
    printf("===== Voltage Cal ===== \n");
    printf("    U = IR  \n");
    printf("Please enter the values \n");
    getInput(&I, "    I(A) = ");
    getInput(&R, "    R(Ohm) = ");
    printf("======================= \n");
    printf("    U = %.2fx%.2f V. \n", I, R);
    printf("    U = %.2f V. \n", I * R);
    printf("======================= \n");
}

void power_cal() {
    double I, R;
    printf("===== Power Cal ===== \n");
    printf("    P = IIR  \n");
    printf("Please enter the values \n");
    getInput(&I, "    I(A) = ");
    getInput(&R, "    R(Ohm) = ");
    printf("======================= \n");
    printf("    P = %.2fx%.2fx%.2f W\n", I, I, R);
    printf("    P = %.2f W \n", I * I * R);
    printf("======================= \n");
}

void seriesResistor_cal() {
    double R1, R2, R3;
    printf("===== Series Resistor ===== \n");
    printf("    RT = R1 + R2 + R3  \n");
    printf("Please enter the values \n");
    getInput(&R1, "    R1(Ohm) = ");
    getInput(&R2, "    R2(Ohm) = ");
    getInput(&R3, "    R3(Ohm) = ");
    printf("=========================== \n");
    printf("    RT = %.2f + %.2f + %.2f Ohm. \n", R1, R2, R3);
    printf("    RT = %.2f Ohm.\n", R1 + R2 + R3);
    printf("=========================== \n");


}

void switchOption(int *exit) {
    int select;
    printf("Please Select (1-4) : ");
    scanf("%d", &select);
    switch (select)
    {
    case 1:
        system("clear");
        voltage_cal();
        break;
    case 2:
        system("clear");
        power_cal();
        break;
    case 3:
        system("clear");
        seriesResistor_cal();
        break;
    case 4:
        *exit = 1;
        break;
    default:
        printf("---- Ooops! Wrong Selection ---- \n");
        break;
    }
}


int main() {
    int con = 1;
    int exit = 0;
    do {
        print_windows();
        switchOption(&exit);
        if(exit == 1) {
            printf("---------- Exit Program ---------- \n");
            return 0;
        } else {
            printf(" Do you want to continum (1) : ");
            scanf(" %d", &con);
            system("clear");
        }
    } while(con == 1);
    printf("---------- Exit Program ---------- \n");
}