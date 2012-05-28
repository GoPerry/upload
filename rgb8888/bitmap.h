#include <stdio.h>
#include <stdlib.h>

typedef short WORD;
typedef int DWORD;
typedef int LONG;
typedef char BYTE;

//BITMAP  File Header info
typedef struct
{
    WORD bfType;
    DWORD bfSize;
    WORD bfReserved1;
    WORD bfReserved2;
    DWORD bfOffBits;
} __attribute__((packed)) BITMAPFILEHEADER;

//Bitmap info header
typedef struct
{ // bmih
    DWORD biSize;
    LONG biWidth; //������Ϊ��λ��ͼ����
    LONG biHeight;// ������Ϊ��λ��ͼ�񳤶�
    WORD biPlanes;
    WORD biBitCount;// ÿ�����ص�λ��
    DWORD biCompression;
    DWORD biSizeImage;
    LONG biXPelsPerMeter;
    LONG biYPelsPerMeter;
    DWORD biClrUsed;
    DWORD biClrImportant;
} __attribute__((packed)) BITMAPINFOHEADER;

int raw2bmp(FILE *rawfile, FILE *bmpfile, LONG biWidth, LONG biHeight, WORD biBitCount);
