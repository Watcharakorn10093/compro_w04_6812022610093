#include <stdio.h>

const int GLOBAL_RATE = 10;  // ค่าคงที่ระดับ global

void calculate() {
    const int LOCAL_BONUS = 50;  // ค่าคงที่ระดับ local
    
    printf("GLOBAL_RATE = %d\n", GLOBAL_RATE);
    printf("LOCAL_BONUS = %d\n", LOCAL_BONUS);
}

int main() {
    calculate();
    printf("GLOBAL_RATE = %d\n", GLOBAL_RATE);

    // Try to print LOCAL_BONUS in main >> Discuss the result
    // printf("LOCAL_BONUS in main = %d\n", LOCAL_BONUS);  // // ไม่สามารถใช้งานได้ เพราะ LOCAL_BONUS เป็น local variable

    return 0;
}

//1.ค่าคงที่ GLOBAL_RATE และ LOCAL_BONUS ต่างกันอย่างไร?
//GLOBAL_RATE เป็นค่าคงที่ระดับ global สามารถใช้งานได้ทั่วทั้งโปรแกรม
//LOCAL_BONUS เป็นค่าคงที่ระดับ local ภายในฟังก์ชัน calculate() เท่านั้น ใช้งานนอกฟังก์ชันนี้ไม่ได้
//2.เกิดอะไรขึ้นถ้าเราเขียน GLOBAL_RATE = 20; หรือ LOCAL_BONUS = 80;?
//จะเกิดข้อผิดพลาดตอน compile เพราะ const คือค่าคงที่ ไม่สามารถเปลี่ยนค่าได้หลังจากประกาศแล้ว
//3.ทำไม LOCAL_BONUS ถึงไม่สามารถเรียกใช้ใน main() ได้?
//เพราะ LOCAL_BONUS เป็นตัวแปร local ที่ประกาศในฟังก์ชัน calculate() จึงสามารถใช้งานได้เฉพาะในฟังก์ชันนั้นเท่านั้น
//4.อธิบายและสรุปผลที่ได้จากการทดลอง
//ค่าคงที่ที่ประกาศด้วย const จะไม่สามารถเปลี่ยนแปลงค่าได้
//ตัวแปร const สามารถประกาศได้ทั้งระดับ global และ local ขึ้นกับขอบเขตการใช้งาน
//การเข้าถึงตัวแปร const นอกขอบเขตจะทำให้เกิดข้อผิดพลาด (compile-time error)
//ค่าคงที่จะช่วยให้โปรแกรมมีความปลอดภัย ไม่ถูกเปลี่ยนโดยไม่ได้ตั้งใจ