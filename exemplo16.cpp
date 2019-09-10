// Example program
#include <iostream>
#include <string>
#include <cstring>

using namespace std;

void transmite(const unsigned char *bytes, int tamanho)
{
    printf("Transmitindo...\n");
    for(int i = 0; i < tamanho; i++) {
        printf("%.2x ", bytes[i]);   
    }
    printf("\nConcluido!");
}

struct Pacote {
    unsigned char contador;
    int a;
    float b;
} __attribute__((packed));

int main()
{
    Pacote pkt = {
        0, 0x12345678, 3.1415
    };
    
    unsigned char *ptr;
    
    ptr = (unsigned char *)&pkt;
    
    transmite(ptr, sizeof(pkt));
    
    const unsigned char pacote[] = {
        0x00, 0x78, 0x56, 0x34,
        0x12, 0x56, 0x0e, 0x49,
        0x40
    };
    
    Pacote *recv_pkt;
    
    recv_pkt = (Pacote *)pacote;
    
    cout << (int)recv_pkt->contador << endl;
    cout << recv_pkt->a << endl;
    cout << recv_pkt->b << endl;
    
    return 0;
}
