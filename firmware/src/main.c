#include <stdio.h>
#include <stdint.h>

// Эмуляция регистров микроконтроллера
#define UART_BASE 0x40013800
#define NETWORK_BASE 0x40028000

// Функция для отправки данных в UART
void uart_send(const char* data) {
    printf("[UART] %s\n", data);
}

// Функция для работы с сетью
void network_init() {
    printf("[NETWORK] Инициализация сетевого интерфейса...\n");
    printf("[NETWORK] MAC-адрес: 00:1B:FC:12:34:56\n");
    printf("[NETWORK] IP-адрес: 192.168.1.100\n");
    printf("[NETWORK] Порт: 1234\n");
}

void network_send_packet(const char* data) {
    printf("[NETWORK] Отправка пакета: %s\n", data);
}

int main() {
    printf("=========================================\n");
    printf("   ПРОШИВКА МИКРОКОНТРОЛЛЕРА v1.0\n");
    printf("=========================================\n");
    printf("Статус: ЗАПУЩЕН\n");
    printf("Платформа: STM32F407VG\n");
    printf("Тактовая частота: 168 MHz\n");
    printf("Память: 192KB RAM, 1MB Flash\n");
    printf("=========================================\n\n");
    
    // Инициализация периферии
    uart_send("Инициализация UART... ГОТОВО");
    network_init();
    
    uart_send("Все системы инициализированы");
    uart_send("Начинаю основной цикл работы");
    
    int counter = 0;
    while(1) {
        // Основной цикл работы
        printf("\n--- Цикл работы #%d ---\n", counter);
        
        // Имитация сетевой активности
        char packet[50];
        sprintf(packet, "Сетевой пакет #%d от виртуального МК", counter);
        network_send_packet(packet);
        
        // Имитация обработки данных
        printf("[CPU] Обработка данных...\n");
        printf("[MEM] Использование памяти: %d KB\n", (counter % 64) + 10);
        
        // Простая задержка
        for(volatile int i = 0; i < 2000000; i++);
        
        counter++;
        
        if(counter % 10 == 0) {
            printf("\n=== СТАТУС СИСТЕМЫ ===\n");
            printf("Работает: %d секунд\n", counter);
            printf("Отправлено пакетов: %d\n", counter);
            printf("Ошибок: 0\n");
            printf("=====================\n");
        }
    }
    
    return 0;
}