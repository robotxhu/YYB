
#include <avr/pgmspace.h>

const char   logo1[] PROGMEM = { 
0xFF,0xFF,0xFF,0xFF,0xFF,0xEF,0xFF,0xFF,0xFF,0xEF,0xFF,0xFF,0xFF,0xEF,0xF7,0xFF,
0xFF,0xEF,0xF7,0xFF,0xFF,0xEF,0xEF,0xFF,0xFD,0xEF,0xEF,0xFF,0xFD,0xEF,0xDF,0xFF,
0xFD,0xEF,0x9F,0xFF,0xFD,0xEF,0xBF,0xFF,0xFD,0xEF,0x7F,0xFF,0xFD,0xEE,0x7F,0xFF,
0xFD,0xEE,0xFF,0xFF,0xFD,0xEC,0xF7,0xFF,0x80,0x08,0xE3,0xFF,0xDD,0xEA,0x07,0xFF,
0xFD,0xE6,0x37,0xEF,0xFD,0xE6,0xF7,0xEF,0xF9,0xCE,0xF7,0xE7,0xF9,0x8E,0xF7,0xE3,
0xFC,0x2E,0xF7,0xF3,0xFC,0x6E,0xF7,0xF3,0xF8,0xEE,0xF7,0xE7,0xE3,0xEE,0xF6,0x07,
0xE7,0xEE,0xE0,0x3F,0xF7,0xEC,0xF3,0xFF,0xFF,0xEC,0xFF,0xFF,0xFF,0xEE,0xFF,0xFF,
0xFF,0xCF,0xFF,0xFF,0xFF,0xEF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,/*"考",0*/
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xDF,0xFF,0xF7,0xFF,0xBF,0xFF,0xF7,0xFE,0x7F,0xFF,
0xF7,0xF1,0xFF,0xFF,0xF7,0x80,0x00,0x3F,0xF0,0x10,0x00,0x3F,0xF0,0xF7,0xFD,0xFF,
0xF7,0xF7,0xFD,0xFF,0xF7,0xF7,0xFD,0xFF,0xF7,0xF7,0xFD,0xFB,0xE7,0xE0,0x00,0x77,
0xE7,0xF7,0xFF,0xE7,0xF7,0xFD,0xFF,0xCF,0xEF,0xFD,0xFF,0x9F,0xEF,0xFD,0xFF,0x3F,
0xEF,0xFD,0xF8,0x7F,0xE0,0x00,0x01,0xFF,0xE0,0x00,0x0F,0xFF,0xEF,0xFD,0xFF,0xFF,
0xEF,0xFD,0xFF,0xFF,0xEF,0xFD,0xFF,0xFF,0xEF,0xFD,0xFF,0xFF,0xEF,0xFD,0xFF,0xFF,
0xE0,0x00,0x00,0x07,0xE0,0x01,0xFF,0x07,0xEF,0xFD,0xFF,0xFF,0xCF,0xFD,0xFF,0xFF,
0xEF,0xF9,0xFF,0xFF,0xFF,0xFD,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,/*"研",1*/
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFB,0xFF,0x7F,0xFF,0xF7,0xFF,0x7F,0xFF,0xEF,
0xFF,0x7F,0xFF,0x9F,0xFF,0x7F,0xFE,0x3F,0xFF,0x7F,0xF0,0xFF,0x80,0x00,0x03,0xBF,
0xC0,0x00,0x3F,0xDF,0xDF,0x7F,0xFF,0xDF,0xFF,0x7F,0xFF,0xCF,0xFF,0x7F,0xFF,0xC7,
0xFF,0x7F,0xFF,0x8F,0xFF,0x7F,0xF0,0x1F,0xFE,0x00,0x00,0x7F,0xFF,0x3F,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,0x00,0x00,0x07,
0xFE,0xFF,0xFF,0xBF,0xFE,0xFF,0xFF,0xBF,0xFE,0xFF,0xFF,0xBF,0xFE,0xFF,0xFF,0xBF,
0xFE,0xFF,0xFF,0xBF,0xFE,0xFF,0xFF,0xBF,0xFE,0xFF,0xFF,0xBF,0xFC,0x00,0x00,0x07,
0xFE,0x00,0x00,0x07,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,/*"加",2*/
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xBF,0xFF,0xFF,0xFF,0xCF,0xFD,0xFF,
0xFF,0xE3,0xFD,0xE7,0xEF,0xE1,0xF8,0x03,0xE7,0xFF,0xF0,0x03,0xF1,0xFF,0x87,0xFF,
0xF9,0xFE,0x3F,0xFF,0xFF,0xF1,0xFF,0xFF,0xFF,0x8F,0xFF,0xFF,0xFE,0x7F,0xFF,0xFF,
0xFE,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x03,0xFF,0x7F,0xBF,0xDF,0xFF,0x7F,0xBF,0xDF,
0xFF,0x7F,0xBF,0xDF,0xFF,0x7F,0xBF,0xDF,0xFF,0x7F,0xBF,0xDF,0x80,0x00,0x00,0x1F,
0xC0,0x00,0x00,0x1F,0xDF,0x7F,0xBF,0xDF,0xFF,0x7F,0xBF,0xDF,0xFF,0x7F,0xBF,0xDF,
0xFF,0x7F,0xBF,0xDF,0xFF,0x7F,0xBF,0xDF,0xFE,0x00,0x00,0x03,0xFF,0x00,0x00,0x07,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,/*"油",3*/

};

