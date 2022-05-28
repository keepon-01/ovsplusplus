#include <iostream>
#include <libnet.h>
#include <pthread.h>
#include <time.h>
#define IP4_LEN 4
#define MAC_LEN 6
#define THREAD_NUM
using namespace std;
int count = 0;
// int set_rand_ip(unsigned char* buff)
// {
//     for(int i=0;i<IP4_LEN;i++)
//     {
//         buff[i]=(unsigned char)(rand()%256);
//     }
//     return 0;
// }
// int set_rand_mac(unsigned char* buff)
// {
//     for(int i=0;i<MAC_LEN;i++)
//     {
//         buff[i]=(unsigned char)(rand()%256);
//     }
//     return 0;
// }
int send_rand_packet()
{
    char *device_name = "s1-eth1";
    libnet_t *lib_net;
    libnet_ptag_t lib_t = 0;
    char err_buf[100];
    lib_net = libnet_init(LIBNET_LINK_ADV, device_name, err_buf);
    if (lib_net == NULL)
    {
        cout << "libnet init error" << endl;
        cout << err_buf << endl;
        exit(-1);
    }
    // unsigned char src_ip_buf[IP4_LEN];
    // unsigned char dst_ip_buf[IP4_LEN];
    // unsigned long long *src_mac = 0xDE883D6508D3;
    unsigned char src_mac[6] = {0xde, 0x88, 0x3d, 0x65, 0x08, 0xd3};
    unsigned char dst_mac[6] = {0x62, 0x3f, 0xd9, 0x82, 0x09, 0x01};
    // unsigned long long *dst_mac = 0xFE9578DFAFE3;
    //  unsigned char src_mac[6] = "DE883D6508D3";
    //  unsigned char dst_mac[6] = "FE9578DFAFE3";
    unsigned int src_ip = 0x0400000a;
    unsigned int dst_ip = 0x0100000a;
    // set_rand_ip(src_ip_buf);
    // set_rand_ip(dst_ip_buf);

    // src_ip = *(int *)src_ip_buf;
    // dst_ip = *(int *)dst_ip_buf;

    // set_rand_mac(dst_mac);
    // set_rand_mac(src_mac);

    unsigned char payload[6] = "aaaaa";
    int payload_len = sizeof(payload);
    lib_t = lib_t = libnet_build_udp( //构造udp数据包
        rand() % 65535,
        rand() % 65535,
        payload_len + 8, // udp header len+dns header len+dns payload
        012,
        payload, // including dns header and dns payload
        payload_len,
        lib_net,
        0);
    lib_t = libnet_build_ipv4( //构造ip数据包
        20 + 8 + payload_len,
        0,
        500,
        0,
        10,
        17,
        0,
        src_ip,
        dst_ip,
        NULL,
        0,
        lib_net,
        0);
    lib_t = libnet_build_ethernet( //构造以太网数据包
        dst_mac,
        src_mac,
        0x800, // 或者，ETHERTYPE_IP
        NULL,
        0,
        lib_net,
        0);
    int res = 0;
    res = libnet_write(lib_net); //发送数据包
    if (-1 == res)
    {
        perror("libnet_write");
        exit(-1);
    }

    libnet_destroy(lib_net); //销毁资源
}
void *send_packet_thread(void *args)
{
    while (1)
    {
        send_rand_packet();
        count++;
        if (count % 100 == 0)
        {
            cout << "100 packet constructed" << count << endl;
        }
    }
}
void run()
{
    pthread_t thread_pool[10];
    for (int i = 0; i < 10; i++)
    {
        int ret = pthread_create(&thread_pool[i], NULL, send_packet_thread, NULL);
        if (ret != 0)
        {
            cout << "pthread_create error: error_code=" << ret << endl;
            exit(-1);
        }
    }
}
int main()
{
    srand((unsigned)time(NULL));

    run();

    getchar();
    cout << "send rand packet success" << endl;
    return 0;
}
