#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

struct Archive
{
    unsigned char header_crc[2];
    unsigned char header_type;
    unsigned char header_flags[2];
    unsigned char header_size[2];
};
int main(){
    return 0;
}
