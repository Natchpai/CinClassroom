#include <stdio.h>
#include <ctype.h>


void str_upper(char s[]) { // str_upper(address value)
    int i = 0;
    while(s[i] != '\0') {
        s[i] = toupper(s[i]);
        i++;
    }
}

// is equal

void str_upper2(char *s) { // str_upper2(address value) // s[] = *s
    int i = 0;
    while(s[i] != '\0') {
        s[i] = toupper(s[i]);
        i++;
    }
}

int strLength(char *s) {
    int i = 0;
    while(*s != '\0') {
        s++;
        i++;
    }
    return i;
}

int main() {
    char flower[] = "lily"; // can edit value but can't change address
    str_upper2(flower); // ผ่านค่า address ตัวแรกของ lily ใช้ str_upper2() หรือ str_upper()
    printf("%s \n", flower);

    printf("%d \n", strLength(flower));
   // The name of pointer is an address
    char *flower2 = "jasmine"; // is constant , can't edit value but can change address

    printf("%d \n", strLength(flower2));
    printf("%s (%p)\n", flower2, flower2);
    // The name of pointer is an address

    flower2 = "Rose";
    //? flower2 changes the address, from address is point to "illy" to address is point to "Rose"

    printf("%s (%p)\n", flower2, flower2);


}