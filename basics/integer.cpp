#include<iostream>

using namespace std;
int main()
{
    printf("Size of this data type is %ld bits\n",sizeof(short int) * 8);
    printf("Size of this data type is %ld bits\n",sizeof(int) * 8);
    printf("Size of this data type is %ld bits\n",sizeof(long int) * 8);
    printf("Size of this data type is %ld bits\n",sizeof(long long int) * 8);

    printf("Size of this data type is %ld bits\n",sizeof(uint) * 8);
    printf("Size of this data type is %ld bits\n",sizeof(uint16_t) * 8);
    printf("Size of this data type is %ld bits\n",sizeof(uint32_t) * 8);
    printf("Size of this data type is %ld bits\n",sizeof(uint64_t) * 8);


    printf("Size of this data type is %ld bits\n",sizeof(uint_fast8_t) * 8);
    printf("Size of this data type is %ld bits\n",sizeof(uint_fast16_t) * 8);
    printf("Size of this data type is %ld bits\n",sizeof(uint_fast32_t )* 8);
    printf("Size of this data type is %ld bits\n",sizeof(uint_fast64_t) * 8);
    return 0;
} // namespace std