const char logo2[] PROGMEM = {    /*L(0) O(1) V(2) E(3)*/
  0xFF, 0xFF, 0xFF, 0xFF, 0xFD, 0xFF, 0xFF, 0xEF, 0xFD, 0xFF, 0xFF, 0xEF, 0xFD, 0xFF, 0xFF, 0xCF,
  0xFC, 0x00, 0x00, 0x0F, 0xFC, 0x00, 0x00, 0x0F, 0xFC, 0x00, 0x00, 0x0F, 0xFD, 0xFF, 0xFF, 0xCF,
  0xFD, 0xFF, 0xFF, 0xEF, 0xFD, 0xFF, 0xFF, 0xEF, 0xFF, 0xFF, 0xFF, 0xEF, 0xFF, 0xFF, 0xFF, 0xEF,
  0xFF, 0xFF, 0xFF, 0xEF, 0xFF, 0xFF, 0xFF, 0xEF, 0xFF, 0xFF, 0xFF, 0xCF, 0xFF, 0xFF, 0xFF, 0xCF,
  0xFF, 0xFF, 0xFF, 0x8F, 0xFF, 0xFF, 0xFE, 0x0F, 0xFF, 0xFF, 0xFE, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, /*"L",0*/

  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0x1F, 0xFF, 0xFF, 0xE0, 0x03, 0xFF, 0xFF, 0x80, 0x00, 0xFF,
  0xFF, 0x00, 0x00, 0x7F, 0xFE, 0x03, 0xE0, 0x3F, 0xFE, 0x3F, 0xFF, 0x1F, 0xFC, 0xFF, 0xFF, 0x9F,
  0xFC, 0xFF, 0xFF, 0xCF, 0xFD, 0xFF, 0xFF, 0xEF, 0xFD, 0xFF, 0xFF, 0xEF, 0xFD, 0xFF, 0xFF, 0xEF,
  0xFD, 0xFF, 0xFF, 0xCF, 0xFC, 0xFF, 0xFF, 0xDF, 0xFE, 0x7F, 0xFF, 0x1F, 0xFE, 0x0F, 0xFC, 0x1F,
  0xFF, 0x00, 0x00, 0x3F, 0xFF, 0x80, 0x00, 0x7F, 0xFF, 0xE0, 0x01, 0xFF, 0xFF, 0xF8, 0x07, 0xFF, /*"O",1*/

  0xFF, 0xFF, 0xFF, 0xFF, 0xFD, 0xFF, 0xFF, 0xFF, 0xFD, 0xFF, 0xFF, 0xFF, 0xFC, 0x3F, 0xFF, 0xFF,
  0xFC, 0x07, 0xFF, 0xFF, 0xFC, 0x00, 0xFF, 0xFF, 0xFC, 0x00, 0x0F, 0xFF, 0xFD, 0xE0, 0x01, 0xFF,
  0xFF, 0xFE, 0x00, 0x3F, 0xFF, 0xFF, 0xC0, 0x0F, 0xFF, 0xFF, 0xF8, 0x0F, 0xFF, 0xFF, 0xE0, 0x3F,
  0xFF, 0xFF, 0x01, 0xFF, 0xFD, 0xF8, 0x0F, 0xFF, 0xFD, 0xC0, 0x7F, 0xFF, 0xFC, 0x03, 0xFF, 0xFF,
  0xFC, 0x1F, 0xFF, 0xFF, 0xFC, 0xFF, 0xFF, 0xFF, 0xFD, 0xFF, 0xFF, 0xFF, 0xFD, 0xFF, 0xFF, 0xFF, /*"V",2*/

  0xFF, 0xFF, 0xFF, 0xFF, 0xFD, 0xFF, 0xFF, 0xEF, 0xFD, 0xFF, 0xFF, 0xEF, 0xFC, 0x00, 0x00, 0x0F,
  0xFC, 0x00, 0x00, 0x0F, 0xFC, 0x00, 0x00, 0x0F, 0xFC, 0x00, 0x00, 0x0F, 0xFD, 0xFF, 0x7F, 0xEF,
  0xFD, 0xFF, 0x7F, 0xEF, 0xFD, 0xFF, 0x7F, 0xEF, 0xFD, 0xFF, 0x7F, 0xEF, 0xFD, 0xFF, 0x7F, 0xEF,
  0xFD, 0xFE, 0x7F, 0xEF, 0xFD, 0xF0, 0x0F, 0xEF, 0xFC, 0xF0, 0x0F, 0xCF, 0xFC, 0xFF, 0xFF, 0xCF,
  0xFC, 0x7F, 0xFF, 0x8F, 0xFC, 0x1F, 0xFE, 0x0F, 0xFF, 0x1F, 0xFE, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF /*"E",3*/
};

