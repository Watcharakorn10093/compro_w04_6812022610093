#include <stdio.h>

void countCall() {
    static int counter = 0;  // ตัวแปร static จะเก็บค่าเดิมข้ามการเรียกฟังก์ชัน
    counter++;
    printf("Call Function: Counter = %d\n", counter);
}

int main() {
    printf("Starting function calls...\n");
    countCall();  // ครั้งที่ 1, counter = 1
    printf("After first call:\n");
    countCall();  // ครั้งที่ 2, counter = 2 (เก็บค่าต่อเนื่อง)
    return 0;
}

