#include <stdio.h>           // Header file เพื่อใช้ printf()

int main() {                 // main() คือฟังก์ชันหลักของโปรแกรม
    int a = 10;              // ประกาศตัวแปร a เป็นชนิด int และกำหนดค่าเริ่มต้นเป็น 10
    printf("a = %d", a);     // แสดงค่าตัวแปร a โดยใช้ format specifier %d สำหรับ int
    return 0;                // ส่งค่ากลับ 0 เพื่อบอกว่าโปรแกรมทำงานสำเร็จ
}
