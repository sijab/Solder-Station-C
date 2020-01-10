/*
 * key.h
 *
 *  Created on: 08.01.2020
 *      Author: Damian
 */

#ifndef KEY_KEY_H_
#define KEY_KEY_H_

#define KEY_DIR DDRD
#define KEY_PORT PORTD
#define KEY_PIN PIND

#define KEY (1<<PD2)

#define KEY_PRESS (!(KEY_PIN & KEY))
#define KEY_NO_PRESS (KEY_PIN & KEY)

#define MAX_CNT 2000
#define MIN_CNT 400


void init_kbc(void);
void read_kbc(uint8_t *short_press, uint8_t *long_press);
void reset_cnt(void);

#endif /* KEY_KEY_H_ */