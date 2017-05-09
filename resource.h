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
//#define STR_CANT_CREATE_SOCKET "���������� ������� ������ �����. ���������� ��������� ��������� �� ����� ��������������!"
//#define STR_SOCKET "�����"
//#define STR_HOSTNAME "����"
//#define STR_HOST_IP "IP-����� �����"
//#define STR_PROM_MODE "������������� �����"
//#define STR_CONSOLE_OUTPUT "����� � ������� (y/n): "
//#define STR_RESOLUTION "���������� ����������� (�������� � ��): "
//#define STR_WATCH_HOST "�������� ����� : "
//#define STR_NET_SERVER_STARTED "Net-������ �� ����� 2000 ��������. ��������� telnet ��� ����������.\n\n"
//#define STR_END_OF_PROGRAM "������� �� ������������� ��������� .\n��� ���� �������.\nIP-��������� �����:"

#endif

#endif