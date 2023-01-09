/*
  スイッチを話した時にキーを発行する(WIN + L)
  スイッチを押した時にキーを発行する(SHIFT)

  ツール -> ボード -> SparkFun AVR Boards -> SparkFun ProMicro
  ツール -> プロセッサ -> ATmega32U4(5V, 16MHz)
*/
#include <Arduino.h>
#include <Keyboard.h>
#include "keycodes.h"

#define PIN_SWITCH 2
#define PIN_LEDRX 17
#define PIN_LEDTX 30
#define KEYCODE_UP KC_LEFT_SHIFT
#define KEYCODE_DOWN KC_L
#define KEYCODE_MOD KC_LEFT_GUI

typedef enum {
  SS_IDLE
  , SS_CHAT
  , SS_GUARD
} SWITCH_STATE;

SWITCH_STATE state = SS_IDLE;
typedef void (*FUNC_STATE)();
unsigned long millis_start;
int switch_bit; // 確定したキー

#define switch_bit_in() digitalRead(PIN_SWITCH)

//***************************************************
// led
//***************************************************
void led(bool on) {
  digitalWrite(PIN_LEDRX, on ? HIGH : LOW);
  digitalWrite(PIN_LEDTX, !on ? HIGH : LOW);
}

//***************************************************
// stt_ss_idle
//***************************************************
void stt_ss_idle() {
  if (switch_bit !=  switch_bit_in()) {
    millis_start = millis();
    state = SS_CHAT;
  }
}

//***************************************************
// stt_ss_chat
//***************************************************
void stt_ss_chat() {
  int bit = switch_bit_in();

  if (switch_bit == bit) {
    state = SS_IDLE;
  }

  if ((millis() - millis_start) > 50) {
    millis_start = millis();
    switch_bit = bit;//キー確定

    if (switch_bit == LOW) {
      //スイッチ押した時
      Keyboard.press(KEYCODE_UP);
      Keyboard.release(KEYCODE_UP);
    } else {
      //スイッチ離した時
      Keyboard.press(KEYCODE_MOD);
      Keyboard.press(KEYCODE_DOWN);
      Keyboard.release(KEYCODE_DOWN);
      Keyboard.release(KEYCODE_MOD);
    }
    state = SS_GUARD;
    //    state = SS_CHANGED;
  }
}

//***************************************************
// stt_ss_guard
//***************************************************
void stt_ss_guard() {
  if ((millis() - millis_start) > 1000) {
    state = SS_IDLE;
  }
}

FUNC_STATE func_state[] = {
  stt_ss_idle
  , stt_ss_chat
  , stt_ss_guard
};

//=====================================================
// setup
//=====================================================
void setup() {
  Keyboard.begin();
  pinMode(PIN_LEDRX, OUTPUT);
  pinMode(PIN_LEDTX, OUTPUT);
  pinMode(PIN_SWITCH, INPUT_PULLUP);

  switch_bit = switch_bit_in();
}

//=====================================================
// loop
//=====================================================
void loop() {
  func_state[state]();
  led(switch_bit);
}
