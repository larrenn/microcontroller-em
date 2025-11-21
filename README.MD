# Эмулятор микроконтроллера с сетевым подключением

## Описание проекта
Эмулятор виртуального микроконтроллера STM32F407VG с сетевым интерфейсом, реализованный на базе фреймворка Renode.

## Возможности
- Эмуляция микроконтроллера STM32F407VG
- Сетевой интерфейс Ethernet
- Подключение по Telnet на порт 1234
- Реализация пользовательской прошивки
- Интеграция с VS Code

## Требования
- Windows 11
- Visual Studio Code
- Renode 1.14+
- Клиент Telnet

## Установка и запуск

### 1. 
```bash

cd microcontroller-emulator 

2. Запуск через VS Code
Откройте проект в VS Code

Нажмите Ctrl+Shift+P

Введите "Задачи: запустить задачу"

Выберите "Запустить эмулятор Renode"

3. Запуск через командную строку
bash
renode scripts/microcontroller.resc
Проверка сетевого подключения
Локальное подключение:
bash
telnet localhost 1234
Подключение с другого компьютера:
bash
telnet IP_АДРЕС 1234
Структура проекта
text
microcontroller-emulator/
├── firmware/           # Исходный код прошивки
│   └── src/
│       └── main.c
├── scripts/           # Скрипты для Renode
│   └── microcontroller.resc
├── .vscode/          # Конфигурация VS Code
│   ├── tasks.json
│   └── launch.json
├── docs/             # Документация
└── README.md
Автор
[Fedotov Artem]

Лицензия
MIT License



### 6.2. Создаем .gitignore
- **Действие:** Создайте файл: `.gitignore`
Временные файлы
*.tmp
*.temp
*.log

Файлы сборки
build/
bin/
obj/

Файлы ОС
.DS_Store
Thumbs.db

Файлы IDE
.vs/
*.swp
*.swo

Файлы Renode
/peripherals/
/cache/

Шаг 7: Запуск и тестирование
7.1. Запуск эмулятора
Действие: В VS Code нажмите Ctrl+Shift+P

Действие: Введите: задачи: запустить задачу

Действие: Выберите: Запустить эмулятор Renode

7.2. Проверка работы
Действие: Откройте командную строку Windows

Действие: Введите: telnet localhost 1234

Действие: Убедитесь, что подключение установлено

Шаг 8: Загрузка на GitHub
8.1. Инициализация Git репозитория
Действие: В терминале VS Code введите:

bash
git init
git add .
git commit -m "Initial commit: Emulator with network support"
