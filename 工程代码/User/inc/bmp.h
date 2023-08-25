/**********************************************************************
版权所有：	喵呜创新科技，2017.
官		网：	http://www.miaowlabs.com
淘		宝：	https://shop275516297.taobao.com/
文 件 名: 	bmp.h
作    者:   喵呜实验室
版		本:   3.00
完成日期:   2017.03.01
概		要: 	

***********************************************************************/

#ifndef __BMP_H
#define __BMP_H


unsigned char LOGO[]=
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x80,0x80,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x80,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xE0,0xF0,0xFF,0x1F,0x07,0x0F,
0x0E,0x1C,0x78,0xF0,0xF0,0xF0,0xF8,0x3E,0x0F,0x0F,0x1F,0xF8,0xE8,0x80,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xC8,0xFF,0xFF,0xBF,0x86,
0x86,0x86,0x86,0x86,0x86,0x86,0xFF,0xFF,0xFF,0x86,0x86,0x86,0x86,0x87,
0xA7,0xFF,0xF8,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0x1F,0x1F,
0x7F,0x79,0x79,0x71,0xF1,0xF1,0xF1,0x01,0x01,0x01,0x01,0xF1,0x71,0x71,
0x31,0x1F,0x1F,0x0F,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFE,0x02,
0xFE,0x02,0xF2,0x97,0x92,0xF2,0x97,0x92,0xF2,0x02,0x00,0xFE,0x02,0xFE,
0x00,0x00,0x7E,0x43,0x52,0x52,0x5E,0xC0,0x00,0x00,0x0C,0x44,0x54,0xB4,
0x24,0x07,0xF6,0x04,0x04,0x04,0x0C,0x00,0x01,0x3D,0xA1,0xBF,0xF0,0xC8,
0x14,0xD3,0x93,0x16,0x98,0x48,0x10,0x00,0x0C,0x94,0xD4,0xD4,0xB4,0x95,
0x96,0xB4,0xD4,0x94,0x8C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x06,0x0E,
0x0E,0x0C,0x1C,0xB8,0xF8,0xF8,0xFC,0xFF,0xFF,0x00,0x00,0x00,0x00,0xFF,
0xFE,0xFC,0xF8,0xFE,0xFE,0x8E,0x07,0x03,0x01,0x00,0x00,0x00,0x00,0x00,
0x03,0x01,0x03,0x00,0x0F,0x04,0x04,0x07,0x04,0x04,0x0F,0x00,0x00,0x03,
0x01,0x03,0x00,0x01,0x01,0x09,0x09,0x09,0x08,0x07,0x00,0x00,0x09,0x09,
0x09,0x05,0x05,0x03,0x03,0x05,0x05,0x09,0x09,0x00,0x01,0x09,0x08,0x08,
0x0F,0x08,0x0B,0x08,0x09,0x0C,0x0B,0x08,0x08,0x00,0x08,0x0A,0x0A,0x0A,
0x0A,0x0F,0x0A,0x0A,0x0A,0x0B,0x0A,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x1E,0x1E,0x0E,0x0E,0x01,0x01,0x01,0x01,0xFF,0xFF,0x03,0x00,0x00,0x00,
0x00,0x01,0x7F,0x7F,0x7F,0x01,0x01,0x01,0x06,0x06,0x06,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x60,0xC0,0x00,0xC0,0x60,0x80,0x00,
0x80,0x60,0x60,0xC0,0x00,0xC0,0x60,0x80,0x00,0x80,0x60,0x60,0xC0,0x00,
0xC0,0x60,0x80,0x00,0x80,0x60,0x00,0x00,0x00,0x00,0xE0,0x40,0x20,0x20,
0xC0,0x20,0x20,0xE0,0x00,0x00,0xE4,0x00,0x00,0x00,0xA0,0xA0,0xE0,0x00,
0x00,0xC0,0x60,0x20,0x20,0x60,0xC0,0x60,0xC0,0x00,0xC0,0x60,0x80,0x00,
0x80,0x60,0x00,0xFC,0x00,0x00,0x00,0xA0,0xA0,0xE0,0x00,0x00,0xFC,0x40,
0x20,0x20,0xC0,0x00,0x00,0xC0,0xA0,0x20,0x20,0x00,0x00,0x00,0x00,0xC0,
0x60,0x20,0x20,0x20,0x00,0xC0,0x60,0x20,0x20,0x60,0xC0,0x00,0xE0,0x40,
0x20,0x20,0xC0,0x20,0x20,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x06,0x01,0x00,
0x03,0x04,0x03,0x00,0x00,0x03,0x06,0x01,0x00,0x03,0x04,0x03,0x00,0x00,
0x03,0x06,0x01,0x00,0x03,0x04,0x03,0x00,0x00,0x04,0x00,0x00,0x07,0x00,
0x00,0x00,0x07,0x00,0x00,0x07,0x00,0x00,0x07,0x00,0x00,0x07,0x04,0x04,
0x07,0x00,0x00,0x03,0x06,0x04,0x04,0x06,0x03,0x00,0x03,0x06,0x01,0x00,
0x03,0x04,0x03,0x00,0x00,0x07,0x00,0x00,0x07,0x04,0x04,0x07,0x00,0x00,
0x07,0x04,0x04,0x04,0x03,0x00,0x00,0x04,0x04,0x05,0x03,0x00,0x04,0x00,
0x00,0x03,0x06,0x04,0x04,0x04,0x00,0x03,0x06,0x04,0x04,0x06,0x03,0x00,
0x07,0x00,0x00,0x00,0x07,0x00,0x00,0x07,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00
};


#endif