const char  logo3[] PROGMEM = { /*1(0) 2(1) 3(2) 4(3)*/

   0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, /*" ",6*/
  
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0xFF, 0xEF,
  0xFF, 0x7F, 0xFF, 0xEF, 0xFF, 0x7F, 0xFF, 0xEF, 0xFF, 0x7F, 0xFF, 0xCF, 0xFE, 0x00, 0x00, 0x0F,
  0xFC, 0x00, 0x00, 0x0F, 0xFC, 0x00, 0x00, 0x0F, 0xFF, 0xFF, 0xFF, 0xCF, 0xFF, 0xFF, 0xFF, 0xEF,
  0xFF, 0xFF, 0xFF, 0xEF, 0xFF, 0xFF, 0xFF, 0xEF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, /*"1",0*/

  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x87, 0xFF, 0x8F, 0xFF, 0x07, 0xFF, 0x0F,
  0xFE, 0x67, 0xFE, 0x4F, 0xFC, 0xFF, 0xFC, 0xCF, 0xFD, 0xFF, 0xF1, 0xCF, 0xFD, 0xFF, 0xE3, 0xCF,
  0xFD, 0xFF, 0xC7, 0xCF, 0xFD, 0xFF, 0x8F, 0xCF, 0xFC, 0xFF, 0x1F, 0xCF, 0xFC, 0x7C, 0x3F, 0xCF,
  0xFE, 0x00, 0x7F, 0x8F, 0xFE, 0x00, 0xFC, 0x0F, 0xFF, 0x83, 0xFC, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, /*"2",1*/

  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x0F, 0xFC, 0x3F, 0xFE, 0x0F, 0xFC, 0x1F,
  0xFE, 0x0F, 0xFC, 0x1F, 0xFC, 0xFF, 0xFF, 0xCF, 0xFD, 0xFF, 0x7F, 0xEF, 0xFD, 0xFF, 0x7F, 0xEF,
  0xFD, 0xFF, 0x7F, 0xEF, 0xFC, 0xFE, 0x3F, 0xEF, 0xFC, 0x7C, 0x3F, 0xCF, 0xFE, 0x00, 0x9F, 0x9F,
  0xFF, 0x01, 0x80, 0x1F, 0xFF, 0x83, 0xC0, 0x3F, 0xFF, 0xFF, 0xF0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, /*"3",2*/

  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF3, 0xFF, 0xFF, 0xFF, 0xC3, 0xFF, 0xFF, 0xFF, 0x8B, 0xFF,
  0xFF, 0xFE, 0x1B, 0xFF, 0xFF, 0xF8, 0x7B, 0xFF, 0xFF, 0xF1, 0xFB, 0xEF, 0xFF, 0xC7, 0xFB, 0xEF,
  0xFF, 0x0F, 0xFB, 0xEF, 0xFC, 0x00, 0x00, 0x0F, 0xFC, 0x00, 0x00, 0x0F, 0xFC, 0x00, 0x00, 0x0F,
  0xFF, 0xFF, 0xFB, 0xEF, 0xFF, 0xFF, 0xFB, 0xEF, 0xFF, 0xFF, 0xFB, 0xEF, 0xFF, 0xFF, 0xFF, 0xFF /*"4",3*/
};
