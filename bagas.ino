#include <Arduino.h>
#include "Motor.h"
#include "Segment.h"
#include "Button.h"

// constant variable pin
// deklarasi pin limit switch
const int limt1 = A0;
const int limt2 = A1;
const int limt3 = A2;
const int limt4 = A3;
const int limt5 = A4;
const int limt6 = A5;
const int limt7 = A6;

// deklarasi pin seven segment
const int segA = 8;
const int segB = 7;
const int segC = 2;
const int segD = 4;
const int segE = 3;
const int segF = 6;
const int segG = 5;
// deklarasi pin motor
const int motorA = 10;
const int motorB = 11;
// deklarasi pin push button
const int up = 9;
const int down = 12;

// var init
uint8_t sensor[] = {limt1, limt2, limt3, limt4, limt5, limt6, limt7};
// variable untuk menyimpan posisi sensor dan posisi tombol
// index = sensor , pos = tombol
int index, pos;

// create object

//buat object motor dari class Motor (dari Library Motor.h)
Motor motor = Motor(motorA, motorB); 
//buat object tombolUp dari class Button (dari Library Button.h)
Button tombolUp = Button(up);
//buat object tombolDown dari class Button (dari Library Button.h)
Button tombolDown = Button(down);
//buat object segment dari class Segment (dari Library Segment.h)
Segment segmen = Segment(segA, segB, segC, segD, segE, segF, segG);
void setup()
{
  // set mode tombol up menjadi falling (aktif ketika kondisi berubah dari 1 ke 0)
  tombolUp.changeMode(FALLING);
  // set mode tombol up menjadi falling (aktif ketika kondisi berubah dari 1 ke 0)
  tombolDown.changeMode(FALLING);
  // set mode seven segment menjadi aktif high
  segmen.mode(HIGH);
  for (int i = 0; i < 7; i++)
  {
    // set pin sensor menjadi input pullup
    pinMode(sensor[i], INPUT_PULLUP);
  }

  // inisialisai pos
  // baca posisi sensor ketika program dijalankan pertama kali
  for (int i = 0; i < 7; i++)
  {
    if (digitalRead(sensor[i]) == LOW)
    {
      // simpan posisi hasil pembacaan sensor ke variabel pos
      pos = i + 1;
      // keluar dari perulangan for ketika posisi sensor ditemukan
      break;
    }
  }
}

void loop()
{
  // baca posisi sensor
  for (int i = 0; i < 7; i++)
  {
    if (digitalRead(sensor[i]) == LOW)
    {
      // simpan posisi hasil pembacaan sensor ke variabel index
      index = i + 1;
      // tampilkan hasil pembacaan sensor ke seven segment
      segmen.setNumber(index);
      // keluar dari perulangan for ketika posisi sensor ditemukan
      break;
    }
  }
  // jika variabel index sama dengan index
  if (pos == index)
  {
    // jalankan perintah motor berhenti
    motor.stop();
  }
  // jika variabel pos lebih besar dari index
  if (pos > index)
  {
    // jalankan perintah motor maju
    motor.forward();
  }
  // jika variabel pos lebih kecil dari index
  if (pos < index)
  {
    // jalankan perintah motor mundur
    motor.reverse();
  }
  // jika tombol up ditekan
  if (tombolUp.getValue() == LOW)
  {
    // tambahkan isi variable pos dengan 1
    // kemudian jika pos lebih besar dari 7 maka pos akan di set menjadi 7
    if (++pos > 7)
    {
      pos = 7;
    }
  }
  // jika tombol down ditekan
  if (tombolDown.getValue() == LOW)
  {
    // kurangkan isi variable pos dengan 1
    // kemudian jika pos lebih kecil dari 1 maka pos akan di set menjadi 1
    if (--pos < 1)
    {
      pos = 1;
    }
  }
  //looping library tombol up dan tombol down
  tombolDown.loop();
  tombolUp.loop();
}
