#ifndef  RESOURCE_H
#define RESOURCE_H

#define ENG_LANG
//#define RUS_LANG

#ifdef ENG_LANG

#define STR_ABOUT "Sniffer. Built May 9, 2017\n"
#define STR_CANT_CREATE_SOCKET "Can't create raw socket. This program must be run under administrator!"
#define STR_SOCKET "Socket"
#define STR_HOSTNAME "Hostname"
#define STR_HOST_IP "Host IP"
#define STR_PROM_MODE "Promiscuous mode"
#define STR_CONSOLE_OUTPUT "Console output (y/n): "
#define STR_RESOLUTION "Resolution (delay in ms): "
#define STR_WATCH_HOST "Watch host: "
#define STR_NET_SERVER_STARTED "Net server on port 2000 started. Use telnet to connect.\n\n"
#define STR_END_OF_PROGRAM "Thank you for using this program.\nLog file saved.\nIP-datagrams counted:"


#endif
#else

#ifdef RUS_LANG 
//#define STR_ABOUT "Sniffer. Built May 9, 2017\n"
//#define STR_CANT_CREATE_SOCKET "Невозможно создать пустой сокет. Необходимо запустить программу от имени АДМИНИСТРАТОРА!"
//#define STR_SOCKET "Сокет"
//#define STR_HOSTNAME "Хост"
//#define STR_HOST_IP "IP-адрес хоста"
//#define STR_PROM_MODE "Неразборчивый режим"
//#define STR_CONSOLE_OUTPUT "Вывод в консоль (y/n): "
//#define STR_RESOLUTION "Пропускная способность (задержка в мс): "
//#define STR_WATCH_HOST "Просмотр хоста : "
//#define STR_NET_SERVER_STARTED "Net-сервер на порту 2000 развёрнут. Используй telnet для соединения.\n\n"
//#define STR_END_OF_PROGRAM "Спасибо за использование программы .\nЛог файл сохранён.\nIP-датаграмм всего:"

#endif

#endif