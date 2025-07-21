#include <stdio.h>

int main() {
    char nameInitial = 'K';       // ตัวอักษรตัวแรกของชื่อ ใช้ char และใส่ ' ' รอบตัวอักษร
    int age = 20;                 // อายุ เป็นจำนวนเต็ม ใช้ int
    float weight = 48.5;          // น้ำหนัก เป็นเลขทศนิยม 1 ตำแหน่ง ใช้ float
    char gender[] = "Female";     // เพศ ใช้ string (char array) เพราะเก็บคำว่า Male หรือ Female

    // แสดงผล
    printf("nameInitial = %c\n", nameInitial);
    printf("age = %d\n", age);
    printf("weight = %.1f\n", weight);
    printf("gender = %s\n", gender);

    return 0;
}
